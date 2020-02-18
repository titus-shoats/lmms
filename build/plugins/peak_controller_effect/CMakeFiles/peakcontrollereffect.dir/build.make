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
include plugins/peak_controller_effect/CMakeFiles/peakcontrollereffect.dir/depend.make

# Include the progress variables for this target.
include plugins/peak_controller_effect/CMakeFiles/peakcontrollereffect.dir/progress.make

# Include the compile flags for this target's objects.
include plugins/peak_controller_effect/CMakeFiles/peakcontrollereffect.dir/flags.make

plugins/peak_controller_effect/qrc_peakcontrollereffect.cpp: ../plugins/peak_controller_effect/artwork.png
plugins/peak_controller_effect/qrc_peakcontrollereffect.cpp: ../plugins/peak_controller_effect/logo.png
plugins/peak_controller_effect/qrc_peakcontrollereffect.cpp: plugins/peak_controller_effect/peakcontrollereffect.qrc.depends
plugins/peak_controller_effect/qrc_peakcontrollereffect.cpp: plugins/peak_controller_effect/peakcontrollereffect.qrc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/root/lmms/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating qrc_peakcontrollereffect.cpp"
	cd /root/lmms/build/plugins/peak_controller_effect && /usr/lib/qt5/bin/rcc --name peakcontrollereffect --output /root/lmms/build/plugins/peak_controller_effect/qrc_peakcontrollereffect.cpp /root/lmms/build/plugins/peak_controller_effect/peakcontrollereffect.qrc

plugins/peak_controller_effect/moc_peak_controller_effect_controls.cpp: ../plugins/peak_controller_effect/peak_controller_effect_controls.h
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/root/lmms/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Generating moc_peak_controller_effect_controls.cpp"
	cd /root/lmms/build/plugins/peak_controller_effect && /usr/lib/qt5/bin/moc @/root/lmms/build/plugins/peak_controller_effect/moc_peak_controller_effect_controls.cpp_parameters

plugins/peak_controller_effect/moc_peak_controller_effect_control_dialog.cpp: ../plugins/peak_controller_effect/peak_controller_effect_control_dialog.h
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/root/lmms/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Generating moc_peak_controller_effect_control_dialog.cpp"
	cd /root/lmms/build/plugins/peak_controller_effect && /usr/lib/qt5/bin/moc @/root/lmms/build/plugins/peak_controller_effect/moc_peak_controller_effect_control_dialog.cpp_parameters

plugins/peak_controller_effect/peakcontrollereffect.qrc: ../cmake/scripts/GenQrc.cmake
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/root/lmms/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Generating peakcontrollereffect.qrc"
	cd /root/lmms/plugins/peak_controller_effect && /usr/bin/cmake -D OUT_FILE=/root/lmms/build/plugins/peak_controller_effect/peakcontrollereffect.qrc -D RC_PREFIX=artwork/peakcontrollereffect -D "FILES:list=/root/lmms/plugins/peak_controller_effect/artwork.png;/root/lmms/plugins/peak_controller_effect/logo.png;" -D DIR=/root/lmms/plugins/peak_controller_effect -P /root/lmms/cmake/scripts/GenQrc.cmake

plugins/peak_controller_effect/CMakeFiles/peakcontrollereffect.dir/peak_controller_effect.cpp.o: plugins/peak_controller_effect/CMakeFiles/peakcontrollereffect.dir/flags.make
plugins/peak_controller_effect/CMakeFiles/peakcontrollereffect.dir/peak_controller_effect.cpp.o: ../plugins/peak_controller_effect/peak_controller_effect.cpp
plugins/peak_controller_effect/CMakeFiles/peakcontrollereffect.dir/peak_controller_effect.cpp.o: plugins/peak_controller_effect/qrc_peakcontrollereffect.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/root/lmms/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object plugins/peak_controller_effect/CMakeFiles/peakcontrollereffect.dir/peak_controller_effect.cpp.o"
	cd /root/lmms/build/plugins/peak_controller_effect && /bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/peakcontrollereffect.dir/peak_controller_effect.cpp.o -c /root/lmms/plugins/peak_controller_effect/peak_controller_effect.cpp

