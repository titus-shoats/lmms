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
include plugins/watsyn/CMakeFiles/watsyn.dir/depend.make

# Include the progress variables for this target.
include plugins/watsyn/CMakeFiles/watsyn.dir/progress.make

# Include the compile flags for this target's objects.
include plugins/watsyn/CMakeFiles/watsyn.dir/flags.make

plugins/watsyn/qrc_watsyn.cpp: ../plugins/watsyn/a1_active.png
plugins/watsyn/qrc_watsyn.cpp: ../plugins/watsyn/a1_inactive.png
plugins/watsyn/qrc_watsyn.cpp: ../plugins/watsyn/a2_active.png
plugins/watsyn/qrc_watsyn.cpp: ../plugins/watsyn/a2_inactive.png
plugins/watsyn/qrc_watsyn.cpp: ../plugins/watsyn/aam_active.png
plugins/watsyn/qrc_watsyn.cpp: ../plugins/watsyn/aam_inactive.png
plugins/watsyn/qrc_watsyn.cpp: ../plugins/watsyn/amix_active.png
plugins/watsyn/qrc_watsyn.cpp: ../plugins/watsyn/amix_inactive.png
plugins/watsyn/qrc_watsyn.cpp: ../plugins/watsyn/apm_active.png
plugins/watsyn/qrc_watsyn.cpp: ../plugins/watsyn/apm_inactive.png
plugins/watsyn/qrc_watsyn.cpp: ../plugins/watsyn/arm_active.png
plugins/watsyn/qrc_watsyn.cpp: ../plugins/watsyn/arm_inactive.png
plugins/watsyn/qrc_watsyn.cpp: ../plugins/watsyn/artwork.png
plugins/watsyn/qrc_watsyn.cpp: ../plugins/watsyn/b1_active.png
plugins/watsyn/qrc_watsyn.cpp: ../plugins/watsyn/b1_inactive.png
plugins/watsyn/qrc_watsyn.cpp: ../plugins/watsyn/b2_active.png
plugins/watsyn/qrc_watsyn.cpp: ../plugins/watsyn/b2_inactive.png
plugins/watsyn/qrc_watsyn.cpp: ../plugins/watsyn/bam_active.png
plugins/watsyn/qrc_watsyn.cpp: ../plugins/watsyn/bam_inactive.png
plugins/watsyn/qrc_watsyn.cpp: ../plugins/watsyn/bmix_active.png
plugins/watsyn/qrc_watsyn.cpp: ../plugins/watsyn/bmix_inactive.png
plugins/watsyn/qrc_watsyn.cpp: ../plugins/watsyn/bpm_active.png
plugins/watsyn/qrc_watsyn.cpp: ../plugins/watsyn/bpm_inactive.png
plugins/watsyn/qrc_watsyn.cpp: ../plugins/watsyn/brm_active.png
plugins/watsyn/qrc_watsyn.cpp: ../plugins/watsyn/brm_inactive.png
plugins/watsyn/qrc_watsyn.cpp: ../plugins/watsyn/inv_active.png
plugins/watsyn/qrc_watsyn.cpp: ../plugins/watsyn/inv_inactive.png
plugins/watsyn/qrc_watsyn.cpp: ../plugins/watsyn/load_active.png
plugins/watsyn/qrc_watsyn.cpp: ../plugins/watsyn/load_inactive.png
plugins/watsyn/qrc_watsyn.cpp: ../plugins/watsyn/logo.png
plugins/watsyn/qrc_watsyn.cpp: ../plugins/watsyn/norm_active.png
plugins/watsyn/qrc_watsyn.cpp: ../plugins/watsyn/norm_inactive.png
plugins/watsyn/qrc_watsyn.cpp: ../plugins/watsyn/phl_active.png
plugins/watsyn/qrc_watsyn.cpp: ../plugins/watsyn/phl_inactive.png
plugins/watsyn/qrc_watsyn.cpp: ../plugins/watsyn/phr_active.png
plugins/watsyn/qrc_watsyn.cpp: ../plugins/watsyn/phr_inactive.png
plugins/watsyn/qrc_watsyn.cpp: ../plugins/watsyn/saw_active.png
plugins/watsyn/qrc_watsyn.cpp: ../plugins/watsyn/saw_inactive.png
plugins/watsyn/qrc_watsyn.cpp: ../plugins/watsyn/sin_active.png
plugins/watsyn/qrc_watsyn.cpp: ../plugins/watsyn/sin_inactive.png
plugins/watsyn/qrc_watsyn.cpp: ../plugins/watsyn/smooth_active.png
plugins/watsyn/qrc_watsyn.cpp: ../plugins/watsyn/smooth_inactive.png
plugins/watsyn/qrc_watsyn.cpp: ../plugins/watsyn/sqr_active.png
plugins/watsyn/qrc_watsyn.cpp: ../plugins/watsyn/sqr_inactive.png
plugins/watsyn/qrc_watsyn.cpp: ../plugins/watsyn/tri_active.png
plugins/watsyn/qrc_watsyn.cpp: ../plugins/watsyn/tri_inactive.png
plugins/watsyn/qrc_watsyn.cpp: ../plugins/watsyn/wavegraph.png
plugins/watsyn/qrc_watsyn.cpp: plugins/watsyn/watsyn.qrc.depends
plugins/watsyn/qrc_watsyn.cpp: plugins/watsyn/watsyn.qrc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/root/lmms/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating qrc_watsyn.cpp"
	cd /root/lmms/build/plugins/watsyn && /usr/lib/qt5/bin/rcc --name watsyn --output /root/lmms/build/plugins/watsyn/qrc_watsyn.cpp /root/lmms/build/plugins/watsyn/watsyn.qrc

