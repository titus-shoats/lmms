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
include plugins/LadspaEffect/CMakeFiles/ladspaeffect.dir/depend.make

# Include the progress variables for this target.
include plugins/LadspaEffect/CMakeFiles/ladspaeffect.dir/progress.make

# Include the compile flags for this target's objects.
include plugins/LadspaEffect/CMakeFiles/ladspaeffect.dir/flags.make

plugins/LadspaEffect/qrc_ladspaeffect.cpp: ../plugins/LadspaEffect/logo.png
plugins/LadspaEffect/qrc_ladspaeffect.cpp: plugins/LadspaEffect/ladspaeffect.qrc.depends
plugins/LadspaEffect/qrc_ladspaeffect.cpp: plugins/LadspaEffect/ladspaeffect.qrc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/root/lmms/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating qrc_ladspaeffect.cpp"
	cd /root/lmms/build/plugins/LadspaEffect && /usr/lib/qt5/bin/rcc --name ladspaeffect --output /root/lmms/build/plugins/LadspaEffect/qrc_ladspaeffect.cpp /root/lmms/build/plugins/LadspaEffect/ladspaeffect.qrc

plugins/LadspaEffect/moc_LadspaEffect.cpp: ../plugins/LadspaEffect/LadspaEffect.h
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/root/lmms/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Generating moc_LadspaEffect.cpp"
	cd /root/lmms/build/plugins/LadspaEffect && /usr/lib/qt5/bin/moc @/root/lmms/build/plugins/LadspaEffect/moc_LadspaEffect.cpp_parameters

plugins/LadspaEffect/moc_LadspaControls.cpp: ../plugins/LadspaEffect/LadspaControls.h
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/root/lmms/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Generating moc_LadspaControls.cpp"
	cd /root/lmms/build/plugins/LadspaEffect && /usr/lib/qt5/bin/moc @/root/lmms/build/plugins/LadspaEffect/moc_LadspaControls.cpp_parameters

plugins/LadspaEffect/moc_LadspaControlDialog.cpp: ../plugins/LadspaEffect/LadspaControlDialog.h
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/root/lmms/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Generating moc_LadspaControlDialog.cpp"
	cd /root/lmms/build/plugins/LadspaEffect && /usr/lib/qt5/bin/moc @/root/lmms/build/plugins/LadspaEffect/moc_LadspaControlDialog.cpp_parameters

plugins/LadspaEffect/ladspaeffect.qrc: ../cmake/scripts/GenQrc.cmake
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/root/lmms/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Generating ladspaeffect.qrc"
	cd /root/lmms/plugins/LadspaEffect && /usr/bin/cmake -D OUT_FILE=/root/lmms/build/plugins/LadspaEffect/ladspaeffect.qrc -D RC_PREFIX=artwork/ladspaeffect -D "FILES:list=/root/lmms/plugins/LadspaEffect/logo.png;" -D DIR=/root/lmms/plugins/LadspaEffect -P /root/lmms/cmake/scripts/GenQrc.cmake

plugins/LadspaEffect/CMakeFiles/ladspaeffect.dir/LadspaEffect.cpp.o: plugins/LadspaEffect/CMakeFiles/ladspaeffect.dir/flags.make
plugins/LadspaEffect/CMakeFiles/ladspaeffect.dir/LadspaEffect.cpp.o: ../plugins/LadspaEffect/LadspaEffect.cpp
plugins/LadspaEffect/CMakeFiles/ladspaeffect.dir/LadspaEffect.cpp.o: plugins/LadspaEffect/qrc_ladspaeffect.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/root/lmms/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object plugins/LadspaEffect/CMakeFiles/ladspaeffect.dir/LadspaEffect.cpp.o"
	cd /root/lmms/build/plugins/LadspaEffect && /bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ladspaeffect.dir/LadspaEffect.cpp.o -c /root/lmms/plugins/LadspaEffect/LadspaEffect.cpp

plugins/LadspaEffect/CMakeFiles/ladspaeffect.dir/LadspaEffect.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ladspaeffect.dir/LadspaEffect.cpp.i"
	cd /root/lmms/build/plugins/LadspaEffect && /bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /root/lmms/plugins/LadspaEffect/LadspaEffect.cpp > CMakeFiles/ladspaeffect.dir/LadspaEffect.cpp.i