plugins/peak_controller_effect/CMakeFiles/peakcontrollereffect.dir/peak_controller_effect.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/peakcontrollereffect.dir/peak_controller_effect.cpp.i"
	cd /root/lmms/build/plugins/peak_controller_effect && /bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /root/lmms/plugins/peak_controller_effect/peak_controller_effect.cpp > CMakeFiles/peakcontrollereffect.dir/peak_controller_effect.cpp.i

plugins/peak_controller_effect/CMakeFiles/peakcontrollereffect.dir/peak_controller_effect.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/peakcontrollereffect.dir/peak_controller_effect.cpp.s"
	cd /root/lmms/build/plugins/peak_controller_effect && /bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /root/lmms/plugins/peak_controller_effect/peak_controller_effect.cpp -o CMakeFiles/peakcontrollereffect.dir/peak_controller_effect.cpp.s

plugins/peak_controller_effect/CMakeFiles/peakcontrollereffect.dir/peak_controller_effect_controls.cpp.o: plugins/peak_controller_effect/CMakeFiles/peakcontrollereffect.dir/flags.make
plugins/peak_controller_effect/CMakeFiles/peakcontrollereffect.dir/peak_controller_effect_controls.cpp.o: ../plugins/peak_controller_effect/peak_controller_effect_controls.cpp
plugins/peak_controller_effect/CMakeFiles/peakcontrollereffect.dir/peak_controller_effect_controls.cpp.o: plugins/peak_controller_effect/qrc_peakcontrollereffect.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/root/lmms/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object plugins/peak_controller_effect/CMakeFiles/peakcontrollereffect.dir/peak_controller_effect_controls.cpp.o"
	cd /root/lmms/build/plugins/peak_controller_effect && /bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/peakcontrollereffect.dir/peak_controller_effect_controls.cpp.o -c /root/lmms/plugins/peak_controller_effect/peak_controller_effect_controls.cpp

plugins/peak_controller_effect/CMakeFiles/peakcontrollereffect.dir/peak_controller_effect_controls.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/peakcontrollereffect.dir/peak_controller_effect_controls.cpp.i"
	cd /root/lmms/build/plugins/peak_controller_effect && /bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /root/lmms/plugins/peak_controller_effect/peak_controller_effect_controls.cpp > CMakeFiles/peakcontrollereffect.dir/peak_controller_effect_controls.cpp.i

plugins/peak_controller_effect/CMakeFiles/peakcontrollereffect.dir/peak_controller_effect_controls.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/peakcontrollereffect.dir/peak_controller_effect_controls.cpp.s"
	cd /root/lmms/build/plugins/peak_controller_effect && /bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /root/lmms/plugins/peak_controller_effect/peak_controller_effect_controls.cpp -o CMakeFiles/peakcontrollereffect.dir/peak_controller_effect_controls.cpp.s

plugins/peak_controller_effect/CMakeFiles/peakcontrollereffect.dir/peak_controller_effect_control_dialog.cpp.o: plugins/peak_controller_effect/CMakeFiles/peakcontrollereffect.dir/flags.make
plugins/peak_controller_effect/CMakeFiles/peakcontrollereffect.dir/peak_controller_effect_control_dialog.cpp.o: ../plugins/peak_controller_effect/peak_controller_effect_control_dialog.cpp
plugins/peak_controller_effect/CMakeFiles/peakcontrollereffect.dir/peak_controller_effect_control_dialog.cpp.o: plugins/peak_controller_effect/qrc_peakcontrollereffect.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/root/lmms/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object plugins/peak_controller_effect/CMakeFiles/peakcontrollereffect.dir/peak_controller_effect_control_dialog.cpp.o"
	cd /root/lmms/build/plugins/peak_controller_effect && /bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/peakcontrollereffect.dir/peak_controller_effect_control_dialog.cpp.o -c /root/lmms/plugins/peak_controller_effect/peak_controller_effect_control_dialog.cpp

