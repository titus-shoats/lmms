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
include plugins/ladspa_browser/CMakeFiles/ladspabrowser.dir/depend.make

# Include the progress variables for this target.
include plugins/ladspa_browser/CMakeFiles/ladspabrowser.dir/progress.make

# Include the compile flags for this target's objects.
include plugins/ladspa_browser/CMakeFiles/ladspabrowser.dir/flags.make

plugins/ladspa_browser/qrc_ladspabrowser.cpp: ../plugins/ladspa_browser/logo.png
plugins/ladspa_browser/qrc_ladspabrowser.cpp: plugins/ladspa_browser/ladspabrowser.qrc.depends
plugins/ladspa_browser/qrc_ladspabrowser.cpp: plugins/ladspa_browser/ladspabrowser.qrc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/root/lmms/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating qrc_ladspabrowser.cpp"
	cd /root/lmms/build/plugins/ladspa_browser && /usr/lib/qt5/bin/rcc --name ladspabrowser --output /root/lmms/build/plugins/ladspa_browser/qrc_ladspabrowser.cpp /root/lmms/build/plugins/ladspa_browser/ladspabrowser.qrc

plugins/ladspa_browser/moc_ladspa_browser.cpp: ../plugins/ladspa_browser/ladspa_browser.h
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/root/lmms/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Generating moc_ladspa_browser.cpp"
	cd /root/lmms/build/plugins/ladspa_browser && /usr/lib/qt5/bin/moc @/root/lmms/build/plugins/ladspa_browser/moc_ladspa_browser.cpp_parameters

plugins/ladspa_browser/moc_ladspa_description.cpp: ../plugins/ladspa_browser/ladspa_description.h
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/root/lmms/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Generating moc_ladspa_description.cpp"
	cd /root/lmms/build/plugins/ladspa_browser && /usr/lib/qt5/bin/moc @/root/lmms/build/plugins/ladspa_browser/moc_ladspa_description.cpp_parameters

plugins/ladspa_browser/moc_ladspa_port_dialog.cpp: ../plugins/ladspa_browser/ladspa_port_dialog.h
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/root/lmms/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Generating moc_ladspa_port_dialog.cpp"
	cd /root/lmms/build/plugins/ladspa_browser && /usr/lib/qt5/bin/moc @/root/lmms/build/plugins/ladspa_browser/moc_ladspa_port_dialog.cpp_parameters

plugins/ladspa_browser/ladspabrowser.qrc: ../cmake/scripts/GenQrc.cmake
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/root/lmms/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Generating ladspabrowser.qrc"
	cd /root/lmms/plugins/ladspa_browser && /usr/bin/cmake -D OUT_FILE=/root/lmms/build/plugins/ladspa_browser/ladspabrowser.qrc -D RC_PREFIX=artwork/ladspabrowser -D "FILES:list=/root/lmms/plugins/ladspa_browser/logo.png;" -D DIR=/root/lmms/plugins/ladspa_browser -P /root/lmms/cmake/scripts/GenQrc.cmake

plugins/ladspa_browser/CMakeFiles/ladspabrowser.dir/ladspa_browser.cpp.o: plugins/ladspa_browser/CMakeFiles/ladspabrowser.dir/flags.make
plugins/ladspa_browser/CMakeFiles/ladspabrowser.dir/ladspa_browser.cpp.o: ../plugins/ladspa_browser/ladspa_browser.cpp
plugins/ladspa_browser/CMakeFiles/ladspabrowser.dir/ladspa_browser.cpp.o: plugins/ladspa_browser/qrc_ladspabrowser.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/root/lmms/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object plugins/ladspa_browser/CMakeFiles/ladspabrowser.dir/ladspa_browser.cpp.o"
	cd /root/lmms/build/plugins/ladspa_browser && /bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ladspabrowser.dir/ladspa_browser.cpp.o -c /root/lmms/plugins/ladspa_browser/ladspa_browser.cpp

