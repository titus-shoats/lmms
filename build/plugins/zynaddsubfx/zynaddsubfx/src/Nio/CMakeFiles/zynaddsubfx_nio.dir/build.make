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
include plugins/zynaddsubfx/zynaddsubfx/src/Nio/CMakeFiles/zynaddsubfx_nio.dir/depend.make

# Include the progress variables for this target.
include plugins/zynaddsubfx/zynaddsubfx/src/Nio/CMakeFiles/zynaddsubfx_nio.dir/progress.make

# Include the compile flags for this target's objects.
include plugins/zynaddsubfx/zynaddsubfx/src/Nio/CMakeFiles/zynaddsubfx_nio.dir/flags.make

plugins/zynaddsubfx/zynaddsubfx/src/Nio/CMakeFiles/zynaddsubfx_nio.dir/WavEngine.cpp.o: plugins/zynaddsubfx/zynaddsubfx/src/Nio/CMakeFiles/zynaddsubfx_nio.dir/flags.make
plugins/zynaddsubfx/zynaddsubfx/src/Nio/CMakeFiles/zynaddsubfx_nio.dir/WavEngine.cpp.o: ../plugins/zynaddsubfx/zynaddsubfx/src/Nio/WavEngine.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/root/lmms/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object plugins/zynaddsubfx/zynaddsubfx/src/Nio/CMakeFiles/zynaddsubfx_nio.dir/WavEngine.cpp.o"
	cd /root/lmms/build/plugins/zynaddsubfx/zynaddsubfx/src/Nio && /bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/zynaddsubfx_nio.dir/WavEngine.cpp.o -c /root/lmms/plugins/zynaddsubfx/zynaddsubfx/src/Nio/WavEngine.cpp

plugins/zynaddsubfx/zynaddsubfx/src/Nio/CMakeFiles/zynaddsubfx_nio.dir/WavEngine.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/zynaddsubfx_nio.dir/WavEngine.cpp.i"
	cd /root/lmms/build/plugins/zynaddsubfx/zynaddsubfx/src/Nio && /bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /root/lmms/plugins/zynaddsubfx/zynaddsubfx/src/Nio/WavEngine.cpp > CMakeFiles/zynaddsubfx_nio.dir/WavEngine.cpp.i

plugins/zynaddsubfx/zynaddsubfx/src/Nio/CMakeFiles/zynaddsubfx_nio.dir/WavEngine.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/zynaddsubfx_nio.dir/WavEngine.cpp.s"
	cd /root/lmms/build/plugins/zynaddsubfx/zynaddsubfx/src/Nio && /bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /root/lmms/plugins/zynaddsubfx/zynaddsubfx/src/Nio/WavEngine.cpp -o CMakeFiles/zynaddsubfx_nio.dir/WavEngine.cpp.s

plugins/zynaddsubfx/zynaddsubfx/src/Nio/CMakeFiles/zynaddsubfx_nio.dir/NulEngine.cpp.o: plugins/zynaddsubfx/zynaddsubfx/src/Nio/CMakeFiles/zynaddsubfx_nio.dir/flags.make
plugins/zynaddsubfx/zynaddsubfx/src/Nio/CMakeFiles/zynaddsubfx_nio.dir/NulEngine.cpp.o: ../plugins/zynaddsubfx/zynaddsubfx/src/Nio/NulEngine.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/root/lmms/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object plugins/zynaddsubfx/zynaddsubfx/src/Nio/CMakeFiles/zynaddsubfx_nio.dir/NulEngine.cpp.o"
	cd /root/lmms/build/plugins/zynaddsubfx/zynaddsubfx/src/Nio && /bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/zynaddsubfx_nio.dir/NulEngine.cpp.o -c /root/lmms/plugins/zynaddsubfx/zynaddsubfx/src/Nio/NulEngine.cpp

plugins/zynaddsubfx/zynaddsubfx/src/Nio/CMakeFiles/zynaddsubfx_nio.dir/NulEngine.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/zynaddsubfx_nio.dir/NulEngine.cpp.i"
	cd /root/lmms/build/plugins/zynaddsubfx/zynaddsubfx/src/Nio && /bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /root/lmms/plugins/zynaddsubfx/zynaddsubfx/src/Nio/NulEngine.cpp > CMakeFiles/zynaddsubfx_nio.dir/NulEngine.cpp.i