plugins/peak_controller_effect/CMakeFiles/peakcontrollereffect.dir/peak_controller_effect_control_dialog.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/peakcontrollereffect.dir/peak_controller_effect_control_dialog.cpp.i"
	cd /root/lmms/build/plugins/peak_controller_effect && /bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /root/lmms/plugins/peak_controller_effect/peak_controller_effect_control_dialog.cpp > CMakeFiles/peakcontrollereffect.dir/peak_controller_effect_control_dialog.cpp.i

plugins/peak_controller_effect/CMakeFiles/peakcontrollereffect.dir/peak_controller_effect_control_dialog.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/peakcontrollereffect.dir/peak_controller_effect_control_dialog.cpp.s"
	cd /root/lmms/build/plugins/peak_controller_effect && /bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /root/lmms/plugins/peak_controller_effect/peak_controller_effect_control_dialog.cpp -o CMakeFiles/peakcontrollereffect.dir/peak_controller_effect_control_dialog.cpp.s

plugins/peak_controller_effect/CMakeFiles/peakcontrollereffect.dir/moc_peak_controller_effect_controls.cpp.o: plugins/peak_controller_effect/CMakeFiles/peakcontrollereffect.dir/flags.make
plugins/peak_controller_effect/CMakeFiles/peakcontrollereffect.dir/moc_peak_controller_effect_controls.cpp.o: plugins/peak_controller_effect/moc_peak_controller_effect_controls.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/root/lmms/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object plugins/peak_controller_effect/CMakeFiles/peakcontrollereffect.dir/moc_peak_controller_effect_controls.cpp.o"
	cd /root/lmms/build/plugins/peak_controller_effect && /bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/peakcontrollereffect.dir/moc_peak_controller_effect_controls.cpp.o -c /root/lmms/build/plugins/peak_controller_effect/moc_peak_controller_effect_controls.cpp

plugins/peak_controller_effect/CMakeFiles/peakcontrollereffect.dir/moc_peak_controller_effect_controls.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/peakcontrollereffect.dir/moc_peak_controller_effect_controls.cpp.i"
	cd /root/lmms/build/plugins/peak_controller_effect && /bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /root/lmms/build/plugins/peak_controller_effect/moc_peak_controller_effect_controls.cpp > CMakeFiles/peakcontrollereffect.dir/moc_peak_controller_effect_controls.cpp.i

plugins/peak_controller_effect/CMakeFiles/peakcontrollereffect.dir/moc_peak_controller_effect_controls.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/peakcontrollereffect.dir/moc_peak_controller_effect_controls.cpp.s"
	cd /root/lmms/build/plugins/peak_controller_effect && /bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /root/lmms/build/plugins/peak_controller_effect/moc_peak_controller_effect_controls.cpp -o CMakeFiles/peakcontrollereffect.dir/moc_peak_controller_effect_controls.cpp.s

plugins/peak_controller_effect/CMakeFiles/peakcontrollereffect.dir/moc_peak_controller_effect_control_dialog.cpp.o: plugins/peak_controller_effect/CMakeFiles/peakcontrollereffect.dir/flags.make
plugins/peak_controller_effect/CMakeFiles/peakcontrollereffect.dir/moc_peak_controller_effect_control_dialog.cpp.o: plugins/peak_controller_effect/moc_peak_controller_effect_control_dialog.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/root/lmms/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object plugins/peak_controller_effect/CMakeFiles/peakcontrollereffect.dir/moc_peak_controller_effect_control_dialog.cpp.o"
	cd /root/lmms/build/plugins/peak_controller_effect && /bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/peakcontrollereffect.dir/moc_peak_controller_effect_control_dialog.cpp.o -c /root/lmms/build/plugins/peak_controller_effect/moc_peak_controller_effect_control_dialog.cpp

