/*************************************************************************/
/* ringbuffer - a multi-reader, lock-free ringbuffer lib                 */
/* Copyright (C) 2014-2019                                               */
/* Johannes Lorenz (j.git@lorenz-ho.me, $$$=@)                           */
/*                                                                       */
/* This program is free software; you can redistribute it and/or modify  */
/* it under the terms of the GNU General Public License as published by  */
/* the Free Software Foundation; either version 3 of the License, or (at */
/* your option) any later version.                                       */
/* This program is distributed in the hope that it will be useful, but   */
/* WITHOUT ANY WARRANTY; without even the implied warranty of            */
/* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU      */
/* General Public License for more details.                              */
/*                                                                       */
/* You should have received a copy of the GNU General Public License     */
/* along with this program; if not, write to the Free Software           */
/* Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110, USA  */
/*************************************************************************/

#include <algorithm>
#include <limits>

#include <ringbuffer/ringbuffer.h>
#include "ringbuffer-config.h"

#ifdef USE_MLOCK
	#include <sys/mman.h>
#endif

/*
	ringbuffer_common_t
*/
std::size_t ringbuffer_common_t::calc_size(std::size_t sz)
{
	std::size_t power_of_two;
	for (power_of_two = 1;
		(static_cast<std::size_t>(1) << power_of_two) < sz; power_of_two++) ;
	return 1 << power_of_two;
}

ringbuffer_common_t::ringbuffer_common_t(std::size_t sz) :
	size(calc_size(sz)),
	size_mask(size - 1)
{}

/*
	ringbuffer_t
*/
void ringbuffer_base::munlock(const void* const buf, std::size_t each)
{
#ifdef USE_MLOCK
	if (buf && mlocked) {
		::munlock(buf, size * each);
	}
#else
	(void)buf;
	(void)each;
#endif
}

bool ringbuffer_base::mlock(const void* const buf, std::size_t each)
{
#ifdef USE_MLOCK
	if (::mlock(buf, size * each))
		return false;
	else
	{
		mlocked = 1;
		return true;
	}
#else
	(void)buf;
	(void)each;
	return false;
#endif
}

// TODO: only include header with ringbuffer_*_base?

std::size_t ringbuffer_base::write_space_preloaded(std::size_t w,
	std::size_t rl) const
{
	return (((size_mask - w) & (size_mask >> 1))) // = before next half
		+ ((rl == false) * (size >> 1)) // one more block?
			;
}

void ringbuffer_base::init_atomic_variables()
{
	w_ptr.store(0); // TODO: relaxed?
	readers_left.store(0);
}

std::size_t ringbuffer_base::write_space() const
{
	return write_space_preloaded(w_ptr.load(), // TODO: relaxed?
		readers_left.load()); // TODO: consume?
}

void ringbuffer_base::init_variables_for_write(std::size_t cnt,
		std::size_t& w, std::size_t& to_write,
		std::size_t& n1, std::size_t& n2)
{
	w = w_ptr.load(); // TODO: relaxed?
	std::size_t rl = readers_left.load(); // TODO: consume?

	// size calculations
	std::size_t free_cnt = write_space_preloaded(w, rl);

	to_write = cnt > free_cnt ? free_cnt : cnt;
	const std::size_t cnt2 = w + to_write;

	if (cnt2 > size) {
		n1 = size - w;
		n2 = cnt2 & size_mask;
	} else {
		n1 = to_write;
		n2 = 0;
	}

	// reset reader_left
	// TODO: inefficient xor:
	if((w ^ ((w + to_write) & size_mask)) & (size >> 1)) // msb flipped
	{
		if(rl)
		 throw "impossible";
		readers_left.store(num_readers);
	}

}

/*
	ringbuffer_reader_t
*/
ringbuffer_reader_base::ringbuffer_reader_base(std::size_t sz) :
	ringbuffer_common_t(sz)
{
}

std::size_t ringbuffer_reader_base::read_space(std::size_t w) const
{
	const std::size_t r = read_ptr;
	if (w > r) {
		return w - r;
	} else {
		return (w - r + size) & size_mask;
	}
}

std::size_t ringbuffer_reader_base::read_space_1(std::size_t range) const
{
	const std::size_t r = read_ptr,
		dest = r + range;
	return (dest >= r) ? (dest - r) : (size - r);
	
}

std::size_t ringbuffer_reader_base::read_space_2(std::size_t range) const
{
	const std::size_t r = read_ptr,
		dest = r + range;
	return (dest < r) * (dest); 
}