plugins/zynaddsubfx/zynaddsubfx/src/Nio/CMakeFiles/zynaddsubfx_nio.dir/NulEngine.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/zynaddsubfx_nio.dir/NulEngine.cpp.s"
	cd /root/lmms/build/plugins/zynaddsubfx/zynaddsubfx/src/Nio && /bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /root/lmms/plugins/zynaddsubfx/zynaddsubfx/src/Nio/NulEngine.cpp -o CMakeFiles/zynaddsubfx_nio.dir/NulEngine.cpp.s

plugins/zynaddsubfx/zynaddsubfx/src/Nio/CMakeFiles/zynaddsubfx_nio.dir/AudioOut.cpp.o: plugins/zynaddsubfx/zynaddsubfx/src/Nio/CMakeFiles/zynaddsubfx_nio.dir/flags.make
plugins/zynaddsubfx/zynaddsubfx/src/Nio/CMakeFiles/zynaddsubfx_nio.dir/AudioOut.cpp.o: ../plugins/zynaddsubfx/zynaddsubfx/src/Nio/AudioOut.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/root/lmms/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object plugins/zynaddsubfx/zynaddsubfx/src/Nio/CMakeFiles/zynaddsubfx_nio.dir/AudioOut.cpp.o"
	cd /root/lmms/build/plugins/zynaddsubfx/zynaddsubfx/src/Nio && /bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/zynaddsubfx_nio.dir/AudioOut.cpp.o -c /root/lmms/plugins/zynaddsubfx/zynaddsubfx/src/Nio/AudioOut.cpp

plugins/zynaddsubfx/zynaddsubfx/src/Nio/CMakeFiles/zynaddsubfx_nio.dir/AudioOut.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/zynaddsubfx_nio.dir/AudioOut.cpp.i"
	cd /root/lmms/build/plugins/zynaddsubfx/zynaddsubfx/src/Nio && /bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /root/lmms/plugins/zynaddsubfx/zynaddsubfx/src/Nio/AudioOut.cpp > CMakeFiles/zynaddsubfx_nio.dir/AudioOut.cpp.i

plugins/zynaddsubfx/zynaddsubfx/src/Nio/CMakeFiles/zynaddsubfx_nio.dir/AudioOut.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/zynaddsubfx_nio.dir/AudioOut.cpp.s"
	cd /root/lmms/build/plugins/zynaddsubfx/zynaddsubfx/src/Nio && /bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /root/lmms/plugins/zynaddsubfx/zynaddsubfx/src/Nio/AudioOut.cpp -o CMakeFiles/zynaddsubfx_nio.dir/AudioOut.cpp.s

plugins/zynaddsubfx/zynaddsubfx/src/Nio/CMakeFiles/zynaddsubfx_nio.dir/MidiIn.cpp.o: plugins/zynaddsubfx/zynaddsubfx/src/Nio/CMakeFiles/zynaddsubfx_nio.dir/flags.make
plugins/zynaddsubfx/zynaddsubfx/src/Nio/CMakeFiles/zynaddsubfx_nio.dir/MidiIn.cpp.o: ../plugins/zynaddsubfx/zynaddsubfx/src/Nio/MidiIn.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/root/lmms/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object plugins/zynaddsubfx/zynaddsubfx/src/Nio/CMakeFiles/zynaddsubfx_nio.dir/MidiIn.cpp.o"
	cd /root/lmms/build/plugins/zynaddsubfx/zynaddsubfx/src/Nio && /bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/zynaddsubfx_nio.dir/MidiIn.cpp.o -c /root/lmms/plugins/zynaddsubfx/zynaddsubfx/src/Nio/MidiIn.cpp

plugins/zynaddsubfx/zynaddsubfx/src/Nio/CMakeFiles/zynaddsubfx_nio.dir/MidiIn.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/zynaddsubfx_nio.dir/MidiIn.cpp.i"
	cd /root/lmms/build/plugins/zynaddsubfx/zynaddsubfx/src/Nio && /bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /root/lmms/plugins/zynaddsubfx/zynaddsubfx/src/Nio/MidiIn.cpp > CMakeFiles/zynaddsubfx_nio.dir/MidiIn.cpp.i

