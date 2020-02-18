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
include plugins/dynamics_processor/CMakeFiles/dynamicsprocessor.dir/depend.make

# Include the progress variables for this target.
include plugins/dynamics_processor/CMakeFiles/dynamicsprocessor.dir/progress.make

# Include the compile flags for this target's objects.
include plugins/dynamics_processor/CMakeFiles/dynamicsprocessor.dir/flags.make

plugins/dynamics_processor/qrc_dynamicsprocessor.cpp: ../plugins/dynamics_processor/add1_active.png
plugins/dynamics_processor/qrc_dynamicsprocessor.cpp: ../plugins/dynamics_processor/add1_inactive.png
plugins/dynamics_processor/qrc_dynamicsprocessor.cpp: ../plugins/dynamics_processor/artwork.png
plugins/dynamics_processor/qrc_dynamicsprocessor.cpp: ../plugins/dynamics_processor/avg_active.png
plugins/dynamics_processor/qrc_dynamicsprocessor.cpp: ../plugins/dynamics_processor/avg_inactive.png
plugins/dynamics_processor/qrc_dynamicsprocessor.cpp: ../plugins/dynamics_processor/logo.png
plugins/dynamics_processor/qrc_dynamicsprocessor.cpp: ../plugins/dynamics_processor/max_active.png
plugins/dynamics_processor/qrc_dynamicsprocessor.cpp: ../plugins/dynamics_processor/max_inactive.png
plugins/dynamics_processor/qrc_dynamicsprocessor.cpp: ../plugins/dynamics_processor/reset_active.png
plugins/dynamics_processor/qrc_dynamicsprocessor.cpp: ../plugins/dynamics_processor/reset_inactive.png
plugins/dynamics_processor/qrc_dynamicsprocessor.cpp: ../plugins/dynamics_processor/smooth_active.png
plugins/dynamics_processor/qrc_dynamicsprocessor.cpp: ../plugins/dynamics_processor/smooth_inactive.png
plugins/dynamics_processor/qrc_dynamicsprocessor.cpp: ../plugins/dynamics_processor/sub1_active.png
plugins/dynamics_processor/qrc_dynamicsprocessor.cpp: ../plugins/dynamics_processor/sub1_inactive.png
plugins/dynamics_processor/qrc_dynamicsprocessor.cpp: ../plugins/dynamics_processor/unl_active.png
plugins/dynamics_processor/qrc_dynamicsprocessor.cpp: ../plugins/dynamics_processor/unl_inactive.png
plugins/dynamics_processor/qrc_dynamicsprocessor.cpp: ../plugins/dynamics_processor/wavegraph.png
plugins/dynamics_processor/qrc_dynamicsprocessor.cpp: plugins/dynamics_processor/dynamicsprocessor.qrc.depends
plugins/dynamics_processor/qrc_dynamicsprocessor.cpp: plugins/dynamics_processor/dynamicsprocessor.qrc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/root/lmms/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating qrc_dynamicsprocessor.cpp"
	cd /root/lmms/build/plugins/dynamics_processor && /usr/lib/qt5/bin/rcc --name dynamicsprocessor --output /root/lmms/build/plugins/dynamics_processor/qrc_dynamicsprocessor.cpp /root/lmms/build/plugins/dynamics_processor/dynamicsprocessor.qrc

plugins/dynamics_processor/moc_dynamics_processor_controls.cpp: ../plugins/dynamics_processor/dynamics_processor_controls.h
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/root/lmms/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Generating moc_dynamics_processor_controls.cpp"
	cd /root/lmms/build/plugins/dynamics_processor && /usr/lib/qt5/bin/moc @/root/lmms/build/plugins/dynamics_processor/moc_dynamics_processor_controls.cpp_parameters

plugins/dynamics_processor/moc_dynamics_processor_control_dialog.cpp: ../plugins/dynamics_processor/dynamics_processor_control_dialog.h
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/root/lmms/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Generating moc_dynamics_processor_control_dialog.cpp"
	cd /root/lmms/build/plugins/dynamics_processor && /usr/lib/qt5/bin/moc @/root/lmms/build/plugins/dynamics_processor/moc_dynamics_processor_control_dialog.cpp_parameters