plugins/watsyn/moc_Watsyn.cpp: ../plugins/watsyn/Watsyn.h
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/root/lmms/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Generating moc_Watsyn.cpp"
	cd /root/lmms/build/plugins/watsyn && /usr/lib/qt5/bin/moc @/root/lmms/build/plugins/watsyn/moc_Watsyn.cpp_parameters

plugins/watsyn/watsyn.qrc: ../cmake/scripts/GenQrc.cmake
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/root/lmms/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Generating watsyn.qrc"
	cd /root/lmms/plugins/watsyn && /usr/bin/cmake -D OUT_FILE=/root/lmms/build/plugins/watsyn/watsyn.qrc -D RC_PREFIX=artwork/watsyn -D "FILES:list=/root/lmms/plugins/watsyn/a1_active.png;/root/lmms/plugins/watsyn/a1_inactive.png;/root/lmms/plugins/watsyn/a2_active.png;/root/lmms/plugins/watsyn/a2_inactive.png;/root/lmms/plugins/watsyn/aam_active.png;/root/lmms/plugins/watsyn/aam_inactive.png;/root/lmms/plugins/watsyn/amix_active.png;/root/lmms/plugins/watsyn/amix_inactive.png;/root/lmms/plugins/watsyn/apm_active.png;/root/lmms/plugins/watsyn/apm_inactive.png;/root/lmms/plugins/watsyn/arm_active.png;/root/lmms/plugins/watsyn/arm_inactive.png;/root/lmms/plugins/watsyn/artwork.png;/root/lmms/plugins/watsyn/b1_active.png;/root/lmms/plugins/watsyn/b1_inactive.png;/root/lmms/plugins/watsyn/b2_active.png;/root/lmms/plugins/watsyn/b2_inactive.png;/root/lmms/plugins/watsyn/bam_active.png;/root/lmms/plugins/watsyn/bam_inactive.png;/root/lmms/plugins/watsyn/bmix_active.png;/root/lmms/plugins/watsyn/bmix_inactive.png;/root/lmms/plugins/watsyn/bpm_active.png;/root/lmms/plugins/watsyn/bpm_inactive.png;/root/lmms/plugins/watsyn/brm_active.png;/root/lmms/plugins/watsyn/brm_inactive.png;/root/lmms/plugins/watsyn/inv_active.png;/root/lmms/plugins/watsyn/inv_inactive.png;/root/lmms/plugins/watsyn/load_active.png;/root/lmms/plugins/watsyn/load_inactive.png;/root/lmms/plugins/watsyn/logo.png;/root/lmms/plugins/watsyn/norm_active.png;/root/lmms/plugins/watsyn/norm_inactive.png;/root/lmms/plugins/watsyn/phl_active.png;/root/lmms/plugins/watsyn/phl_inactive.png;/root/lmms/plugins/watsyn/phr_active.png;/root/lmms/plugins/watsyn/phr_inactive.png;/root/lmms/plugins/watsyn/saw_active.png;/root/lmms/plugins/watsyn/saw_inactive.png;/root/lmms/plugins/watsyn/sin_active.png;/root/lmms/plugins/watsyn/sin_inactive.png;/root/lmms/plugins/watsyn/smooth_active.png;/root/lmms/plugins/watsyn/smooth_inactive.png;/root/lmms/plugins/watsyn/sqr_active.png;/root/lmms/plugins/watsyn/sqr_inactive.png;/root/lmms/plugins/watsyn/tri_active.png;/root/lmms/plugins/watsyn/tri_inactive.png;/root/lmms/plugins/watsyn/wavegraph.png;" -D DIR=/root/lmms/plugins/watsyn -P /root/lmms/cmake/scripts/GenQrc.cmake