plugins/zynaddsubfx/zynaddsubfx/src/Nio/CMakeFiles/zynaddsubfx_nio.dir/MidiIn.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/zynaddsubfx_nio.dir/MidiIn.cpp.s"
	cd /root/lmms/build/plugins/zynaddsubfx/zynaddsubfx/src/Nio && /bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /root/lmms/plugins/zynaddsubfx/zynaddsubfx/src/Nio/MidiIn.cpp -o CMakeFiles/zynaddsubfx_nio.dir/MidiIn.cpp.s

plugins/zynaddsubfx/zynaddsubfx/src/Nio/CMakeFiles/zynaddsubfx_nio.dir/OutMgr.cpp.o: plugins/zynaddsubfx/zynaddsubfx/src/Nio/CMakeFiles/zynaddsubfx_nio.dir/flags.make
plugins/zynaddsubfx/zynaddsubfx/src/Nio/CMakeFiles/zynaddsubfx_nio.dir/OutMgr.cpp.o: ../plugins/zynaddsubfx/zynaddsubfx/src/Nio/OutMgr.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/root/lmms/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object plugins/zynaddsubfx/zynaddsubfx/src/Nio/CMakeFiles/zynaddsubfx_nio.dir/OutMgr.cpp.o"
	cd /root/lmms/build/plugins/zynaddsubfx/zynaddsubfx/src/Nio && /bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/zynaddsubfx_nio.dir/OutMgr.cpp.o -c /root/lmms/plugins/zynaddsubfx/zynaddsubfx/src/Nio/OutMgr.cpp

plugins/zynaddsubfx/zynaddsubfx/src/Nio/CMakeFiles/zynaddsubfx_nio.dir/OutMgr.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/zynaddsubfx_nio.dir/OutMgr.cpp.i"
	cd /root/lmms/build/plugins/zynaddsubfx/zynaddsubfx/src/Nio && /bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /root/lmms/plugins/zynaddsubfx/zynaddsubfx/src/Nio/OutMgr.cpp > CMakeFiles/zynaddsubfx_nio.dir/OutMgr.cpp.i

plugins/zynaddsubfx/zynaddsubfx/src/Nio/CMakeFiles/zynaddsubfx_nio.dir/OutMgr.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/zynaddsubfx_nio.dir/OutMgr.cpp.s"
	cd /root/lmms/build/plugins/zynaddsubfx/zynaddsubfx/src/Nio && /bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /root/lmms/plugins/zynaddsubfx/zynaddsubfx/src/Nio/OutMgr.cpp -o CMakeFiles/zynaddsubfx_nio.dir/OutMgr.cpp.s

plugins/zynaddsubfx/zynaddsubfx/src/Nio/CMakeFiles/zynaddsubfx_nio.dir/InMgr.cpp.o: plugins/zynaddsubfx/zynaddsubfx/src/Nio/CMakeFiles/zynaddsubfx_nio.dir/flags.make
plugins/zynaddsubfx/zynaddsubfx/src/Nio/CMakeFiles/zynaddsubfx_nio.dir/InMgr.cpp.o: ../plugins/zynaddsubfx/zynaddsubfx/src/Nio/InMgr.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/root/lmms/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object plugins/zynaddsubfx/zynaddsubfx/src/Nio/CMakeFiles/zynaddsubfx_nio.dir/InMgr.cpp.o"
	cd /root/lmms/build/plugins/zynaddsubfx/zynaddsubfx/src/Nio && /bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/zynaddsubfx_nio.dir/InMgr.cpp.o -c /root/lmms/plugins/zynaddsubfx/zynaddsubfx/src/Nio/InMgr.cpp

plugins/zynaddsubfx/zynaddsubfx/src/Nio/CMakeFiles/zynaddsubfx_nio.dir/InMgr.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/zynaddsubfx_nio.dir/InMgr.cpp.i"
	cd /root/lmms/build/plugins/zynaddsubfx/zynaddsubfx/src/Nio && /bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /root/lmms/plugins/zynaddsubfx/zynaddsubfx/src/Nio/InMgr.cpp > CMakeFiles/zynaddsubfx_nio.dir/InMgr.cpp.i

