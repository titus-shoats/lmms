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
include plugins/sf2_player/CMakeFiles/sf2player.dir/depend.make

# Include the progress variables for this target.
include plugins/sf2_player/CMakeFiles/sf2player.dir/progress.make

# Include the compile flags for this target's objects.
include plugins/sf2_player/CMakeFiles/sf2player.dir/flags.make

plugins/sf2_player/ui_patches_dialog.h: ../plugins/sf2_player/patches_dialog.ui
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/root/lmms/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating ui_patches_dialog.h"
	cd /root/lmms/build/plugins/sf2_player && /usr/lib/qt5/bin/uic -o /root/lmms/build/plugins/sf2_player/ui_patches_dialog.h /root/lmms/plugins/sf2_player/patches_dialog.ui

plugins/sf2_player/qrc_sf2player.cpp: ../plugins/sf2_player/artwork.png
plugins/sf2_player/qrc_sf2player.cpp: ../plugins/sf2_player/chorus_off.png
plugins/sf2_player/qrc_sf2player.cpp: ../plugins/sf2_player/chorus_on.png
plugins/sf2_player/qrc_sf2player.cpp: ../plugins/sf2_player/fileselect_off.png
plugins/sf2_player/qrc_sf2player.cpp: ../plugins/sf2_player/fileselect_on.png
plugins/sf2_player/qrc_sf2player.cpp: ../plugins/sf2_player/logo.png
plugins/sf2_player/qrc_sf2player.cpp: ../plugins/sf2_player/patches_off.png
plugins/sf2_player/qrc_sf2player.cpp: ../plugins/sf2_player/patches_on.png
plugins/sf2_player/qrc_sf2player.cpp: ../plugins/sf2_player/reverb_off.png
plugins/sf2_player/qrc_sf2player.cpp: ../plugins/sf2_player/reverb_on.png
plugins/sf2_player/qrc_sf2player.cpp: plugins/sf2_player/sf2player.qrc.depends
plugins/sf2_player/qrc_sf2player.cpp: plugins/sf2_player/sf2player.qrc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/root/lmms/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Generating qrc_sf2player.cpp"
	cd /root/lmms/build/plugins/sf2_player && /usr/lib/qt5/bin/rcc --name sf2player --output /root/lmms/build/plugins/sf2_player/qrc_sf2player.cpp /root/lmms/build/plugins/sf2_player/sf2player.qrc

plugins/sf2_player/moc_sf2_player.cpp: ../plugins/sf2_player/sf2_player.h
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/root/lmms/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Generating moc_sf2_player.cpp"
	cd /root/lmms/build/plugins/sf2_player && /usr/lib/qt5/bin/moc @/root/lmms/build/plugins/sf2_player/moc_sf2_player.cpp_parameters

plugins/sf2_player/moc_patches_dialog.cpp: ../plugins/sf2_player/patches_dialog.h
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/root/lmms/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Generating moc_patches_dialog.cpp"
	cd /root/lmms/build/plugins/sf2_player && /usr/lib/qt5/bin/moc @/root/lmms/build/plugins/sf2_player/moc_patches_dialog.cpp_parameters

plugins/sf2_player/sf2player.qrc: ../cmake/scripts/GenQrc.cmake
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/root/lmms/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Generating sf2player.qrc"
	cd /root/lmms/plugins/sf2_player && /usr/bin/cmake -D OUT_FILE=/root/lmms/build/plugins/sf2_player/sf2player.qrc -D RC_PREFIX=artwork/sf2player -D "FILES:list=/root/lmms/plugins/sf2_player/artwork.png;/root/lmms/plugins/sf2_player/chorus_off.png;/root/lmms/plugins/sf2_player/chorus_on.png;/root/lmms/plugins/sf2_player/fileselect_off.png;/root/lmms/plugins/sf2_player/fileselect_on.png;/root/lmms/plugins/sf2_player/logo.png;/root/lmms/plugins/sf2_player/patches_off.png;/root/lmms/plugins/sf2_player/patches_on.png;/root/lmms/plugins/sf2_player/reverb_off.png;/root/lmms/plugins/sf2_player/reverb_on.png;" -D DIR=/root/lmms/plugins/sf2_player -P /root/lmms/cmake/scripts/GenQrc.cmake

plugins/sf2_player/CMakeFiles/sf2player.dir/sf2_player.cpp.o: plugins/sf2_player/CMakeFiles/sf2player.dir/flags.make
plugins/sf2_player/CMakeFiles/sf2player.dir/sf2_player.cpp.o: ../plugins/sf2_player/sf2_player.cpp
plugins/sf2_player/CMakeFiles/sf2player.dir/sf2_player.cpp.o: plugins/sf2_player/qrc_sf2player.cpp
plugins/sf2_player/CMakeFiles/sf2player.dir/sf2_player.cpp.o: plugins/sf2_player/ui_patches_dialog.h
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/root/lmms/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object plugins/sf2_player/CMakeFiles/sf2player.dir/sf2_player.cpp.o"
	cd /root/lmms/build/plugins/sf2_player && /bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/sf2player.dir/sf2_player.cpp.o -c /root/lmms/plugins/sf2_player/sf2_player.cpp

