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
include plugins/MidiExport/CMakeFiles/midiexport.dir/depend.make

# Include the progress variables for this target.
include plugins/MidiExport/CMakeFiles/midiexport.dir/progress.make

# Include the compile flags for this target's objects.
include plugins/MidiExport/CMakeFiles/midiexport.dir/flags.make

plugins/MidiExport/moc_MidiExport.cpp: ../plugins/MidiExport/MidiExport.h
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/root/lmms/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating moc_MidiExport.cpp"
	cd /root/lmms/build/plugins/MidiExport && /usr/lib/qt5/bin/moc @/root/lmms/build/plugins/MidiExport/moc_MidiExport.cpp_parameters

plugins/MidiExport/CMakeFiles/midiexport.dir/MidiExport.cpp.o: plugins/MidiExport/CMakeFiles/midiexport.dir/flags.make
plugins/MidiExport/CMakeFiles/midiexport.dir/MidiExport.cpp.o: ../plugins/MidiExport/MidiExport.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/root/lmms/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object plugins/MidiExport/CMakeFiles/midiexport.dir/MidiExport.cpp.o"
	cd /root/lmms/build/plugins/MidiExport && /bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/midiexport.dir/MidiExport.cpp.o -c /root/lmms/plugins/MidiExport/MidiExport.cpp

plugins/MidiExport/CMakeFiles/midiexport.dir/MidiExport.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/midiexport.dir/MidiExport.cpp.i"
	cd /root/lmms/build/plugins/MidiExport && /bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /root/lmms/plugins/MidiExport/MidiExport.cpp > CMakeFiles/midiexport.dir/MidiExport.cpp.i

plugins/MidiExport/CMakeFiles/midiexport.dir/MidiExport.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/midiexport.dir/MidiExport.cpp.s"
	cd /root/lmms/build/plugins/MidiExport && /bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /root/lmms/plugins/MidiExport/MidiExport.cpp -o CMakeFiles/midiexport.dir/MidiExport.cpp.s

plugins/MidiExport/CMakeFiles/midiexport.dir/moc_MidiExport.cpp.o: plugins/MidiExport/CMakeFiles/midiexport.dir/flags.make
plugins/MidiExport/CMakeFiles/midiexport.dir/moc_MidiExport.cpp.o: plugins/MidiExport/moc_MidiExport.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/root/lmms/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object plugins/MidiExport/CMakeFiles/midiexport.dir/moc_MidiExport.cpp.o"
	cd /root/lmms/build/plugins/MidiExport && /bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/midiexport.dir/moc_MidiExport.cpp.o -c /root/lmms/build/plugins/MidiExport/moc_MidiExport.cpp

plugins/MidiExport/CMakeFiles/midiexport.dir/moc_MidiExport.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/midiexport.dir/moc_MidiExport.cpp.i"
	cd /root/lmms/build/plugins/MidiExport && /bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /root/lmms/build/plugins/MidiExport/moc_MidiExport.cpp > CMakeFiles/midiexport.dir/moc_MidiExport.cpp.i

plugins/MidiExport/CMakeFiles/midiexport.dir/moc_MidiExport.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/midiexport.dir/moc_MidiExport.cpp.s"
	cd /root/lmms/build/plugins/MidiExport && /bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /root/lmms/build/plugins/MidiExport/moc_MidiExport.cpp -o CMakeFiles/midiexport.dir/moc_MidiExport.cpp.s

# Object files for target midiexport
midiexport_OBJECTS = \
"CMakeFiles/midiexport.dir/MidiExport.cpp.o" \
"CMakeFiles/midiexport.dir/moc_MidiExport.cpp.o"

# External object files for target midiexport
midiexport_EXTERNAL_OBJECTS =

plugins/libmidiexport.so: plugins/MidiExport/CMakeFiles/midiexport.dir/MidiExport.cpp.o
plugins/libmidiexport.so: plugins/MidiExport/CMakeFiles/midiexport.dir/moc_MidiExport.cpp.o
plugins/libmidiexport.so: plugins/MidiExport/CMakeFiles/midiexport.dir/build.make
plugins/libmidiexport.so: /usr/lib/x86_64-linux-gnu/libQt5Widgets.so.5.12.2
plugins/libmidiexport.so: /usr/lib/x86_64-linux-gnu/libQt5Xml.so.5.12.2
plugins/libmidiexport.so: /usr/lib/x86_64-linux-gnu/libQt5Gui.so.5.12.2
plugins/libmidiexport.so: /usr/lib/x86_64-linux-gnu/libQt5Core.so.5.12.2
plugins/libmidiexport.so: plugins/MidiExport/CMakeFiles/midiexport.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/root/lmms/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX shared module ../libmidiexport.so"
	cd /root/lmms/build/plugins/MidiExport && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/midiexport.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
plugins/MidiExport/CMakeFiles/midiexport.dir/build: plugins/libmidiexport.so

.PHONY : plugins/MidiExport/CMakeFiles/midiexport.dir/build

plugins/MidiExport/CMakeFiles/midiexport.dir/clean:
	cd /root/lmms/build/plugins/MidiExport && $(CMAKE_COMMAND) -P CMakeFiles/midiexport.dir/cmake_clean.cmake
.PHONY : plugins/MidiExport/CMakeFiles/midiexport.dir/clean

plugins/MidiExport/CMakeFiles/midiexport.dir/depend: plugins/MidiExport/moc_MidiExport.cpp
	cd /root/lmms/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /root/lmms /root/lmms/plugins/MidiExport /root/lmms/build /root/lmms/build/plugins/MidiExport /root/lmms/build/plugins/MidiExport/CMakeFiles/midiexport.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : plugins/MidiExport/CMakeFiles/midiexport.dir/depend