plugins/peak_controller_effect/CMakeFiles/peakcontrollereffect.dir/moc_peak_controller_effect_control_dialog.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/peakcontrollereffect.dir/moc_peak_controller_effect_control_dialog.cpp.i"
	cd /root/lmms/build/plugins/peak_controller_effect && /bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /root/lmms/build/plugins/peak_controller_effect/moc_peak_controller_effect_control_dialog.cpp > CMakeFiles/peakcontrollereffect.dir/moc_peak_controller_effect_control_dialog.cpp.i

plugins/peak_controller_effect/CMakeFiles/peakcontrollereffect.dir/moc_peak_controller_effect_control_dialog.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/peakcontrollereffect.dir/moc_peak_controller_effect_control_dialog.cpp.s"
	cd /root/lmms/build/plugins/peak_controller_effect && /bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /root/lmms/build/plugins/peak_controller_effect/moc_peak_controller_effect_control_dialog.cpp -o CMakeFiles/peakcontrollereffect.dir/moc_peak_controller_effect_control_dialog.cpp.s

plugins/peak_controller_effect/CMakeFiles/peakcontrollereffect.dir/qrc_peakcontrollereffect.cpp.o: plugins/peak_controller_effect/CMakeFiles/peakcontrollereffect.dir/flags.make
plugins/peak_controller_effect/CMakeFiles/peakcontrollereffect.dir/qrc_peakcontrollereffect.cpp.o: plugins/peak_controller_effect/qrc_peakcontrollereffect.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/root/lmms/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Building CXX object plugins/peak_controller_effect/CMakeFiles/peakcontrollereffect.dir/qrc_peakcontrollereffect.cpp.o"
	cd /root/lmms/build/plugins/peak_controller_effect && /bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/peakcontrollereffect.dir/qrc_peakcontrollereffect.cpp.o -c /root/lmms/build/plugins/peak_controller_effect/qrc_peakcontrollereffect.cpp

plugins/peak_controller_effect/CMakeFiles/peakcontrollereffect.dir/qrc_peakcontrollereffect.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/peakcontrollereffect.dir/qrc_peakcontrollereffect.cpp.i"
	cd /root/lmms/build/plugins/peak_controller_effect && /bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /root/lmms/build/plugins/peak_controller_effect/qrc_peakcontrollereffect.cpp > CMakeFiles/peakcontrollereffect.dir/qrc_peakcontrollereffect.cpp.i

plugins/peak_controller_effect/CMakeFiles/peakcontrollereffect.dir/qrc_peakcontrollereffect.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/peakcontrollereffect.dir/qrc_peakcontrollereffect.cpp.s"
	cd /root/lmms/build/plugins/peak_controller_effect && /bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /root/lmms/build/plugins/peak_controller_effect/qrc_peakcontrollereffect.cpp -o CMakeFiles/peakcontrollereffect.dir/qrc_peakcontrollereffect.cpp.s

# Object files for target peakcontrollereffect
peakcontrollereffect_OBJECTS = \
"CMakeFiles/peakcontrollereffect.dir/peak_controller_effect.cpp.o" \
"CMakeFiles/peakcontrollereffect.dir/peak_controller_effect_controls.cpp.o" \
"CMakeFiles/peakcontrollereffect.dir/peak_controller_effect_control_dialog.cpp.o" \
"CMakeFiles/peakcontrollereffect.dir/moc_peak_controller_effect_controls.cpp.o" \
"CMakeFiles/peakcontrollereffect.dir/moc_peak_controller_effect_control_dialog.cpp.o" \
"CMakeFiles/peakcontrollereffect.dir/qrc_peakcontrollereffect.cpp.o"