plugins/ladspa_browser/CMakeFiles/ladspabrowser.dir/ladspa_browser.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ladspabrowser.dir/ladspa_browser.cpp.i"
	cd /root/lmms/build/plugins/ladspa_browser && /bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /root/lmms/plugins/ladspa_browser/ladspa_browser.cpp > CMakeFiles/ladspabrowser.dir/ladspa_browser.cpp.i

plugins/ladspa_browser/CMakeFiles/ladspabrowser.dir/ladspa_browser.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ladspabrowser.dir/ladspa_browser.cpp.s"
	cd /root/lmms/build/plugins/ladspa_browser && /bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /root/lmms/plugins/ladspa_browser/ladspa_browser.cpp -o CMakeFiles/ladspabrowser.dir/ladspa_browser.cpp.s

plugins/ladspa_browser/CMakeFiles/ladspabrowser.dir/ladspa_description.cpp.o: plugins/ladspa_browser/CMakeFiles/ladspabrowser.dir/flags.make
plugins/ladspa_browser/CMakeFiles/ladspabrowser.dir/ladspa_description.cpp.o: ../plugins/ladspa_browser/ladspa_description.cpp
plugins/ladspa_browser/CMakeFiles/ladspabrowser.dir/ladspa_description.cpp.o: plugins/ladspa_browser/qrc_ladspabrowser.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/root/lmms/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object plugins/ladspa_browser/CMakeFiles/ladspabrowser.dir/ladspa_description.cpp.o"
	cd /root/lmms/build/plugins/ladspa_browser && /bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ladspabrowser.dir/ladspa_description.cpp.o -c /root/lmms/plugins/ladspa_browser/ladspa_description.cpp

plugins/ladspa_browser/CMakeFiles/ladspabrowser.dir/ladspa_description.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ladspabrowser.dir/ladspa_description.cpp.i"
	cd /root/lmms/build/plugins/ladspa_browser && /bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /root/lmms/plugins/ladspa_browser/ladspa_description.cpp > CMakeFiles/ladspabrowser.dir/ladspa_description.cpp.i

plugins/ladspa_browser/CMakeFiles/ladspabrowser.dir/ladspa_description.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ladspabrowser.dir/ladspa_description.cpp.s"
	cd /root/lmms/build/plugins/ladspa_browser && /bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /root/lmms/plugins/ladspa_browser/ladspa_description.cpp -o CMakeFiles/ladspabrowser.dir/ladspa_description.cpp.s

plugins/ladspa_browser/CMakeFiles/ladspabrowser.dir/ladspa_port_dialog.cpp.o: plugins/ladspa_browser/CMakeFiles/ladspabrowser.dir/flags.make
plugins/ladspa_browser/CMakeFiles/ladspabrowser.dir/ladspa_port_dialog.cpp.o: ../plugins/ladspa_browser/ladspa_port_dialog.cpp
plugins/ladspa_browser/CMakeFiles/ladspabrowser.dir/ladspa_port_dialog.cpp.o: plugins/ladspa_browser/qrc_ladspabrowser.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/root/lmms/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object plugins/ladspa_browser/CMakeFiles/ladspabrowser.dir/ladspa_port_dialog.cpp.o"
	cd /root/lmms/build/plugins/ladspa_browser && /bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ladspabrowser.dir/ladspa_port_dialog.cpp.o -c /root/lmms/plugins/ladspa_browser/ladspa_port_dialog.cpp

plugins/ladspa_browser/CMakeFiles/ladspabrowser.dir/ladspa_port_dialog.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ladspabrowser.dir/ladspa_port_dialog.cpp.i"
	cd /root/lmms/build/plugins/ladspa_browser && /bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /root/lmms/plugins/ladspa_browser/ladspa_port_dialog.cpp > CMakeFiles/ladspabrowser.dir/ladspa_port_dialog.cpp.i