plugins/LadspaEffect/CMakeFiles/ladspaeffect.dir/LadspaEffect.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ladspaeffect.dir/LadspaEffect.cpp.s"
	cd /root/lmms/build/plugins/LadspaEffect && /bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /root/lmms/plugins/LadspaEffect/LadspaEffect.cpp -o CMakeFiles/ladspaeffect.dir/LadspaEffect.cpp.s

plugins/LadspaEffect/CMakeFiles/ladspaeffect.dir/LadspaControls.cpp.o: plugins/LadspaEffect/CMakeFiles/ladspaeffect.dir/flags.make
plugins/LadspaEffect/CMakeFiles/ladspaeffect.dir/LadspaControls.cpp.o: ../plugins/LadspaEffect/LadspaControls.cpp
plugins/LadspaEffect/CMakeFiles/ladspaeffect.dir/LadspaControls.cpp.o: plugins/LadspaEffect/qrc_ladspaeffect.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/root/lmms/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object plugins/LadspaEffect/CMakeFiles/ladspaeffect.dir/LadspaControls.cpp.o"
	cd /root/lmms/build/plugins/LadspaEffect && /bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ladspaeffect.dir/LadspaControls.cpp.o -c /root/lmms/plugins/LadspaEffect/LadspaControls.cpp

plugins/LadspaEffect/CMakeFiles/ladspaeffect.dir/LadspaControls.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ladspaeffect.dir/LadspaControls.cpp.i"
	cd /root/lmms/build/plugins/LadspaEffect && /bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /root/lmms/plugins/LadspaEffect/LadspaControls.cpp > CMakeFiles/ladspaeffect.dir/LadspaControls.cpp.i

plugins/LadspaEffect/CMakeFiles/ladspaeffect.dir/LadspaControls.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ladspaeffect.dir/LadspaControls.cpp.s"
	cd /root/lmms/build/plugins/LadspaEffect && /bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /root/lmms/plugins/LadspaEffect/LadspaControls.cpp -o CMakeFiles/ladspaeffect.dir/LadspaControls.cpp.s

plugins/LadspaEffect/CMakeFiles/ladspaeffect.dir/LadspaControlDialog.cpp.o: plugins/LadspaEffect/CMakeFiles/ladspaeffect.dir/flags.make
plugins/LadspaEffect/CMakeFiles/ladspaeffect.dir/LadspaControlDialog.cpp.o: ../plugins/LadspaEffect/LadspaControlDialog.cpp
plugins/LadspaEffect/CMakeFiles/ladspaeffect.dir/LadspaControlDialog.cpp.o: plugins/LadspaEffect/qrc_ladspaeffect.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/root/lmms/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object plugins/LadspaEffect/CMakeFiles/ladspaeffect.dir/LadspaControlDialog.cpp.o"
	cd /root/lmms/build/plugins/LadspaEffect && /bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ladspaeffect.dir/LadspaControlDialog.cpp.o -c /root/lmms/plugins/LadspaEffect/LadspaControlDialog.cpp

plugins/LadspaEffect/CMakeFiles/ladspaeffect.dir/LadspaControlDialog.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ladspaeffect.dir/LadspaControlDialog.cpp.i"
	cd /root/lmms/build/plugins/LadspaEffect && /bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /root/lmms/plugins/LadspaEffect/LadspaControlDialog.cpp > CMakeFiles/ladspaeffect.dir/LadspaControlDialog.cpp.i

plugins/LadspaEffect/CMakeFiles/ladspaeffect.dir/LadspaControlDialog.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ladspaeffect.dir/LadspaControlDialog.cpp.s"
	cd /root/lmms/build/plugins/LadspaEffect && /bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /root/lmms/plugins/LadspaEffect/LadspaControlDialog.cpp -o CMakeFiles/ladspaeffect.dir/LadspaControlDialog.cpp.s

