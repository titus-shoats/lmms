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

# Include any dependencies generated for this target.
include plugins/LadspaEffect/swh/CMakeFiles/rms.dir/depend.make

# Include the progress variables for this target.
include plugins/LadspaEffect/swh/CMakeFiles/rms.dir/progress.make

# Include the compile flags for this target's objects.
include plugins/LadspaEffect/swh/CMakeFiles/rms.dir/flags.make

plugins/LadspaEffect/swh/CMakeFiles/rms.dir/ladspa/util/rms.c.o: plugins/LadspaEffect/swh/CMakeFiles/rms.dir/flags.make
plugins/LadspaEffect/swh/CMakeFiles/rms.dir/ladspa/util/rms.c.o: ../plugins/LadspaEffect/swh/ladspa/util/rms.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/root/lmms/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object plugins/LadspaEffect/swh/CMakeFiles/rms.dir/ladspa/util/rms.c.o"
	cd /root/lmms/build/plugins/LadspaEffect/swh && /bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/rms.dir/ladspa/util/rms.c.o   -c /root/lmms/plugins/LadspaEffect/swh/ladspa/util/rms.c

plugins/LadspaEffect/swh/CMakeFiles/rms.dir/ladspa/util/rms.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/rms.dir/ladspa/util/rms.c.i"
	cd /root/lmms/build/plugins/LadspaEffect/swh && /bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /root/lmms/plugins/LadspaEffect/swh/ladspa/util/rms.c > CMakeFiles/rms.dir/ladspa/util/rms.c.i

plugins/LadspaEffect/swh/CMakeFiles/rms.dir/ladspa/util/rms.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/rms.dir/ladspa/util/rms.c.s"
	cd /root/lmms/build/plugins/LadspaEffect/swh && /bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /root/lmms/plugins/LadspaEffect/swh/ladspa/util/rms.c -o CMakeFiles/rms.dir/ladspa/util/rms.c.s

# Object files for target rms
rms_OBJECTS = \
"CMakeFiles/rms.dir/ladspa/util/rms.c.o"

# External object files for target rms
rms_EXTERNAL_OBJECTS =

plugins/LadspaEffect/swh/librms.a: plugins/LadspaEffect/swh/CMakeFiles/rms.dir/ladspa/util/rms.c.o
plugins/LadspaEffect/swh/librms.a: plugins/LadspaEffect/swh/CMakeFiles/rms.dir/build.make
plugins/LadspaEffect/swh/librms.a: plugins/LadspaEffect/swh/CMakeFiles/rms.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/root/lmms/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C static library librms.a"
	cd /root/lmms/build/plugins/LadspaEffect/swh && $(CMAKE_COMMAND) -P CMakeFiles/rms.dir/cmake_clean_target.cmake
	cd /root/lmms/build/plugins/LadspaEffect/swh && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/rms.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
plugins/LadspaEffect/swh/CMakeFiles/rms.dir/build: plugins/LadspaEffect/swh/librms.a

.PHONY : plugins/LadspaEffect/swh/CMakeFiles/rms.dir/build

plugins/LadspaEffect/swh/CMakeFiles/rms.dir/clean:
	cd /root/lmms/build/plugins/LadspaEffect/swh && $(CMAKE_COMMAND) -P CMakeFiles/rms.dir/cmake_clean.cmake
.PHONY : plugins/LadspaEffect/swh/CMakeFiles/rms.dir/clean

plugins/LadspaEffect/swh/CMakeFiles/rms.dir/depend:
	cd /root/lmms/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /root/lmms /root/lmms/plugins/LadspaEffect/swh /root/lmms/build /root/lmms/build/plugins/LadspaEffect/swh /root/lmms/build/plugins/LadspaEffect/swh/CMakeFiles/rms.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : plugins/LadspaEffect/swh/CMakeFiles/rms.dir/depend