plugins/dynamics_processor/dynamicsprocessor.qrc: ../cmake/scripts/GenQrc.cmake
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/root/lmms/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Generating dynamicsprocessor.qrc"
	cd /root/lmms/plugins/dynamics_processor && /usr/bin/cmake -D OUT_FILE=/root/lmms/build/plugins/dynamics_processor/dynamicsprocessor.qrc -D RC_PREFIX=artwork/dynamicsprocessor -D "FILES:list=/root/lmms/plugins/dynamics_processor/add1_active.png;/root/lmms/plugins/dynamics_processor/add1_inactive.png;/root/lmms/plugins/dynamics_processor/artwork.png;/root/lmms/plugins/dynamics_processor/avg_active.png;/root/lmms/plugins/dynamics_processor/avg_inactive.png;/root/lmms/plugins/dynamics_processor/logo.png;/root/lmms/plugins/dynamics_processor/max_active.png;/root/lmms/plugins/dynamics_processor/max_inactive.png;/root/lmms/plugins/dynamics_processor/reset_active.png;/root/lmms/plugins/dynamics_processor/reset_inactive.png;/root/lmms/plugins/dynamics_processor/smooth_active.png;/root/lmms/plugins/dynamics_processor/smooth_inactive.png;/root/lmms/plugins/dynamics_processor/sub1_active.png;/root/lmms/plugins/dynamics_processor/sub1_inactive.png;/root/lmms/plugins/dynamics_processor/unl_active.png;/root/lmms/plugins/dynamics_processor/unl_inactive.png;/root/lmms/plugins/dynamics_processor/wavegraph.png;" -D DIR=/root/lmms/plugins/dynamics_processor -P /root/lmms/cmake/scripts/GenQrc.cmake

plugins/dynamics_processor/CMakeFiles/dynamicsprocessor.dir/dynamics_processor.cpp.o: plugins/dynamics_processor/CMakeFiles/dynamicsprocessor.dir/flags.make
plugins/dynamics_processor/CMakeFiles/dynamicsprocessor.dir/dynamics_processor.cpp.o: ../plugins/dynamics_processor/dynamics_processor.cpp
plugins/dynamics_processor/CMakeFiles/dynamicsprocessor.dir/dynamics_processor.cpp.o: plugins/dynamics_processor/qrc_dynamicsprocessor.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/root/lmms/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object plugins/dynamics_processor/CMakeFiles/dynamicsprocessor.dir/dynamics_processor.cpp.o"
	cd /root/lmms/build/plugins/dynamics_processor && /bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/dynamicsprocessor.dir/dynamics_processor.cpp.o -c /root/lmms/plugins/dynamics_processor/dynamics_processor.cpp

plugins/dynamics_processor/CMakeFiles/dynamicsprocessor.dir/dynamics_processor.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/dynamicsprocessor.dir/dynamics_processor.cpp.i"
	cd /root/lmms/build/plugins/dynamics_processor && /bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /root/lmms/plugins/dynamics_processor/dynamics_processor.cpp > CMakeFiles/dynamicsprocessor.dir/dynamics_processor.cpp.i

plugins/dynamics_processor/CMakeFiles/dynamicsprocessor.dir/dynamics_processor.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/dynamicsprocessor.dir/dynamics_processor.cpp.s"
	cd /root/lmms/build/plugins/dynamics_processor && /bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /root/lmms/plugins/dynamics_processor/dynamics_processor.cpp -o CMakeFiles/dynamicsprocessor.dir/dynamics_processor.cpp.s

plugins/dynamics_processor/CMakeFiles/dynamicsprocessor.dir/dynamics_processor_controls.cpp.o: plugins/dynamics_processor/CMakeFiles/dynamicsprocessor.dir/flags.make
plugins/dynamics_processor/CMakeFiles/dynamicsprocessor.dir/dynamics_processor_controls.cpp.o: ../plugins/dynamics_processor/dynamics_processor_controls.cpp
plugins/dynamics_processor/CMakeFiles/dynamicsprocessor.dir/dynamics_processor_controls.cpp.o: plugins/dynamics_processor/qrc_dynamicsprocessor.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/root/lmms/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object plugins/dynamics_processor/CMakeFiles/dynamicsprocessor.dir/dynamics_processor_controls.cpp.o"
	cd /root/lmms/build/plugins/dynamics_processor && /bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/dynamicsprocessor.dir/dynamics_processor_controls.cpp.o -c /root/lmms/plugins/dynamics_processor/dynamics_processor_controls.cpp