plugins/LadspaEffect/CMakeFiles/ladspaeffect.dir/LadspaSubPluginFeatures.cpp.o: plugins/LadspaEffect/CMakeFiles/ladspaeffect.dir/flags.make
plugins/LadspaEffect/CMakeFiles/ladspaeffect.dir/LadspaSubPluginFeatures.cpp.o: ../plugins/LadspaEffect/LadspaSubPluginFeatures.cpp
plugins/LadspaEffect/CMakeFiles/ladspaeffect.dir/LadspaSubPluginFeatures.cpp.o: plugins/LadspaEffect/qrc_ladspaeffect.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/root/lmms/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object plugins/LadspaEffect/CMakeFiles/ladspaeffect.dir/LadspaSubPluginFeatures.cpp.o"
	cd /root/lmms/build/plugins/LadspaEffect && /bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ladspaeffect.dir/LadspaSubPluginFeatures.cpp.o -c /root/lmms/plugins/LadspaEffect/LadspaSubPluginFeatures.cpp

plugins/LadspaEffect/CMakeFiles/ladspaeffect.dir/LadspaSubPluginFeatures.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ladspaeffect.dir/LadspaSubPluginFeatures.cpp.i"
	cd /root/lmms/build/plugins/LadspaEffect && /bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /root/lmms/plugins/LadspaEffect/LadspaSubPluginFeatures.cpp > CMakeFiles/ladspaeffect.dir/LadspaSubPluginFeatures.cpp.i

plugins/LadspaEffect/CMakeFiles/ladspaeffect.dir/LadspaSubPluginFeatures.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ladspaeffect.dir/LadspaSubPluginFeatures.cpp.s"
	cd /root/lmms/build/plugins/LadspaEffect && /bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /root/lmms/plugins/LadspaEffect/LadspaSubPluginFeatures.cpp -o CMakeFiles/ladspaeffect.dir/LadspaSubPluginFeatures.cpp.s

plugins/LadspaEffect/CMakeFiles/ladspaeffect.dir/moc_LadspaEffect.cpp.o: plugins/LadspaEffect/CMakeFiles/ladspaeffect.dir/flags.make
plugins/LadspaEffect/CMakeFiles/ladspaeffect.dir/moc_LadspaEffect.cpp.o: plugins/LadspaEffect/moc_LadspaEffect.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/root/lmms/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Building CXX object plugins/LadspaEffect/CMakeFiles/ladspaeffect.dir/moc_LadspaEffect.cpp.o"
	cd /root/lmms/build/plugins/LadspaEffect && /bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ladspaeffect.dir/moc_LadspaEffect.cpp.o -c /root/lmms/build/plugins/LadspaEffect/moc_LadspaEffect.cpp

plugins/LadspaEffect/CMakeFiles/ladspaeffect.dir/moc_LadspaEffect.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ladspaeffect.dir/moc_LadspaEffect.cpp.i"
	cd /root/lmms/build/plugins/LadspaEffect && /bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /root/lmms/build/plugins/LadspaEffect/moc_LadspaEffect.cpp > CMakeFiles/ladspaeffect.dir/moc_LadspaEffect.cpp.i

plugins/LadspaEffect/CMakeFiles/ladspaeffect.dir/moc_LadspaEffect.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ladspaeffect.dir/moc_LadspaEffect.cpp.s"
	cd /root/lmms/build/plugins/LadspaEffect && /bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /root/lmms/build/plugins/LadspaEffect/moc_LadspaEffect.cpp -o CMakeFiles/ladspaeffect.dir/moc_LadspaEffect.cpp.s

plugins/LadspaEffect/CMakeFiles/ladspaeffect.dir/moc_LadspaControls.cpp.o: plugins/LadspaEffect/CMakeFiles/ladspaeffect.dir/flags.make
plugins/LadspaEffect/CMakeFiles/ladspaeffect.dir/moc_LadspaControls.cpp.o: plugins/LadspaEffect/moc_LadspaControls.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/root/lmms/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_11) "Building CXX object plugins/LadspaEffect/CMakeFiles/ladspaeffect.dir/moc_LadspaControls.cpp.o"
	cd /root/lmms/build/plugins/LadspaEffect && /bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ladspaeffect.dir/moc_LadspaControls.cpp.o -c /root/lmms/build/plugins/LadspaEffect/moc_LadspaControls.cpp

plugins/LadspaEffect/CMakeFiles/ladspaeffect.dir/moc_LadspaControls.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ladspaeffect.dir/moc_LadspaControls.cpp.i"
	cd /root/lmms/build/plugins/LadspaEffect && /bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /root/lmms/build/plugins/LadspaEffect/moc_LadspaControls.cpp > CMakeFiles/ladspaeffect.dir/moc_LadspaControls.cpp.i

