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
include plugins/LadspaEffect/swh/CMakeFiles/sc3_1427.dir/depend.make

# Include the progress variables for this target.
include plugins/LadspaEffect/swh/CMakeFiles/sc3_1427.dir/progress.make

# Include the compile flags for this target's objects.
include plugins/LadspaEffect/swh/CMakeFiles/sc3_1427.dir/flags.make

../plugins/LadspaEffect/swh/ladspa/sc3_1427.c: ../plugins/LadspaEffect/swh/ladspa/sc3_1427.xml
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/root/lmms/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating ../../../../plugins/LadspaEffect/swh/ladspa/sc3_1427.c"
	cd /root/lmms/plugins/LadspaEffect/swh/ladspa && ./makestub.pl /root/lmms/plugins/LadspaEffect/swh/ladspa/sc3_1427.xml > /root/lmms/plugins/LadspaEffect/swh/ladspa/sc3_1427.c

plugins/LadspaEffect/swh/CMakeFiles/sc3_1427.dir/ladspa/sc3_1427.c.o: plugins/LadspaEffect/swh/CMakeFiles/sc3_1427.dir/flags.make
plugins/LadspaEffect/swh/CMakeFiles/sc3_1427.dir/ladspa/sc3_1427.c.o: ../plugins/LadspaEffect/swh/ladspa/sc3_1427.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/root/lmms/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object plugins/LadspaEffect/swh/CMakeFiles/sc3_1427.dir/ladspa/sc3_1427.c.o"
	cd /root/lmms/build/plugins/LadspaEffect/swh && /bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/sc3_1427.dir/ladspa/sc3_1427.c.o   -c /root/lmms/plugins/LadspaEffect/swh/ladspa/sc3_1427.c

plugins/LadspaEffect/swh/CMakeFiles/sc3_1427.dir/ladspa/sc3_1427.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/sc3_1427.dir/ladspa/sc3_1427.c.i"
	cd /root/lmms/build/plugins/LadspaEffect/swh && /bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /root/lmms/plugins/LadspaEffect/swh/ladspa/sc3_1427.c > CMakeFiles/sc3_1427.dir/ladspa/sc3_1427.c.i

plugins/LadspaEffect/swh/CMakeFiles/sc3_1427.dir/ladspa/sc3_1427.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/sc3_1427.dir/ladspa/sc3_1427.c.s"
	cd /root/lmms/build/plugins/LadspaEffect/swh && /bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /root/lmms/plugins/LadspaEffect/swh/ladspa/sc3_1427.c -o CMakeFiles/sc3_1427.dir/ladspa/sc3_1427.c.s

# Object files for target sc3_1427
sc3_1427_OBJECTS = \
"CMakeFiles/sc3_1427.dir/ladspa/sc3_1427.c.o"

# External object files for target sc3_1427
sc3_1427_EXTERNAL_OBJECTS =

plugins/ladspa/sc3_1427.so: plugins/LadspaEffect/swh/CMakeFiles/sc3_1427.dir/ladspa/sc3_1427.c.o
plugins/ladspa/sc3_1427.so: plugins/LadspaEffect/swh/CMakeFiles/sc3_1427.dir/build.make
plugins/ladspa/sc3_1427.so: /usr/lib/x86_64-linux-gnu/libfftw3f.so
plugins/ladspa/sc3_1427.so: plugins/LadspaEffect/swh/librms.a
plugins/ladspa/sc3_1427.so: plugins/LadspaEffect/swh/libdb.a
plugins/ladspa/sc3_1427.so: plugins/LadspaEffect/swh/CMakeFiles/sc3_1427.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/root/lmms/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking C shared module ../../ladspa/sc3_1427.so"
	cd /root/lmms/build/plugins/LadspaEffect/swh && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/sc3_1427.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
plugins/LadspaEffect/swh/CMakeFiles/sc3_1427.dir/build: plugins/ladspa/sc3_1427.so

.PHONY : plugins/LadspaEffect/swh/CMakeFiles/sc3_1427.dir/build

plugins/LadspaEffect/swh/CMakeFiles/sc3_1427.dir/clean:
	cd /root/lmms/build/plugins/LadspaEffect/swh && $(CMAKE_COMMAND) -P CMakeFiles/sc3_1427.dir/cmake_clean.cmake
.PHONY : plugins/LadspaEffect/swh/CMakeFiles/sc3_1427.dir/clean

plugins/LadspaEffect/swh/CMakeFiles/sc3_1427.dir/depend: ../plugins/LadspaEffect/swh/ladspa/sc3_1427.c
	cd /root/lmms/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /root/lmms /root/lmms/plugins/LadspaEffect/swh /root/lmms/build /root/lmms/build/plugins/LadspaEffect/swh /root/lmms/build/plugins/LadspaEffect/swh/CMakeFiles/sc3_1427.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : plugins/LadspaEffect/swh/CMakeFiles/sc3_1427.dir/depend

