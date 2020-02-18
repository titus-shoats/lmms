#define LMMS_BUILD_LINUX
/* #undef LMMS_BUILD_WIN32 */
/* #undef LMMS_BUILD_WIN64 */
/* #undef LMMS_BUILD_APPLE */
/* #undef LMMS_BUILD_OPENBSD */
/* #undef LMMS_BUILD_FREEBSD */
/* #undef LMMS_BUILD_HAIKU */

/* #undef LMMS_HOST_X86 */
#define LMMS_HOST_X86_64

#define LMMS_HAVE_ALSA
#define LMMS_HAVE_FLUIDSYNTH
#define LMMS_HAVE_JACK
#define LMMS_HAVE_WEAKJACK
#define LMMS_HAVE_MP3LAME
#define LMMS_HAVE_OGGVORBIS
#define LMMS_HAVE_OSS
/* #undef LMMS_HAVE_SNDIO */
#define LMMS_HAVE_PORTAUDIO
/* #undef LMMS_HAVE_SOUNDIO */
#define LMMS_HAVE_PULSEAUDIO
#define LMMS_HAVE_SDL
/* #undef LMMS_HAVE_SDL2 */
#define LMMS_HAVE_STK
/* #undef LMMS_HAVE_VST */
/* #undef LMMS_HAVE_SF_COMPLEVEL */

/* #undef LMMS_DEBUG_FPE */

#define LMMS_HAVE_STDINT_H
#define LMMS_HAVE_STDLIB_H
#define LMMS_HAVE_PTHREAD_H
#define LMMS_HAVE_UNISTD_H
#define LMMS_HAVE_SYS_TYPES_H
#define LMMS_HAVE_SYS_IPC_H
#define LMMS_HAVE_SEMAPHORE_H
#define LMMS_HAVE_SYS_SHM_H
#define LMMS_HAVE_SYS_TIME_H
#define LMMS_HAVE_SYS_TIMES_H
#define LMMS_HAVE_SCHED_H
#define LMMS_HAVE_SYS_SOUNDCARD_H
/* #undef LMMS_HAVE_SOUNDCARD_H */
#define LMMS_HAVE_FCNTL_H
#define LMMS_HAVE_SYS_IOCTL_H
#define LMMS_HAVE_CTYPE_H
#define LMMS_HAVE_STRING_H
/* #undef LMMS_HAVE_PROCESS_H */
#define LMMS_HAVE_LOCALE_H

/* defines for libsamplerate */


/* Target processor clips on negative float to int conversion. */
/* #undef CPU_CLIPS_NEGATIVE */
#ifndef CPU_CLIPS_NEGATIVE
#define CPU_CLIPS_NEGATIVE 0
#endif

/* Target processor clips on positive float to int conversion. */
/* #undef CPU_CLIPS_POSITIVE */
#ifndef CPU_CLIPS_POSITIVE
#define CPU_CLIPS_POSITIVE 0
#endif

/* Define if you have C99's lrint function. */
/* #undef HAVE_LRINT */

/* Define if you have C99's lrintf function. */
/* #undef HAVE_LRINTF */

