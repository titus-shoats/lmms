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
include plugins/zynaddsubfx/CMakeFiles/RemoteZynAddSubFx.dir/depend.make

# Include the progress variables for this target.
include plugins/zynaddsubfx/CMakeFiles/RemoteZynAddSubFx.dir/progress.make

# Include the compile flags for this target's objects.
include plugins/zynaddsubfx/CMakeFiles/RemoteZynAddSubFx.dir/flags.make

plugins/zynaddsubfx/CMakeFiles/RemoteZynAddSubFx.dir/RemoteZynAddSubFx.cpp.o: plugins/zynaddsubfx/CMakeFiles/RemoteZynAddSubFx.dir/flags.make
plugins/zynaddsubfx/CMakeFiles/RemoteZynAddSubFx.dir/RemoteZynAddSubFx.cpp.o: ../plugins/zynaddsubfx/RemoteZynAddSubFx.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/root/lmms/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object plugins/zynaddsubfx/CMakeFiles/RemoteZynAddSubFx.dir/RemoteZynAddSubFx.cpp.o"
	cd /root/lmms/build/plugins/zynaddsubfx && /bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/RemoteZynAddSubFx.dir/RemoteZynAddSubFx.cpp.o -c /root/lmms/plugins/zynaddsubfx/RemoteZynAddSubFx.cpp

plugins/zynaddsubfx/CMakeFiles/RemoteZynAddSubFx.dir/RemoteZynAddSubFx.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/RemoteZynAddSubFx.dir/RemoteZynAddSubFx.cpp.i"
	cd /root/lmms/build/plugins/zynaddsubfx && /bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /root/lmms/plugins/zynaddsubfx/RemoteZynAddSubFx.cpp > CMakeFiles/RemoteZynAddSubFx.dir/RemoteZynAddSubFx.cpp.i

plugins/zynaddsubfx/CMakeFiles/RemoteZynAddSubFx.dir/RemoteZynAddSubFx.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/RemoteZynAddSubFx.dir/RemoteZynAddSubFx.cpp.s"
	cd /root/lmms/build/plugins/zynaddsubfx && /bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /root/lmms/plugins/zynaddsubfx/RemoteZynAddSubFx.cpp -o CMakeFiles/RemoteZynAddSubFx.dir/RemoteZynAddSubFx.cpp.s

# Object files for target RemoteZynAddSubFx
RemoteZynAddSubFx_OBJECTS = \
"CMakeFiles/RemoteZynAddSubFx.dir/RemoteZynAddSubFx.cpp.o"

# External object files for target RemoteZynAddSubFx
RemoteZynAddSubFx_EXTERNAL_OBJECTS =

plugins/RemoteZynAddSubFx: plugins/zynaddsubfx/CMakeFiles/RemoteZynAddSubFx.dir/RemoteZynAddSubFx.cpp.o
plugins/RemoteZynAddSubFx: plugins/zynaddsubfx/CMakeFiles/RemoteZynAddSubFx.dir/build.make
plugins/RemoteZynAddSubFx: plugins/zynaddsubfx/zynaddsubfx/src/UI/libzynaddsubfx_gui.a
plugins/RemoteZynAddSubFx: /usr/lib/x86_64-linux-gnu/libQt5Core.so.5.12.2
plugins/RemoteZynAddSubFx: plugins/zynaddsubfx/CMakeFiles/RemoteZynAddSubFx.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/root/lmms/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable ../RemoteZynAddSubFx"
	cd /root/lmms/build/plugins/zynaddsubfx && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/RemoteZynAddSubFx.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
plugins/zynaddsubfx/CMakeFiles/RemoteZynAddSubFx.dir/build: plugins/RemoteZynAddSubFx

.PHONY : plugins/zynaddsubfx/CMakeFiles/RemoteZynAddSubFx.dir/build

plugins/zynaddsubfx/CMakeFiles/RemoteZynAddSubFx.dir/clean:
	cd /root/lmms/build/plugins/zynaddsubfx && $(CMAKE_COMMAND) -P CMakeFiles/RemoteZynAddSubFx.dir/cmake_clean.cmake
.PHONY : plugins/zynaddsubfx/CMakeFiles/RemoteZynAddSubFx.dir/clean

plugins/zynaddsubfx/CMakeFiles/RemoteZynAddSubFx.dir/depend:
	cd /root/lmms/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /root/lmms /root/lmms/plugins/zynaddsubfx /root/lmms/build /root/lmms/build/plugins/zynaddsubfx /root/lmms/build/plugins/zynaddsubfx/CMakeFiles/RemoteZynAddSubFx.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : plugins/zynaddsubfx/CMakeFiles/RemoteZynAddSubFx.dir/depend