plugins/dynamics_processor/CMakeFiles/dynamicsprocessor.dir/dynamics_processor_controls.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/dynamicsprocessor.dir/dynamics_processor_controls.cpp.i"
	cd /root/lmms/build/plugins/dynamics_processor && /bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /root/lmms/plugins/dynamics_processor/dynamics_processor_controls.cpp > CMakeFiles/dynamicsprocessor.dir/dynamics_processor_controls.cpp.i

plugins/dynamics_processor/CMakeFiles/dynamicsprocessor.dir/dynamics_processor_controls.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/dynamicsprocessor.dir/dynamics_processor_controls.cpp.s"
	cd /root/lmms/build/plugins/dynamics_processor && /bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /root/lmms/plugins/dynamics_processor/dynamics_processor_controls.cpp -o CMakeFiles/dynamicsprocessor.dir/dynamics_processor_controls.cpp.s

plugins/dynamics_processor/CMakeFiles/dynamicsprocessor.dir/dynamics_processor_control_dialog.cpp.o: plugins/dynamics_processor/CMakeFiles/dynamicsprocessor.dir/flags.make
plugins/dynamics_processor/CMakeFiles/dynamicsprocessor.dir/dynamics_processor_control_dialog.cpp.o: ../plugins/dynamics_processor/dynamics_processor_control_dialog.cpp
plugins/dynamics_processor/CMakeFiles/dynamicsprocessor.dir/dynamics_processor_control_dialog.cpp.o: plugins/dynamics_processor/qrc_dynamicsprocessor.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/root/lmms/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object plugins/dynamics_processor/CMakeFiles/dynamicsprocessor.dir/dynamics_processor_control_dialog.cpp.o"
	cd /root/lmms/build/plugins/dynamics_processor && /bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/dynamicsprocessor.dir/dynamics_processor_control_dialog.cpp.o -c /root/lmms/plugins/dynamics_processor/dynamics_processor_control_dialog.cpp

plugins/dynamics_processor/CMakeFiles/dynamicsprocessor.dir/dynamics_processor_control_dialog.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/dynamicsprocessor.dir/dynamics_processor_control_dialog.cpp.i"
	cd /root/lmms/build/plugins/dynamics_processor && /bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /root/lmms/plugins/dynamics_processor/dynamics_processor_control_dialog.cpp > CMakeFiles/dynamicsprocessor.dir/dynamics_processor_control_dialog.cpp.i

plugins/dynamics_processor/CMakeFiles/dynamicsprocessor.dir/dynamics_processor_control_dialog.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/dynamicsprocessor.dir/dynamics_processor_control_dialog.cpp.s"
	cd /root/lmms/build/plugins/dynamics_processor && /bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /root/lmms/plugins/dynamics_processor/dynamics_processor_control_dialog.cpp -o CMakeFiles/dynamicsprocessor.dir/dynamics_processor_control_dialog.cpp.s

plugins/dynamics_processor/CMakeFiles/dynamicsprocessor.dir/moc_dynamics_processor_controls.cpp.o: plugins/dynamics_processor/CMakeFiles/dynamicsprocessor.dir/flags.make
plugins/dynamics_processor/CMakeFiles/dynamicsprocessor.dir/moc_dynamics_processor_controls.cpp.o: plugins/dynamics_processor/moc_dynamics_processor_controls.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/root/lmms/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object plugins/dynamics_processor/CMakeFiles/dynamicsprocessor.dir/moc_dynamics_processor_controls.cpp.o"
	cd /root/lmms/build/plugins/dynamics_processor && /bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/dynamicsprocessor.dir/moc_dynamics_processor_controls.cpp.o -c /root/lmms/build/plugins/dynamics_processor/moc_dynamics_processor_controls.cpp

plugins/dynamics_processor/CMakeFiles/dynamicsprocessor.dir/moc_dynamics_processor_controls.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/dynamicsprocessor.dir/moc_dynamics_processor_controls.cpp.i"
	cd /root/lmms/build/plugins/dynamics_processor && /bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /root/lmms/build/plugins/dynamics_processor/moc_dynamics_processor_controls.cpp > CMakeFiles/dynamicsprocessor.dir/moc_dynamics_processor_controls.cpp.i