plugins/zynaddsubfx/zynaddsubfx/src/Nio/CMakeFiles/zynaddsubfx_nio.dir/InMgr.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/zynaddsubfx_nio.dir/InMgr.cpp.s"
	cd /root/lmms/build/plugins/zynaddsubfx/zynaddsubfx/src/Nio && /bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /root/lmms/plugins/zynaddsubfx/zynaddsubfx/src/Nio/InMgr.cpp -o CMakeFiles/zynaddsubfx_nio.dir/InMgr.cpp.s

plugins/zynaddsubfx/zynaddsubfx/src/Nio/CMakeFiles/zynaddsubfx_nio.dir/Engine.cpp.o: plugins/zynaddsubfx/zynaddsubfx/src/Nio/CMakeFiles/zynaddsubfx_nio.dir/flags.make
plugins/zynaddsubfx/zynaddsubfx/src/Nio/CMakeFiles/zynaddsubfx_nio.dir/Engine.cpp.o: ../plugins/zynaddsubfx/zynaddsubfx/src/Nio/Engine.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/root/lmms/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object plugins/zynaddsubfx/zynaddsubfx/src/Nio/CMakeFiles/zynaddsubfx_nio.dir/Engine.cpp.o"
	cd /root/lmms/build/plugins/zynaddsubfx/zynaddsubfx/src/Nio && /bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/zynaddsubfx_nio.dir/Engine.cpp.o -c /root/lmms/plugins/zynaddsubfx/zynaddsubfx/src/Nio/Engine.cpp

plugins/zynaddsubfx/zynaddsubfx/src/Nio/CMakeFiles/zynaddsubfx_nio.dir/Engine.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/zynaddsubfx_nio.dir/Engine.cpp.i"
	cd /root/lmms/build/plugins/zynaddsubfx/zynaddsubfx/src/Nio && /bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /root/lmms/plugins/zynaddsubfx/zynaddsubfx/src/Nio/Engine.cpp > CMakeFiles/zynaddsubfx_nio.dir/Engine.cpp.i

plugins/zynaddsubfx/zynaddsubfx/src/Nio/CMakeFiles/zynaddsubfx_nio.dir/Engine.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/zynaddsubfx_nio.dir/Engine.cpp.s"
	cd /root/lmms/build/plugins/zynaddsubfx/zynaddsubfx/src/Nio && /bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /root/lmms/plugins/zynaddsubfx/zynaddsubfx/src/Nio/Engine.cpp -o CMakeFiles/zynaddsubfx_nio.dir/Engine.cpp.s

plugins/zynaddsubfx/zynaddsubfx/src/Nio/CMakeFiles/zynaddsubfx_nio.dir/EngineMgr.cpp.o: plugins/zynaddsubfx/zynaddsubfx/src/Nio/CMakeFiles/zynaddsubfx_nio.dir/flags.make
plugins/zynaddsubfx/zynaddsubfx/src/Nio/CMakeFiles/zynaddsubfx_nio.dir/EngineMgr.cpp.o: ../plugins/zynaddsubfx/zynaddsubfx/src/Nio/EngineMgr.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/root/lmms/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object plugins/zynaddsubfx/zynaddsubfx/src/Nio/CMakeFiles/zynaddsubfx_nio.dir/EngineMgr.cpp.o"
	cd /root/lmms/build/plugins/zynaddsubfx/zynaddsubfx/src/Nio && /bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/zynaddsubfx_nio.dir/EngineMgr.cpp.o -c /root/lmms/plugins/zynaddsubfx/zynaddsubfx/src/Nio/EngineMgr.cpp

plugins/zynaddsubfx/zynaddsubfx/src/Nio/CMakeFiles/zynaddsubfx_nio.dir/EngineMgr.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/zynaddsubfx_nio.dir/EngineMgr.cpp.i"
	cd /root/lmms/build/plugins/zynaddsubfx/zynaddsubfx/src/Nio && /bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /root/lmms/plugins/zynaddsubfx/zynaddsubfx/src/Nio/EngineMgr.cpp > CMakeFiles/zynaddsubfx_nio.dir/EngineMgr.cpp.i