plugins/sf2_player/CMakeFiles/sf2player.dir/sf2_player.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/sf2player.dir/sf2_player.cpp.i"
	cd /root/lmms/build/plugins/sf2_player && /bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /root/lmms/plugins/sf2_player/sf2_player.cpp > CMakeFiles/sf2player.dir/sf2_player.cpp.i

plugins/sf2_player/CMakeFiles/sf2player.dir/sf2_player.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/sf2player.dir/sf2_player.cpp.s"
	cd /root/lmms/build/plugins/sf2_player && /bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /root/lmms/plugins/sf2_player/sf2_player.cpp -o CMakeFiles/sf2player.dir/sf2_player.cpp.s

plugins/sf2_player/CMakeFiles/sf2player.dir/patches_dialog.cpp.o: plugins/sf2_player/CMakeFiles/sf2player.dir/flags.make
plugins/sf2_player/CMakeFiles/sf2player.dir/patches_dialog.cpp.o: ../plugins/sf2_player/patches_dialog.cpp
plugins/sf2_player/CMakeFiles/sf2player.dir/patches_dialog.cpp.o: plugins/sf2_player/qrc_sf2player.cpp
plugins/sf2_player/CMakeFiles/sf2player.dir/patches_dialog.cpp.o: plugins/sf2_player/ui_patches_dialog.h
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/root/lmms/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object plugins/sf2_player/CMakeFiles/sf2player.dir/patches_dialog.cpp.o"
	cd /root/lmms/build/plugins/sf2_player && /bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/sf2player.dir/patches_dialog.cpp.o -c /root/lmms/plugins/sf2_player/patches_dialog.cpp

plugins/sf2_player/CMakeFiles/sf2player.dir/patches_dialog.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/sf2player.dir/patches_dialog.cpp.i"
	cd /root/lmms/build/plugins/sf2_player && /bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /root/lmms/plugins/sf2_player/patches_dialog.cpp > CMakeFiles/sf2player.dir/patches_dialog.cpp.i

plugins/sf2_player/CMakeFiles/sf2player.dir/patches_dialog.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/sf2player.dir/patches_dialog.cpp.s"
	cd /root/lmms/build/plugins/sf2_player && /bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /root/lmms/plugins/sf2_player/patches_dialog.cpp -o CMakeFiles/sf2player.dir/patches_dialog.cpp.s

plugins/sf2_player/CMakeFiles/sf2player.dir/moc_sf2_player.cpp.o: plugins/sf2_player/CMakeFiles/sf2player.dir/flags.make
plugins/sf2_player/CMakeFiles/sf2player.dir/moc_sf2_player.cpp.o: plugins/sf2_player/moc_sf2_player.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/root/lmms/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object plugins/sf2_player/CMakeFiles/sf2player.dir/moc_sf2_player.cpp.o"
	cd /root/lmms/build/plugins/sf2_player && /bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/sf2player.dir/moc_sf2_player.cpp.o -c /root/lmms/build/plugins/sf2_player/moc_sf2_player.cpp

plugins/sf2_player/CMakeFiles/sf2player.dir/moc_sf2_player.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/sf2player.dir/moc_sf2_player.cpp.i"
	cd /root/lmms/build/plugins/sf2_player && /bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /root/lmms/build/plugins/sf2_player/moc_sf2_player.cpp > CMakeFiles/sf2player.dir/moc_sf2_player.cpp.i

plugins/sf2_player/CMakeFiles/sf2player.dir/moc_sf2_player.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/sf2player.dir/moc_sf2_player.cpp.s"
	cd /root/lmms/build/plugins/sf2_player && /bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /root/lmms/build/plugins/sf2_player/moc_sf2_player.cpp -o CMakeFiles/sf2player.dir/moc_sf2_player.cpp.s

plugins/sf2_player/CMakeFiles/sf2player.dir/moc_patches_dialog.cpp.o: plugins/sf2_player/CMakeFiles/sf2player.dir/flags.make
plugins/sf2_player/CMakeFiles/sf2player.dir/moc_patches_dialog.cpp.o: plugins/sf2_player/moc_patches_dialog.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/root/lmms/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object plugins/sf2_player/CMakeFiles/sf2player.dir/moc_patches_dialog.cpp.o"
	cd /root/lmms/build/plugins/sf2_player && /bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/sf2player.dir/moc_patches_dialog.cpp.o -c /root/lmms/build/plugins/sf2_player/moc_patches_dialog.cpp

plugins/sf2_player/CMakeFiles/sf2player.dir/moc_patches_dialog.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/sf2player.dir/moc_patches_dialog.cpp.i"
	cd /root/lmms/build/plugins/sf2_player && /bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /root/lmms/build/plugins/sf2_player/moc_patches_dialog.cpp > CMakeFiles/sf2player.dir/moc_patches_dialog.cpp.i

plugins/sf2_player/CMakeFiles/sf2player.dir/moc_patches_dialog.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/sf2player.dir/moc_patches_dialog.cpp.s"
	cd /root/lmms/build/plugins/sf2_player && /bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /root/lmms/build/plugins/sf2_player/moc_patches_dialog.cpp -o CMakeFiles/sf2player.dir/moc_patches_dialog.cpp.s