plugins/LadspaEffect/CMakeFiles/ladspaeffect.dir/moc_LadspaControls.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ladspaeffect.dir/moc_LadspaControls.cpp.s"
	cd /root/lmms/build/plugins/LadspaEffect && /bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /root/lmms/build/plugins/LadspaEffect/moc_LadspaControls.cpp -o CMakeFiles/ladspaeffect.dir/moc_LadspaControls.cpp.s

plugins/LadspaEffect/CMakeFiles/ladspaeffect.dir/moc_LadspaControlDialog.cpp.o: plugins/LadspaEffect/CMakeFiles/ladspaeffect.dir/flags.make
plugins/LadspaEffect/CMakeFiles/ladspaeffect.dir/moc_LadspaControlDialog.cpp.o: plugins/LadspaEffect/moc_LadspaControlDialog.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/root/lmms/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_12) "Building CXX object plugins/LadspaEffect/CMakeFiles/ladspaeffect.dir/moc_LadspaControlDialog.cpp.o"
	cd /root/lmms/build/plugins/LadspaEffect && /bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ladspaeffect.dir/moc_LadspaControlDialog.cpp.o -c /root/lmms/build/plugins/LadspaEffect/moc_LadspaControlDialog.cpp

plugins/LadspaEffect/CMakeFiles/ladspaeffect.dir/moc_LadspaControlDialog.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ladspaeffect.dir/moc_LadspaControlDialog.cpp.i"
	cd /root/lmms/build/plugins/LadspaEffect && /bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /root/lmms/build/plugins/LadspaEffect/moc_LadspaControlDialog.cpp > CMakeFiles/ladspaeffect.dir/moc_LadspaControlDialog.cpp.i

plugins/LadspaEffect/CMakeFiles/ladspaeffect.dir/moc_LadspaControlDialog.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ladspaeffect.dir/moc_LadspaControlDialog.cpp.s"
	cd /root/lmms/build/plugins/LadspaEffect && /bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /root/lmms/build/plugins/LadspaEffect/moc_LadspaControlDialog.cpp -o CMakeFiles/ladspaeffect.dir/moc_LadspaControlDialog.cpp.s

plugins/LadspaEffect/CMakeFiles/ladspaeffect.dir/qrc_ladspaeffect.cpp.o: plugins/LadspaEffect/CMakeFiles/ladspaeffect.dir/flags.make
plugins/LadspaEffect/CMakeFiles/ladspaeffect.dir/qrc_ladspaeffect.cpp.o: plugins/LadspaEffect/qrc_ladspaeffect.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/root/lmms/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_13) "Building CXX object plugins/LadspaEffect/CMakeFiles/ladspaeffect.dir/qrc_ladspaeffect.cpp.o"
	cd /root/lmms/build/plugins/LadspaEffect && /bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ladspaeffect.dir/qrc_ladspaeffect.cpp.o -c /root/lmms/build/plugins/LadspaEffect/qrc_ladspaeffect.cpp

plugins/LadspaEffect/CMakeFiles/ladspaeffect.dir/qrc_ladspaeffect.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ladspaeffect.dir/qrc_ladspaeffect.cpp.i"
	cd /root/lmms/build/plugins/LadspaEffect && /bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /root/lmms/build/plugins/LadspaEffect/qrc_ladspaeffect.cpp > CMakeFiles/ladspaeffect.dir/qrc_ladspaeffect.cpp.i

plugins/LadspaEffect/CMakeFiles/ladspaeffect.dir/qrc_ladspaeffect.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ladspaeffect.dir/qrc_ladspaeffect.cpp.s"
	cd /root/lmms/build/plugins/LadspaEffect && /bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /root/lmms/build/plugins/LadspaEffect/qrc_ladspaeffect.cpp -o CMakeFiles/ladspaeffect.dir/qrc_ladspaeffect.cpp.s

# Object files for target ladspaeffect
ladspaeffect_OBJECTS = \
"CMakeFiles/ladspaeffect.dir/LadspaEffect.cpp.o" \
"CMakeFiles/ladspaeffect.dir/LadspaControls.cpp.o" \
"CMakeFiles/ladspaeffect.dir/LadspaControlDialog.cpp.o" \
"CMakeFiles/ladspaeffect.dir/LadspaSubPluginFeatures.cpp.o" \
"CMakeFiles/ladspaeffect.dir/moc_LadspaEffect.cpp.o" \
"CMakeFiles/ladspaeffect.dir/moc_LadspaControls.cpp.o" \
"CMakeFiles/ladspaeffect.dir/moc_LadspaControlDialog.cpp.o" \
"CMakeFiles/ladspaeffect.dir/qrc_ladspaeffect.cpp.o"