plugins/ladspa_browser/CMakeFiles/ladspabrowser.dir/ladspa_port_dialog.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ladspabrowser.dir/ladspa_port_dialog.cpp.s"
	cd /root/lmms/build/plugins/ladspa_browser && /bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /root/lmms/plugins/ladspa_browser/ladspa_port_dialog.cpp -o CMakeFiles/ladspabrowser.dir/ladspa_port_dialog.cpp.s

plugins/ladspa_browser/CMakeFiles/ladspabrowser.dir/moc_ladspa_browser.cpp.o: plugins/ladspa_browser/CMakeFiles/ladspabrowser.dir/flags.make
plugins/ladspa_browser/CMakeFiles/ladspabrowser.dir/moc_ladspa_browser.cpp.o: plugins/ladspa_browser/moc_ladspa_browser.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/root/lmms/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object plugins/ladspa_browser/CMakeFiles/ladspabrowser.dir/moc_ladspa_browser.cpp.o"
	cd /root/lmms/build/plugins/ladspa_browser && /bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ladspabrowser.dir/moc_ladspa_browser.cpp.o -c /root/lmms/build/plugins/ladspa_browser/moc_ladspa_browser.cpp

plugins/ladspa_browser/CMakeFiles/ladspabrowser.dir/moc_ladspa_browser.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ladspabrowser.dir/moc_ladspa_browser.cpp.i"
	cd /root/lmms/build/plugins/ladspa_browser && /bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /root/lmms/build/plugins/ladspa_browser/moc_ladspa_browser.cpp > CMakeFiles/ladspabrowser.dir/moc_ladspa_browser.cpp.i

plugins/ladspa_browser/CMakeFiles/ladspabrowser.dir/moc_ladspa_browser.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ladspabrowser.dir/moc_ladspa_browser.cpp.s"
	cd /root/lmms/build/plugins/ladspa_browser && /bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /root/lmms/build/plugins/ladspa_browser/moc_ladspa_browser.cpp -o CMakeFiles/ladspabrowser.dir/moc_ladspa_browser.cpp.s

plugins/ladspa_browser/CMakeFiles/ladspabrowser.dir/moc_ladspa_description.cpp.o: plugins/ladspa_browser/CMakeFiles/ladspabrowser.dir/flags.make
plugins/ladspa_browser/CMakeFiles/ladspabrowser.dir/moc_ladspa_description.cpp.o: plugins/ladspa_browser/moc_ladspa_description.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/root/lmms/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Building CXX object plugins/ladspa_browser/CMakeFiles/ladspabrowser.dir/moc_ladspa_description.cpp.o"
	cd /root/lmms/build/plugins/ladspa_browser && /bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ladspabrowser.dir/moc_ladspa_description.cpp.o -c /root/lmms/build/plugins/ladspa_browser/moc_ladspa_description.cpp

plugins/ladspa_browser/CMakeFiles/ladspabrowser.dir/moc_ladspa_description.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ladspabrowser.dir/moc_ladspa_description.cpp.i"
	cd /root/lmms/build/plugins/ladspa_browser && /bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /root/lmms/build/plugins/ladspa_browser/moc_ladspa_description.cpp > CMakeFiles/ladspabrowser.dir/moc_ladspa_description.cpp.i

plugins/ladspa_browser/CMakeFiles/ladspabrowser.dir/moc_ladspa_description.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ladspabrowser.dir/moc_ladspa_description.cpp.s"
	cd /root/lmms/build/plugins/ladspa_browser && /bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /root/lmms/build/plugins/ladspa_browser/moc_ladspa_description.cpp -o CMakeFiles/ladspabrowser.dir/moc_ladspa_description.cpp.s