plugins/zynaddsubfx/zynaddsubfx/src/Nio/CMakeFiles/zynaddsubfx_nio.dir/EngineMgr.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/zynaddsubfx_nio.dir/EngineMgr.cpp.s"
	cd /root/lmms/build/plugins/zynaddsubfx/zynaddsubfx/src/Nio && /bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /root/lmms/plugins/zynaddsubfx/zynaddsubfx/src/Nio/EngineMgr.cpp -o CMakeFiles/zynaddsubfx_nio.dir/EngineMgr.cpp.s

plugins/zynaddsubfx/zynaddsubfx/src/Nio/CMakeFiles/zynaddsubfx_nio.dir/Nio.cpp.o: plugins/zynaddsubfx/zynaddsubfx/src/Nio/CMakeFiles/zynaddsubfx_nio.dir/flags.make
plugins/zynaddsubfx/zynaddsubfx/src/Nio/CMakeFiles/zynaddsubfx_nio.dir/Nio.cpp.o: ../plugins/zynaddsubfx/zynaddsubfx/src/Nio/Nio.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/root/lmms/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object plugins/zynaddsubfx/zynaddsubfx/src/Nio/CMakeFiles/zynaddsubfx_nio.dir/Nio.cpp.o"
	cd /root/lmms/build/plugins/zynaddsubfx/zynaddsubfx/src/Nio && /bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/zynaddsubfx_nio.dir/Nio.cpp.o -c /root/lmms/plugins/zynaddsubfx/zynaddsubfx/src/Nio/Nio.cpp

plugins/zynaddsubfx/zynaddsubfx/src/Nio/CMakeFiles/zynaddsubfx_nio.dir/Nio.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/zynaddsubfx_nio.dir/Nio.cpp.i"
	cd /root/lmms/build/plugins/zynaddsubfx/zynaddsubfx/src/Nio && /bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /root/lmms/plugins/zynaddsubfx/zynaddsubfx/src/Nio/Nio.cpp > CMakeFiles/zynaddsubfx_nio.dir/Nio.cpp.i

plugins/zynaddsubfx/zynaddsubfx/src/Nio/CMakeFiles/zynaddsubfx_nio.dir/Nio.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/zynaddsubfx_nio.dir/Nio.cpp.s"
	cd /root/lmms/build/plugins/zynaddsubfx/zynaddsubfx/src/Nio && /bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /root/lmms/plugins/zynaddsubfx/zynaddsubfx/src/Nio/Nio.cpp -o CMakeFiles/zynaddsubfx_nio.dir/Nio.cpp.s

# Object files for target zynaddsubfx_nio
zynaddsubfx_nio_OBJECTS = \
"CMakeFiles/zynaddsubfx_nio.dir/WavEngine.cpp.o" \
"CMakeFiles/zynaddsubfx_nio.dir/NulEngine.cpp.o" \
"CMakeFiles/zynaddsubfx_nio.dir/AudioOut.cpp.o" \
"CMakeFiles/zynaddsubfx_nio.dir/MidiIn.cpp.o" \
"CMakeFiles/zynaddsubfx_nio.dir/OutMgr.cpp.o" \
"CMakeFiles/zynaddsubfx_nio.dir/InMgr.cpp.o" \
"CMakeFiles/zynaddsubfx_nio.dir/Engine.cpp.o" \
"CMakeFiles/zynaddsubfx_nio.dir/EngineMgr.cpp.o" \
"CMakeFiles/zynaddsubfx_nio.dir/Nio.cpp.o"

# External object files for target zynaddsubfx_nio
zynaddsubfx_nio_EXTERNAL_OBJECTS =