# External object files for target ladspaeffect
ladspaeffect_EXTERNAL_OBJECTS =

plugins/libladspaeffect.so: plugins/LadspaEffect/CMakeFiles/ladspaeffect.dir/LadspaEffect.cpp.o
plugins/libladspaeffect.so: plugins/LadspaEffect/CMakeFiles/ladspaeffect.dir/LadspaControls.cpp.o
plugins/libladspaeffect.so: plugins/LadspaEffect/CMakeFiles/ladspaeffect.dir/LadspaControlDialog.cpp.o
plugins/libladspaeffect.so: plugins/LadspaEffect/CMakeFiles/ladspaeffect.dir/LadspaSubPluginFeatures.cpp.o
plugins/libladspaeffect.so: plugins/LadspaEffect/CMakeFiles/ladspaeffect.dir/moc_LadspaEffect.cpp.o
plugins/libladspaeffect.so: plugins/LadspaEffect/CMakeFiles/ladspaeffect.dir/moc_LadspaControls.cpp.o
plugins/libladspaeffect.so: plugins/LadspaEffect/CMakeFiles/ladspaeffect.dir/moc_LadspaControlDialog.cpp.o
plugins/libladspaeffect.so: plugins/LadspaEffect/CMakeFiles/ladspaeffect.dir/qrc_ladspaeffect.cpp.o
plugins/libladspaeffect.so: plugins/LadspaEffect/CMakeFiles/ladspaeffect.dir/build.make
plugins/libladspaeffect.so: /usr/lib/x86_64-linux-gnu/libQt5Widgets.so.5.12.2
plugins/libladspaeffect.so: /usr/lib/x86_64-linux-gnu/libQt5Xml.so.5.12.2
plugins/libladspaeffect.so: /usr/lib/x86_64-linux-gnu/libQt5Gui.so.5.12.2
plugins/libladspaeffect.so: /usr/lib/x86_64-linux-gnu/libQt5Core.so.5.12.2
plugins/libladspaeffect.so: plugins/LadspaEffect/CMakeFiles/ladspaeffect.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/root/lmms/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_14) "Linking CXX shared module ../libladspaeffect.so"
	cd /root/lmms/build/plugins/LadspaEffect && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/ladspaeffect.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
plugins/LadspaEffect/CMakeFiles/ladspaeffect.dir/build: plugins/libladspaeffect.so

.PHONY : plugins/LadspaEffect/CMakeFiles/ladspaeffect.dir/build

plugins/LadspaEffect/CMakeFiles/ladspaeffect.dir/clean:
	cd /root/lmms/build/plugins/LadspaEffect && $(CMAKE_COMMAND) -P CMakeFiles/ladspaeffect.dir/cmake_clean.cmake
.PHONY : plugins/LadspaEffect/CMakeFiles/ladspaeffect.dir/clean

plugins/LadspaEffect/CMakeFiles/ladspaeffect.dir/depend: plugins/LadspaEffect/qrc_ladspaeffect.cpp
plugins/LadspaEffect/CMakeFiles/ladspaeffect.dir/depend: plugins/LadspaEffect/moc_LadspaEffect.cpp
plugins/LadspaEffect/CMakeFiles/ladspaeffect.dir/depend: plugins/LadspaEffect/moc_LadspaControls.cpp
plugins/LadspaEffect/CMakeFiles/ladspaeffect.dir/depend: plugins/LadspaEffect/moc_LadspaControlDialog.cpp
plugins/LadspaEffect/CMakeFiles/ladspaeffect.dir/depend: plugins/LadspaEffect/ladspaeffect.qrc
	cd /root/lmms/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /root/lmms /root/lmms/plugins/LadspaEffect /root/lmms/build /root/lmms/build/plugins/LadspaEffect /root/lmms/build/plugins/LadspaEffect/CMakeFiles/ladspaeffect.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : plugins/LadspaEffect/CMakeFiles/ladspaeffect.dir/depend