plugins/ladspa_browser/CMakeFiles/ladspabrowser.dir/moc_ladspa_port_dialog.cpp.o: plugins/ladspa_browser/CMakeFiles/ladspabrowser.dir/flags.make
plugins/ladspa_browser/CMakeFiles/ladspabrowser.dir/moc_ladspa_port_dialog.cpp.o: plugins/ladspa_browser/moc_ladspa_port_dialog.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/root/lmms/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_11) "Building CXX object plugins/ladspa_browser/CMakeFiles/ladspabrowser.dir/moc_ladspa_port_dialog.cpp.o"
	cd /root/lmms/build/plugins/ladspa_browser && /bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ladspabrowser.dir/moc_ladspa_port_dialog.cpp.o -c /root/lmms/build/plugins/ladspa_browser/moc_ladspa_port_dialog.cpp

plugins/ladspa_browser/CMakeFiles/ladspabrowser.dir/moc_ladspa_port_dialog.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ladspabrowser.dir/moc_ladspa_port_dialog.cpp.i"
	cd /root/lmms/build/plugins/ladspa_browser && /bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /root/lmms/build/plugins/ladspa_browser/moc_ladspa_port_dialog.cpp > CMakeFiles/ladspabrowser.dir/moc_ladspa_port_dialog.cpp.i

plugins/ladspa_browser/CMakeFiles/ladspabrowser.dir/moc_ladspa_port_dialog.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ladspabrowser.dir/moc_ladspa_port_dialog.cpp.s"
	cd /root/lmms/build/plugins/ladspa_browser && /bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /root/lmms/build/plugins/ladspa_browser/moc_ladspa_port_dialog.cpp -o CMakeFiles/ladspabrowser.dir/moc_ladspa_port_dialog.cpp.s

plugins/ladspa_browser/CMakeFiles/ladspabrowser.dir/qrc_ladspabrowser.cpp.o: plugins/ladspa_browser/CMakeFiles/ladspabrowser.dir/flags.make
plugins/ladspa_browser/CMakeFiles/ladspabrowser.dir/qrc_ladspabrowser.cpp.o: plugins/ladspa_browser/qrc_ladspabrowser.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/root/lmms/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_12) "Building CXX object plugins/ladspa_browser/CMakeFiles/ladspabrowser.dir/qrc_ladspabrowser.cpp.o"
	cd /root/lmms/build/plugins/ladspa_browser && /bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ladspabrowser.dir/qrc_ladspabrowser.cpp.o -c /root/lmms/build/plugins/ladspa_browser/qrc_ladspabrowser.cpp

plugins/ladspa_browser/CMakeFiles/ladspabrowser.dir/qrc_ladspabrowser.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ladspabrowser.dir/qrc_ladspabrowser.cpp.i"
	cd /root/lmms/build/plugins/ladspa_browser && /bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /root/lmms/build/plugins/ladspa_browser/qrc_ladspabrowser.cpp > CMakeFiles/ladspabrowser.dir/qrc_ladspabrowser.cpp.i

plugins/ladspa_browser/CMakeFiles/ladspabrowser.dir/qrc_ladspabrowser.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ladspabrowser.dir/qrc_ladspabrowser.cpp.s"
	cd /root/lmms/build/plugins/ladspa_browser && /bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /root/lmms/build/plugins/ladspa_browser/qrc_ladspabrowser.cpp -o CMakeFiles/ladspabrowser.dir/qrc_ladspabrowser.cpp.s

# Object files for target ladspabrowser
ladspabrowser_OBJECTS = \
"CMakeFiles/ladspabrowser.dir/ladspa_browser.cpp.o" \
"CMakeFiles/ladspabrowser.dir/ladspa_description.cpp.o" \
"CMakeFiles/ladspabrowser.dir/ladspa_port_dialog.cpp.o" \
"CMakeFiles/ladspabrowser.dir/moc_ladspa_browser.cpp.o" \
"CMakeFiles/ladspabrowser.dir/moc_ladspa_description.cpp.o" \
"CMakeFiles/ladspabrowser.dir/moc_ladspa_port_dialog.cpp.o" \
"CMakeFiles/ladspabrowser.dir/qrc_ladspabrowser.cpp.o"

