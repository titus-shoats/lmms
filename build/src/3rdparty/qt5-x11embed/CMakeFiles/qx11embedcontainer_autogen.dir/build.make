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

# Utility rule file for qx11embedcontainer_autogen.

# Include the progress variables for this target.
include src/3rdparty/qt5-x11embed/CMakeFiles/qx11embedcontainer_autogen.dir/progress.make

src/3rdparty/qt5-x11embed/CMakeFiles/qx11embedcontainer_autogen:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/root/lmms/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Automatic MOC for target qx11embedcontainer"
	cd /root/lmms/build/src/3rdparty/qt5-x11embed && /usr/bin/cmake -E cmake_autogen /root/lmms/build/src/3rdparty/qt5-x11embed/CMakeFiles/qx11embedcontainer_autogen.dir/AutogenInfo.cmake Debug

qx11embedcontainer_autogen: src/3rdparty/qt5-x11embed/CMakeFiles/qx11embedcontainer_autogen
qx11embedcontainer_autogen: src/3rdparty/qt5-x11embed/CMakeFiles/qx11embedcontainer_autogen.dir/build.make

.PHONY : qx11embedcontainer_autogen

# Rule to build all files generated by this target.
src/3rdparty/qt5-x11embed/CMakeFiles/qx11embedcontainer_autogen.dir/build: qx11embedcontainer_autogen

.PHONY : src/3rdparty/qt5-x11embed/CMakeFiles/qx11embedcontainer_autogen.dir/build

src/3rdparty/qt5-x11embed/CMakeFiles/qx11embedcontainer_autogen.dir/clean:
	cd /root/lmms/build/src/3rdparty/qt5-x11embed && $(CMAKE_COMMAND) -P CMakeFiles/qx11embedcontainer_autogen.dir/cmake_clean.cmake
.PHONY : src/3rdparty/qt5-x11embed/CMakeFiles/qx11embedcontainer_autogen.dir/clean

src/3rdparty/qt5-x11embed/CMakeFiles/qx11embedcontainer_autogen.dir/depend:
	cd /root/lmms/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /root/lmms /root/lmms/src/3rdparty/qt5-x11embed /root/lmms/build /root/lmms/build/src/3rdparty/qt5-x11embed /root/lmms/build/src/3rdparty/qt5-x11embed/CMakeFiles/qx11embedcontainer_autogen.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/3rdparty/qt5-x11embed/CMakeFiles/qx11embedcontainer_autogen.dir/depend