plugins/dynamics_processor/CMakeFiles/dynamicsprocessor.dir/moc_dynamics_processor_controls.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/dynamicsprocessor.dir/moc_dynamics_processor_controls.cpp.s"
	cd /root/lmms/build/plugins/dynamics_processor && /bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /root/lmms/build/plugins/dynamics_processor/moc_dynamics_processor_controls.cpp -o CMakeFiles/dynamicsprocessor.dir/moc_dynamics_processor_controls.cpp.s

plugins/dynamics_processor/CMakeFiles/dynamicsprocessor.dir/moc_dynamics_processor_control_dialog.cpp.o: plugins/dynamics_processor/CMakeFiles/dynamicsprocessor.dir/flags.make
plugins/dynamics_processor/CMakeFiles/dynamicsprocessor.dir/moc_dynamics_processor_control_dialog.cpp.o: plugins/dynamics_processor/moc_dynamics_processor_control_dialog.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/root/lmms/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object plugins/dynamics_processor/CMakeFiles/dynamicsprocessor.dir/moc_dynamics_processor_control_dialog.cpp.o"
	cd /root/lmms/build/plugins/dynamics_processor && /bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/dynamicsprocessor.dir/moc_dynamics_processor_control_dialog.cpp.o -c /root/lmms/build/plugins/dynamics_processor/moc_dynamics_processor_control_dialog.cpp

plugins/dynamics_processor/CMakeFiles/dynamicsprocessor.dir/moc_dynamics_processor_control_dialog.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/dynamicsprocessor.dir/moc_dynamics_processor_control_dialog.cpp.i"
	cd /root/lmms/build/plugins/dynamics_processor && /bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /root/lmms/build/plugins/dynamics_processor/moc_dynamics_processor_control_dialog.cpp > CMakeFiles/dynamicsprocessor.dir/moc_dynamics_processor_control_dialog.cpp.i

plugins/dynamics_processor/CMakeFiles/dynamicsprocessor.dir/moc_dynamics_processor_control_dialog.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/dynamicsprocessor.dir/moc_dynamics_processor_control_dialog.cpp.s"
	cd /root/lmms/build/plugins/dynamics_processor && /bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /root/lmms/build/plugins/dynamics_processor/moc_dynamics_processor_control_dialog.cpp -o CMakeFiles/dynamicsprocessor.dir/moc_dynamics_processor_control_dialog.cpp.s

plugins/dynamics_processor/CMakeFiles/dynamicsprocessor.dir/qrc_dynamicsprocessor.cpp.o: plugins/dynamics_processor/CMakeFiles/dynamicsprocessor.dir/flags.make
plugins/dynamics_processor/CMakeFiles/dynamicsprocessor.dir/qrc_dynamicsprocessor.cpp.o: plugins/dynamics_processor/qrc_dynamicsprocessor.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/root/lmms/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Building CXX object plugins/dynamics_processor/CMakeFiles/dynamicsprocessor.dir/qrc_dynamicsprocessor.cpp.o"
	cd /root/lmms/build/plugins/dynamics_processor && /bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/dynamicsprocessor.dir/qrc_dynamicsprocessor.cpp.o -c /root/lmms/build/plugins/dynamics_processor/qrc_dynamicsprocessor.cpp

plugins/dynamics_processor/CMakeFiles/dynamicsprocessor.dir/qrc_dynamicsprocessor.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/dynamicsprocessor.dir/qrc_dynamicsprocessor.cpp.i"
	cd /root/lmms/build/plugins/dynamics_processor && /bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /root/lmms/build/plugins/dynamics_processor/qrc_dynamicsprocessor.cpp > CMakeFiles/dynamicsprocessor.dir/qrc_dynamicsprocessor.cpp.i

plugins/dynamics_processor/CMakeFiles/dynamicsprocessor.dir/qrc_dynamicsprocessor.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/dynamicsprocessor.dir/qrc_dynamicsprocessor.cpp.s"
	cd /root/lmms/build/plugins/dynamics_processor && /bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /root/lmms/build/plugins/dynamics_processor/qrc_dynamicsprocessor.cpp -o CMakeFiles/dynamicsprocessor.dir/qrc_dynamicsprocessor.cpp.s