plugins/watsyn/CMakeFiles/watsyn.dir/Watsyn.cpp.o: plugins/watsyn/CMakeFiles/watsyn.dir/flags.make
plugins/watsyn/CMakeFiles/watsyn.dir/Watsyn.cpp.o: ../plugins/watsyn/Watsyn.cpp
plugins/watsyn/CMakeFiles/watsyn.dir/Watsyn.cpp.o: plugins/watsyn/qrc_watsyn.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/root/lmms/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object plugins/watsyn/CMakeFiles/watsyn.dir/Watsyn.cpp.o"
	cd /root/lmms/build/plugins/watsyn && /bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/watsyn.dir/Watsyn.cpp.o -c /root/lmms/plugins/watsyn/Watsyn.cpp

plugins/watsyn/CMakeFiles/watsyn.dir/Watsyn.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/watsyn.dir/Watsyn.cpp.i"
	cd /root/lmms/build/plugins/watsyn && /bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /root/lmms/plugins/watsyn/Watsyn.cpp > CMakeFiles/watsyn.dir/Watsyn.cpp.i

plugins/watsyn/CMakeFiles/watsyn.dir/Watsyn.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/watsyn.dir/Watsyn.cpp.s"
	cd /root/lmms/build/plugins/watsyn && /bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /root/lmms/plugins/watsyn/Watsyn.cpp -o CMakeFiles/watsyn.dir/Watsyn.cpp.s

plugins/watsyn/CMakeFiles/watsyn.dir/moc_Watsyn.cpp.o: plugins/watsyn/CMakeFiles/watsyn.dir/flags.make
plugins/watsyn/CMakeFiles/watsyn.dir/moc_Watsyn.cpp.o: plugins/watsyn/moc_Watsyn.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/root/lmms/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object plugins/watsyn/CMakeFiles/watsyn.dir/moc_Watsyn.cpp.o"
	cd /root/lmms/build/plugins/watsyn && /bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/watsyn.dir/moc_Watsyn.cpp.o -c /root/lmms/build/plugins/watsyn/moc_Watsyn.cpp

plugins/watsyn/CMakeFiles/watsyn.dir/moc_Watsyn.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/watsyn.dir/moc_Watsyn.cpp.i"
	cd /root/lmms/build/plugins/watsyn && /bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /root/lmms/build/plugins/watsyn/moc_Watsyn.cpp > CMakeFiles/watsyn.dir/moc_Watsyn.cpp.i

plugins/watsyn/CMakeFiles/watsyn.dir/moc_Watsyn.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/watsyn.dir/moc_Watsyn.cpp.s"
	cd /root/lmms/build/plugins/watsyn && /bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /root/lmms/build/plugins/watsyn/moc_Watsyn.cpp -o CMakeFiles/watsyn.dir/moc_Watsyn.cpp.s