# External object files for target ladspabrowser
ladspabrowser_EXTERNAL_OBJECTS =

plugins/libladspabrowser.so: plugins/ladspa_browser/CMakeFiles/ladspabrowser.dir/ladspa_browser.cpp.o
plugins/libladspabrowser.so: plugins/ladspa_browser/CMakeFiles/ladspabrowser.dir/ladspa_description.cpp.o
plugins/libladspabrowser.so: plugins/ladspa_browser/CMakeFiles/ladspabrowser.dir/ladspa_port_dialog.cpp.o
plugins/libladspabrowser.so: plugins/ladspa_browser/CMakeFiles/ladspabrowser.dir/moc_ladspa_browser.cpp.o
plugins/libladspabrowser.so: plugins/ladspa_browser/CMakeFiles/ladspabrowser.dir/moc_ladspa_description.cpp.o
plugins/libladspabrowser.so: plugins/ladspa_browser/CMakeFiles/ladspabrowser.dir/moc_ladspa_port_dialog.cpp.o
plugins/libladspabrowser.so: plugins/ladspa_browser/CMakeFiles/ladspabrowser.dir/qrc_ladspabrowser.cpp.o
plugins/libladspabrowser.so: plugins/ladspa_browser/CMakeFiles/ladspabrowser.dir/build.make
plugins/libladspabrowser.so: /usr/lib/x86_64-linux-gnu/libQt5Widgets.so.5.12.2
plugins/libladspabrowser.so: /usr/lib/x86_64-linux-gnu/libQt5Xml.so.5.12.2
plugins/libladspabrowser.so: /usr/lib/x86_64-linux-gnu/libQt5Gui.so.5.12.2
plugins/libladspabrowser.so: /usr/lib/x86_64-linux-gnu/libQt5Core.so.5.12.2
plugins/libladspabrowser.so: plugins/ladspa_browser/CMakeFiles/ladspabrowser.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/root/lmms/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_13) "Linking CXX shared module ../libladspabrowser.so"
	cd /root/lmms/build/plugins/ladspa_browser && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/ladspabrowser.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
plugins/ladspa_browser/CMakeFiles/ladspabrowser.dir/build: plugins/libladspabrowser.so

.PHONY : plugins/ladspa_browser/CMakeFiles/ladspabrowser.dir/build

plugins/ladspa_browser/CMakeFiles/ladspabrowser.dir/clean:
	cd /root/lmms/build/plugins/ladspa_browser && $(CMAKE_COMMAND) -P CMakeFiles/ladspabrowser.dir/cmake_clean.cmake
.PHONY : plugins/ladspa_browser/CMakeFiles/ladspabrowser.dir/clean

plugins/ladspa_browser/CMakeFiles/ladspabrowser.dir/depend: plugins/ladspa_browser/qrc_ladspabrowser.cpp
plugins/ladspa_browser/CMakeFiles/ladspabrowser.dir/depend: plugins/ladspa_browser/moc_ladspa_browser.cpp
plugins/ladspa_browser/CMakeFiles/ladspabrowser.dir/depend: plugins/ladspa_browser/moc_ladspa_description.cpp
plugins/ladspa_browser/CMakeFiles/ladspabrowser.dir/depend: plugins/ladspa_browser/moc_ladspa_port_dialog.cpp
plugins/ladspa_browser/CMakeFiles/ladspabrowser.dir/depend: plugins/ladspa_browser/ladspabrowser.qrc
	cd /root/lmms/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /root/lmms /root/lmms/plugins/ladspa_browser /root/lmms/build /root/lmms/build/plugins/ladspa_browser /root/lmms/build/plugins/ladspa_browser/CMakeFiles/ladspabrowser.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : plugins/ladspa_browser/CMakeFiles/ladspabrowser.dir/depend
