# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.13

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /root/lmms

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /root/lmms/build

# Utility rule file for sr.ts.

# Include the progress variables for this target.
include data/locale/CMakeFiles/sr.ts.dir/progress.make

data/locale/CMakeFiles/sr.ts:
	cd /root/lmms/data/locale && /usr/lib/qt5/bin/lupdate -locations none -no-obsolete -I /root/lmms/include/ /root/lmms/plugins -ts "/root/lmms/data/locale/sr.ts"

sr.ts: data/locale/CMakeFiles/sr.ts
sr.ts: data/locale/CMakeFiles/sr.ts.dir/build.make

.PHONY : sr.ts

# Rule to build all files generated by this target.
data/locale/CMakeFiles/sr.ts.dir/build: sr.ts

.PHONY : data/locale/CMakeFiles/sr.ts.dir/build

data/locale/CMakeFiles/sr.ts.dir/clean:
	cd /root/lmms/build/data/locale && $(CMAKE_COMMAND) -P CMakeFiles/sr.ts.dir/cmake_clean.cmake
.PHONY : data/locale/CMakeFiles/sr.ts.dir/clean

data/locale/CMakeFiles/sr.ts.dir/depend:
	cd /root/lmms/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /root/lmms /root/lmms/data/locale /root/lmms/build /root/lmms/build/data/locale /root/lmms/build/data/locale/CMakeFiles/sr.ts.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : data/locale/CMakeFiles/sr.ts.dir/depend