# External object files for target peakcontrollereffect
peakcontrollereffect_EXTERNAL_OBJECTS =

plugins/libpeakcontrollereffect.so: plugins/peak_controller_effect/CMakeFiles/peakcontrollereffect.dir/peak_controller_effect.cpp.o
plugins/libpeakcontrollereffect.so: plugins/peak_controller_effect/CMakeFiles/peakcontrollereffect.dir/peak_controller_effect_controls.cpp.o
plugins/libpeakcontrollereffect.so: plugins/peak_controller_effect/CMakeFiles/peakcontrollereffect.dir/peak_controller_effect_control_dialog.cpp.o
plugins/libpeakcontrollereffect.so: plugins/peak_controller_effect/CMakeFiles/peakcontrollereffect.dir/moc_peak_controller_effect_controls.cpp.o
plugins/libpeakcontrollereffect.so: plugins/peak_controller_effect/CMakeFiles/peakcontrollereffect.dir/moc_peak_controller_effect_control_dialog.cpp.o
plugins/libpeakcontrollereffect.so: plugins/peak_controller_effect/CMakeFiles/peakcontrollereffect.dir/qrc_peakcontrollereffect.cpp.o
plugins/libpeakcontrollereffect.so: plugins/peak_controller_effect/CMakeFiles/peakcontrollereffect.dir/build.make
plugins/libpeakcontrollereffect.so: /usr/lib/x86_64-linux-gnu/libQt5Widgets.so.5.12.2
plugins/libpeakcontrollereffect.so: /usr/lib/x86_64-linux-gnu/libQt5Xml.so.5.12.2
plugins/libpeakcontrollereffect.so: /usr/lib/x86_64-linux-gnu/libQt5Gui.so.5.12.2
plugins/libpeakcontrollereffect.so: /usr/lib/x86_64-linux-gnu/libQt5Core.so.5.12.2
plugins/libpeakcontrollereffect.so: plugins/peak_controller_effect/CMakeFiles/peakcontrollereffect.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/root/lmms/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_11) "Linking CXX shared module ../libpeakcontrollereffect.so"
	cd /root/lmms/build/plugins/peak_controller_effect && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/peakcontrollereffect.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
plugins/peak_controller_effect/CMakeFiles/peakcontrollereffect.dir/build: plugins/libpeakcontrollereffect.so

.PHONY : plugins/peak_controller_effect/CMakeFiles/peakcontrollereffect.dir/build

plugins/peak_controller_effect/CMakeFiles/peakcontrollereffect.dir/clean:
	cd /root/lmms/build/plugins/peak_controller_effect && $(CMAKE_COMMAND) -P CMakeFiles/peakcontrollereffect.dir/cmake_clean.cmake
.PHONY : plugins/peak_controller_effect/CMakeFiles/peakcontrollereffect.dir/clean

plugins/peak_controller_effect/CMakeFiles/peakcontrollereffect.dir/depend: plugins/peak_controller_effect/qrc_peakcontrollereffect.cpp
plugins/peak_controller_effect/CMakeFiles/peakcontrollereffect.dir/depend: plugins/peak_controller_effect/moc_peak_controller_effect_controls.cpp
plugins/peak_controller_effect/CMakeFiles/peakcontrollereffect.dir/depend: plugins/peak_controller_effect/moc_peak_controller_effect_control_dialog.cpp
plugins/peak_controller_effect/CMakeFiles/peakcontrollereffect.dir/depend: plugins/peak_controller_effect/peakcontrollereffect.qrc
	cd /root/lmms/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /root/lmms /root/lmms/plugins/peak_controller_effect /root/lmms/build /root/lmms/build/plugins/peak_controller_effect /root/lmms/build/plugins/peak_controller_effect/CMakeFiles/peakcontrollereffect.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : plugins/peak_controller_effect/CMakeFiles/peakcontrollereffect.dir/depend