# Object files for target dynamicsprocessor
dynamicsprocessor_OBJECTS = \
"CMakeFiles/dynamicsprocessor.dir/dynamics_processor.cpp.o" \
"CMakeFiles/dynamicsprocessor.dir/dynamics_processor_controls.cpp.o" \
"CMakeFiles/dynamicsprocessor.dir/dynamics_processor_control_dialog.cpp.o" \
"CMakeFiles/dynamicsprocessor.dir/moc_dynamics_processor_controls.cpp.o" \
"CMakeFiles/dynamicsprocessor.dir/moc_dynamics_processor_control_dialog.cpp.o" \
"CMakeFiles/dynamicsprocessor.dir/qrc_dynamicsprocessor.cpp.o"

# External object files for target dynamicsprocessor
dynamicsprocessor_EXTERNAL_OBJECTS =

plugins/libdynamicsprocessor.so: plugins/dynamics_processor/CMakeFiles/dynamicsprocessor.dir/dynamics_processor.cpp.o
plugins/libdynamicsprocessor.so: plugins/dynamics_processor/CMakeFiles/dynamicsprocessor.dir/dynamics_processor_controls.cpp.o
plugins/libdynamicsprocessor.so: plugins/dynamics_processor/CMakeFiles/dynamicsprocessor.dir/dynamics_processor_control_dialog.cpp.o
plugins/libdynamicsprocessor.so: plugins/dynamics_processor/CMakeFiles/dynamicsprocessor.dir/moc_dynamics_processor_controls.cpp.o
plugins/libdynamicsprocessor.so: plugins/dynamics_processor/CMakeFiles/dynamicsprocessor.dir/moc_dynamics_processor_control_dialog.cpp.o
plugins/libdynamicsprocessor.so: plugins/dynamics_processor/CMakeFiles/dynamicsprocessor.dir/qrc_dynamicsprocessor.cpp.o
plugins/libdynamicsprocessor.so: plugins/dynamics_processor/CMakeFiles/dynamicsprocessor.dir/build.make
plugins/libdynamicsprocessor.so: /usr/lib/x86_64-linux-gnu/libQt5Widgets.so.5.12.2
plugins/libdynamicsprocessor.so: /usr/lib/x86_64-linux-gnu/libQt5Xml.so.5.12.2
plugins/libdynamicsprocessor.so: /usr/lib/x86_64-linux-gnu/libQt5Gui.so.5.12.2
plugins/libdynamicsprocessor.so: /usr/lib/x86_64-linux-gnu/libQt5Core.so.5.12.2
plugins/libdynamicsprocessor.so: plugins/dynamics_processor/CMakeFiles/dynamicsprocessor.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/root/lmms/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_11) "Linking CXX shared module ../libdynamicsprocessor.so"
	cd /root/lmms/build/plugins/dynamics_processor && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/dynamicsprocessor.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
plugins/dynamics_processor/CMakeFiles/dynamicsprocessor.dir/build: plugins/libdynamicsprocessor.so

.PHONY : plugins/dynamics_processor/CMakeFiles/dynamicsprocessor.dir/build

plugins/dynamics_processor/CMakeFiles/dynamicsprocessor.dir/clean:
	cd /root/lmms/build/plugins/dynamics_processor && $(CMAKE_COMMAND) -P CMakeFiles/dynamicsprocessor.dir/cmake_clean.cmake
.PHONY : plugins/dynamics_processor/CMakeFiles/dynamicsprocessor.dir/clean

plugins/dynamics_processor/CMakeFiles/dynamicsprocessor.dir/depend: plugins/dynamics_processor/qrc_dynamicsprocessor.cpp
plugins/dynamics_processor/CMakeFiles/dynamicsprocessor.dir/depend: plugins/dynamics_processor/moc_dynamics_processor_controls.cpp
plugins/dynamics_processor/CMakeFiles/dynamicsprocessor.dir/depend: plugins/dynamics_processor/moc_dynamics_processor_control_dialog.cpp
plugins/dynamics_processor/CMakeFiles/dynamicsprocessor.dir/depend: plugins/dynamics_processor/dynamicsprocessor.qrc
	cd /root/lmms/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /root/lmms /root/lmms/plugins/dynamics_processor /root/lmms/build /root/lmms/build/plugins/dynamics_processor /root/lmms/build/plugins/dynamics_processor/CMakeFiles/dynamicsprocessor.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : plugins/dynamics_processor/CMakeFiles/dynamicsprocessor.dir/depend