plugins/zynaddsubfx/zynaddsubfx/src/Nio/libzynaddsubfx_nio.a: plugins/zynaddsubfx/zynaddsubfx/src/Nio/CMakeFiles/zynaddsubfx_nio.dir/WavEngine.cpp.o
plugins/zynaddsubfx/zynaddsubfx/src/Nio/libzynaddsubfx_nio.a: plugins/zynaddsubfx/zynaddsubfx/src/Nio/CMakeFiles/zynaddsubfx_nio.dir/NulEngine.cpp.o
plugins/zynaddsubfx/zynaddsubfx/src/Nio/libzynaddsubfx_nio.a: plugins/zynaddsubfx/zynaddsubfx/src/Nio/CMakeFiles/zynaddsubfx_nio.dir/AudioOut.cpp.o
plugins/zynaddsubfx/zynaddsubfx/src/Nio/libzynaddsubfx_nio.a: plugins/zynaddsubfx/zynaddsubfx/src/Nio/CMakeFiles/zynaddsubfx_nio.dir/MidiIn.cpp.o
plugins/zynaddsubfx/zynaddsubfx/src/Nio/libzynaddsubfx_nio.a: plugins/zynaddsubfx/zynaddsubfx/src/Nio/CMakeFiles/zynaddsubfx_nio.dir/OutMgr.cpp.o
plugins/zynaddsubfx/zynaddsubfx/src/Nio/libzynaddsubfx_nio.a: plugins/zynaddsubfx/zynaddsubfx/src/Nio/CMakeFiles/zynaddsubfx_nio.dir/InMgr.cpp.o
plugins/zynaddsubfx/zynaddsubfx/src/Nio/libzynaddsubfx_nio.a: plugins/zynaddsubfx/zynaddsubfx/src/Nio/CMakeFiles/zynaddsubfx_nio.dir/Engine.cpp.o
plugins/zynaddsubfx/zynaddsubfx/src/Nio/libzynaddsubfx_nio.a: plugins/zynaddsubfx/zynaddsubfx/src/Nio/CMakeFiles/zynaddsubfx_nio.dir/EngineMgr.cpp.o
plugins/zynaddsubfx/zynaddsubfx/src/Nio/libzynaddsubfx_nio.a: plugins/zynaddsubfx/zynaddsubfx/src/Nio/CMakeFiles/zynaddsubfx_nio.dir/Nio.cpp.o
plugins/zynaddsubfx/zynaddsubfx/src/Nio/libzynaddsubfx_nio.a: plugins/zynaddsubfx/zynaddsubfx/src/Nio/CMakeFiles/zynaddsubfx_nio.dir/build.make
plugins/zynaddsubfx/zynaddsubfx/src/Nio/libzynaddsubfx_nio.a: plugins/zynaddsubfx/zynaddsubfx/src/Nio/CMakeFiles/zynaddsubfx_nio.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/root/lmms/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Linking CXX static library libzynaddsubfx_nio.a"
	cd /root/lmms/build/plugins/zynaddsubfx/zynaddsubfx/src/Nio && $(CMAKE_COMMAND) -P CMakeFiles/zynaddsubfx_nio.dir/cmake_clean_target.cmake
	cd /root/lmms/build/plugins/zynaddsubfx/zynaddsubfx/src/Nio && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/zynaddsubfx_nio.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
plugins/zynaddsubfx/zynaddsubfx/src/Nio/CMakeFiles/zynaddsubfx_nio.dir/build: plugins/zynaddsubfx/zynaddsubfx/src/Nio/libzynaddsubfx_nio.a

.PHONY : plugins/zynaddsubfx/zynaddsubfx/src/Nio/CMakeFiles/zynaddsubfx_nio.dir/build

plugins/zynaddsubfx/zynaddsubfx/src/Nio/CMakeFiles/zynaddsubfx_nio.dir/clean:
	cd /root/lmms/build/plugins/zynaddsubfx/zynaddsubfx/src/Nio && $(CMAKE_COMMAND) -P CMakeFiles/zynaddsubfx_nio.dir/cmake_clean.cmake
.PHONY : plugins/zynaddsubfx/zynaddsubfx/src/Nio/CMakeFiles/zynaddsubfx_nio.dir/clean

plugins/zynaddsubfx/zynaddsubfx/src/Nio/CMakeFiles/zynaddsubfx_nio.dir/depend:
	cd /root/lmms/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /root/lmms /root/lmms/plugins/zynaddsubfx/zynaddsubfx/src/Nio /root/lmms/build /root/lmms/build/plugins/zynaddsubfx/zynaddsubfx/src/Nio /root/lmms/build/plugins/zynaddsubfx/zynaddsubfx/src/Nio/CMakeFiles/zynaddsubfx_nio.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : plugins/zynaddsubfx/zynaddsubfx/src/Nio/CMakeFiles/zynaddsubfx_nio.dir/depend

