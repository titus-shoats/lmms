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
include plugins/LadspaEffect/tap/CMakeFiles/tap_deesser.dir/depend.make

# Include the progress variables for this target.
include plugins/LadspaEffect/tap/CMakeFiles/tap_deesser.dir/progress.make

# Include the compile flags for this target's objects.
include plugins/LadspaEffect/tap/CMakeFiles/tap_deesser.dir/flags.make

plugins/LadspaEffect/tap/CMakeFiles/tap_deesser.dir/tap-plugins/tap_deesser.c.o: plugins/LadspaEffect/tap/CMakeFiles/tap_deesser.dir/flags.make
plugins/LadspaEffect/tap/CMakeFiles/tap_deesser.dir/tap-plugins/tap_deesser.c.o: ../plugins/LadspaEffect/tap/tap-plugins/tap_deesser.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/root/lmms/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object plugins/LadspaEffect/tap/CMakeFiles/tap_deesser.dir/tap-plugins/tap_deesser.c.o"
	cd /root/lmms/build/plugins/LadspaEffect/tap && /bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/tap_deesser.dir/tap-plugins/tap_deesser.c.o   -c /root/lmms/plugins/LadspaEffect/tap/tap-plugins/tap_deesser.c

plugins/LadspaEffect/tap/CMakeFiles/tap_deesser.dir/tap-plugins/tap_deesser.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/tap_deesser.dir/tap-plugins/tap_deesser.c.i"
	cd /root/lmms/build/plugins/LadspaEffect/tap && /bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /root/lmms/plugins/LadspaEffect/tap/tap-plugins/tap_deesser.c > CMakeFiles/tap_deesser.dir/tap-plugins/tap_deesser.c.i

plugins/LadspaEffect/tap/CMakeFiles/tap_deesser.dir/tap-plugins/tap_deesser.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/tap_deesser.dir/tap-plugins/tap_deesser.c.s"
	cd /root/lmms/build/plugins/LadspaEffect/tap && /bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /root/lmms/plugins/LadspaEffect/tap/tap-plugins/tap_deesser.c -o CMakeFiles/tap_deesser.dir/tap-plugins/tap_deesser.c.s

# Object files for target tap_deesser
tap_deesser_OBJECTS = \
"CMakeFiles/tap_deesser.dir/tap-plugins/tap_deesser.c.o"

# External object files for target tap_deesser
tap_deesser_EXTERNAL_OBJECTS =

plugins/ladspa/tap_deesser.so: plugins/LadspaEffect/tap/CMakeFiles/tap_deesser.dir/tap-plugins/tap_deesser.c.o
plugins/ladspa/tap_deesser.so: plugins/LadspaEffect/tap/CMakeFiles/tap_deesser.dir/build.make
plugins/ladspa/tap_deesser.so: plugins/LadspaEffect/tap/CMakeFiles/tap_deesser.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/root/lmms/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C shared module ../../ladspa/tap_deesser.so"
	cd /root/lmms/build/plugins/LadspaEffect/tap && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/tap_deesser.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
plugins/LadspaEffect/tap/CMakeFiles/tap_deesser.dir/build: plugins/ladspa/tap_deesser.so

.PHONY : plugins/LadspaEffect/tap/CMakeFiles/tap_deesser.dir/build

plugins/LadspaEffect/tap/CMakeFiles/tap_deesser.dir/clean:
	cd /root/lmms/build/plugins/LadspaEffect/tap && $(CMAKE_COMMAND) -P CMakeFiles/tap_deesser.dir/cmake_clean.cmake
.PHONY : plugins/LadspaEffect/tap/CMakeFiles/tap_deesser.dir/clean

plugins/LadspaEffect/tap/CMakeFiles/tap_deesser.dir/depend:
	cd /root/lmms/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /root/lmms /root/lmms/plugins/LadspaEffect/tap /root/lmms/build /root/lmms/build/plugins/LadspaEffect/tap /root/lmms/build/plugins/LadspaEffect/tap/CMakeFiles/tap_deesser.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : plugins/LadspaEffect/tap/CMakeFiles/tap_deesser.dir/depend