plugins/sf2_player/CMakeFiles/sf2player.dir/qrc_sf2player.cpp.o: plugins/sf2_player/CMakeFiles/sf2player.dir/flags.make
plugins/sf2_player/CMakeFiles/sf2player.dir/qrc_sf2player.cpp.o: plugins/sf2_player/qrc_sf2player.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/root/lmms/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Building CXX object plugins/sf2_player/CMakeFiles/sf2player.dir/qrc_sf2player.cpp.o"
	cd /root/lmms/build/plugins/sf2_player && /bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/sf2player.dir/qrc_sf2player.cpp.o -c /root/lmms/build/plugins/sf2_player/qrc_sf2player.cpp

plugins/sf2_player/CMakeFiles/sf2player.dir/qrc_sf2player.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/sf2player.dir/qrc_sf2player.cpp.i"
	cd /root/lmms/build/plugins/sf2_player && /bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /root/lmms/build/plugins/sf2_player/qrc_sf2player.cpp > CMakeFiles/sf2player.dir/qrc_sf2player.cpp.i

plugins/sf2_player/CMakeFiles/sf2player.dir/qrc_sf2player.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/sf2player.dir/qrc_sf2player.cpp.s"
	cd /root/lmms/build/plugins/sf2_player && /bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /root/lmms/build/plugins/sf2_player/qrc_sf2player.cpp -o CMakeFiles/sf2player.dir/qrc_sf2player.cpp.s

# Object files for target sf2player
sf2player_OBJECTS = \
"CMakeFiles/sf2player.dir/sf2_player.cpp.o" \
"CMakeFiles/sf2player.dir/patches_dialog.cpp.o" \
"CMakeFiles/sf2player.dir/moc_sf2_player.cpp.o" \
"CMakeFiles/sf2player.dir/moc_patches_dialog.cpp.o" \
"CMakeFiles/sf2player.dir/qrc_sf2player.cpp.o"

# External object files for target sf2player
sf2player_EXTERNAL_OBJECTS =

plugins/libsf2player.so: plugins/sf2_player/CMakeFiles/sf2player.dir/sf2_player.cpp.o
plugins/libsf2player.so: plugins/sf2_player/CMakeFiles/sf2player.dir/patches_dialog.cpp.o
plugins/libsf2player.so: plugins/sf2_player/CMakeFiles/sf2player.dir/moc_sf2_player.cpp.o
plugins/libsf2player.so: plugins/sf2_player/CMakeFiles/sf2player.dir/moc_patches_dialog.cpp.o
plugins/libsf2player.so: plugins/sf2_player/CMakeFiles/sf2player.dir/qrc_sf2player.cpp.o
plugins/libsf2player.so: plugins/sf2_player/CMakeFiles/sf2player.dir/build.make
plugins/libsf2player.so: /usr/lib/x86_64-linux-gnu/libsamplerate.so
plugins/libsf2player.so: /usr/lib/x86_64-linux-gnu/libQt5Widgets.so.5.12.2
plugins/libsf2player.so: /usr/lib/x86_64-linux-gnu/libQt5Xml.so.5.12.2
plugins/libsf2player.so: /usr/lib/x86_64-linux-gnu/libQt5Gui.so.5.12.2
plugins/libsf2player.so: /usr/lib/x86_64-linux-gnu/libQt5Core.so.5.12.2
plugins/libsf2player.so: plugins/sf2_player/CMakeFiles/sf2player.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/root/lmms/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_11) "Linking CXX shared module ../libsf2player.so"
	cd /root/lmms/build/plugins/sf2_player && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/sf2player.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
plugins/sf2_player/CMakeFiles/sf2player.dir/build: plugins/libsf2player.so

.PHONY : plugins/sf2_player/CMakeFiles/sf2player.dir/build

plugins/sf2_player/CMakeFiles/sf2player.dir/clean:
	cd /root/lmms/build/plugins/sf2_player && $(CMAKE_COMMAND) -P CMakeFiles/sf2player.dir/cmake_clean.cmake
.PHONY : plugins/sf2_player/CMakeFiles/sf2player.dir/clean

plugins/sf2_player/CMakeFiles/sf2player.dir/depend: plugins/sf2_player/ui_patches_dialog.h
plugins/sf2_player/CMakeFiles/sf2player.dir/depend: plugins/sf2_player/qrc_sf2player.cpp
plugins/sf2_player/CMakeFiles/sf2player.dir/depend: plugins/sf2_player/moc_sf2_player.cpp
plugins/sf2_player/CMakeFiles/sf2player.dir/depend: plugins/sf2_player/moc_patches_dialog.cpp
plugins/sf2_player/CMakeFiles/sf2player.dir/depend: plugins/sf2_player/sf2player.qrc
	cd /root/lmms/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /root/lmms /root/lmms/plugins/sf2_player /root/lmms/build /root/lmms/build/plugins/sf2_player /root/lmms/build/plugins/sf2_player/CMakeFiles/sf2player.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : plugins/sf2_player/CMakeFiles/sf2player.dir/depend