plugins/watsyn/CMakeFiles/watsyn.dir/qrc_watsyn.cpp.o: plugins/watsyn/CMakeFiles/watsyn.dir/flags.make
plugins/watsyn/CMakeFiles/watsyn.dir/qrc_watsyn.cpp.o: plugins/watsyn/qrc_watsyn.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/root/lmms/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object plugins/watsyn/CMakeFiles/watsyn.dir/qrc_watsyn.cpp.o"
	cd /root/lmms/build/plugins/watsyn && /bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/watsyn.dir/qrc_watsyn.cpp.o -c /root/lmms/build/plugins/watsyn/qrc_watsyn.cpp

plugins/watsyn/CMakeFiles/watsyn.dir/qrc_watsyn.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/watsyn.dir/qrc_watsyn.cpp.i"
	cd /root/lmms/build/plugins/watsyn && /bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /root/lmms/build/plugins/watsyn/qrc_watsyn.cpp > CMakeFiles/watsyn.dir/qrc_watsyn.cpp.i

plugins/watsyn/CMakeFiles/watsyn.dir/qrc_watsyn.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/watsyn.dir/qrc_watsyn.cpp.s"
	cd /root/lmms/build/plugins/watsyn && /bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /root/lmms/build/plugins/watsyn/qrc_watsyn.cpp -o CMakeFiles/watsyn.dir/qrc_watsyn.cpp.s

# Object files for target watsyn
watsyn_OBJECTS = \
"CMakeFiles/watsyn.dir/Watsyn.cpp.o" \
"CMakeFiles/watsyn.dir/moc_Watsyn.cpp.o" \
"CMakeFiles/watsyn.dir/qrc_watsyn.cpp.o"

# External object files for target watsyn
watsyn_EXTERNAL_OBJECTS =

plugins/libwatsyn.so: plugins/watsyn/CMakeFiles/watsyn.dir/Watsyn.cpp.o
plugins/libwatsyn.so: plugins/watsyn/CMakeFiles/watsyn.dir/moc_Watsyn.cpp.o
plugins/libwatsyn.so: plugins/watsyn/CMakeFiles/watsyn.dir/qrc_watsyn.cpp.o
plugins/libwatsyn.so: plugins/watsyn/CMakeFiles/watsyn.dir/build.make
plugins/libwatsyn.so: /usr/lib/x86_64-linux-gnu/libsamplerate.so
plugins/libwatsyn.so: /usr/lib/x86_64-linux-gnu/libQt5Widgets.so.5.12.2
plugins/libwatsyn.so: /usr/lib/x86_64-linux-gnu/libQt5Xml.so.5.12.2
plugins/libwatsyn.so: /usr/lib/x86_64-linux-gnu/libQt5Gui.so.5.12.2
plugins/libwatsyn.so: /usr/lib/x86_64-linux-gnu/libQt5Core.so.5.12.2
plugins/libwatsyn.so: plugins/watsyn/CMakeFiles/watsyn.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/root/lmms/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Linking CXX shared module ../libwatsyn.so"
	cd /root/lmms/build/plugins/watsyn && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/watsyn.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
plugins/watsyn/CMakeFiles/watsyn.dir/build: plugins/libwatsyn.so

.PHONY : plugins/watsyn/CMakeFiles/watsyn.dir/build

plugins/watsyn/CMakeFiles/watsyn.dir/clean:
	cd /root/lmms/build/plugins/watsyn && $(CMAKE_COMMAND) -P CMakeFiles/watsyn.dir/cmake_clean.cmake
.PHONY : plugins/watsyn/CMakeFiles/watsyn.dir/clean

plugins/watsyn/CMakeFiles/watsyn.dir/depend: plugins/watsyn/qrc_watsyn.cpp
plugins/watsyn/CMakeFiles/watsyn.dir/depend: plugins/watsyn/moc_Watsyn.cpp
plugins/watsyn/CMakeFiles/watsyn.dir/depend: plugins/watsyn/watsyn.qrc
	cd /root/lmms/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /root/lmms /root/lmms/plugins/watsyn /root/lmms/build /root/lmms/build/plugins/watsyn /root/lmms/build/plugins/watsyn/CMakeFiles/watsyn.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : plugins/watsyn/CMakeFiles/watsyn.dir/depend

