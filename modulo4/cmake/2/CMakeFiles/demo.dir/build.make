# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 2.8

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canoncical targets will work.
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

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/roho/workspace/c/modulo4/cmake/2

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/roho/workspace/c/modulo4/cmake/2

# Include any dependencies generated for this target.
include CMakeFiles/demo.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/demo.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/demo.dir/flags.make

CMakeFiles/demo.dir/demo.c.o: CMakeFiles/demo.dir/flags.make
CMakeFiles/demo.dir/demo.c.o: demo.c
	$(CMAKE_COMMAND) -E cmake_progress_report /home/roho/workspace/c/modulo4/cmake/2/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building C object CMakeFiles/demo.dir/demo.c.o"
	/usr/bin/gcc  $(C_DEFINES) $(C_FLAGS) -o CMakeFiles/demo.dir/demo.c.o   -c /home/roho/workspace/c/modulo4/cmake/2/demo.c

CMakeFiles/demo.dir/demo.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/demo.dir/demo.c.i"
	/usr/bin/gcc  $(C_DEFINES) $(C_FLAGS) -E /home/roho/workspace/c/modulo4/cmake/2/demo.c > CMakeFiles/demo.dir/demo.c.i

CMakeFiles/demo.dir/demo.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/demo.dir/demo.c.s"
	/usr/bin/gcc  $(C_DEFINES) $(C_FLAGS) -S /home/roho/workspace/c/modulo4/cmake/2/demo.c -o CMakeFiles/demo.dir/demo.c.s

CMakeFiles/demo.dir/demo.c.o.requires:
.PHONY : CMakeFiles/demo.dir/demo.c.o.requires

CMakeFiles/demo.dir/demo.c.o.provides: CMakeFiles/demo.dir/demo.c.o.requires
	$(MAKE) -f CMakeFiles/demo.dir/build.make CMakeFiles/demo.dir/demo.c.o.provides.build
.PHONY : CMakeFiles/demo.dir/demo.c.o.provides

CMakeFiles/demo.dir/demo.c.o.provides.build: CMakeFiles/demo.dir/demo.c.o

CMakeFiles/demo.dir/a.c.o: CMakeFiles/demo.dir/flags.make
CMakeFiles/demo.dir/a.c.o: a.c
	$(CMAKE_COMMAND) -E cmake_progress_report /home/roho/workspace/c/modulo4/cmake/2/CMakeFiles $(CMAKE_PROGRESS_2)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building C object CMakeFiles/demo.dir/a.c.o"
	/usr/bin/gcc  $(C_DEFINES) $(C_FLAGS) -o CMakeFiles/demo.dir/a.c.o   -c /home/roho/workspace/c/modulo4/cmake/2/a.c

CMakeFiles/demo.dir/a.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/demo.dir/a.c.i"
	/usr/bin/gcc  $(C_DEFINES) $(C_FLAGS) -E /home/roho/workspace/c/modulo4/cmake/2/a.c > CMakeFiles/demo.dir/a.c.i

CMakeFiles/demo.dir/a.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/demo.dir/a.c.s"
	/usr/bin/gcc  $(C_DEFINES) $(C_FLAGS) -S /home/roho/workspace/c/modulo4/cmake/2/a.c -o CMakeFiles/demo.dir/a.c.s

CMakeFiles/demo.dir/a.c.o.requires:
.PHONY : CMakeFiles/demo.dir/a.c.o.requires

CMakeFiles/demo.dir/a.c.o.provides: CMakeFiles/demo.dir/a.c.o.requires
	$(MAKE) -f CMakeFiles/demo.dir/build.make CMakeFiles/demo.dir/a.c.o.provides.build
.PHONY : CMakeFiles/demo.dir/a.c.o.provides

CMakeFiles/demo.dir/a.c.o.provides.build: CMakeFiles/demo.dir/a.c.o

CMakeFiles/demo.dir/b.c.o: CMakeFiles/demo.dir/flags.make
CMakeFiles/demo.dir/b.c.o: b.c
	$(CMAKE_COMMAND) -E cmake_progress_report /home/roho/workspace/c/modulo4/cmake/2/CMakeFiles $(CMAKE_PROGRESS_3)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building C object CMakeFiles/demo.dir/b.c.o"
	/usr/bin/gcc  $(C_DEFINES) $(C_FLAGS) -o CMakeFiles/demo.dir/b.c.o   -c /home/roho/workspace/c/modulo4/cmake/2/b.c

CMakeFiles/demo.dir/b.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/demo.dir/b.c.i"
	/usr/bin/gcc  $(C_DEFINES) $(C_FLAGS) -E /home/roho/workspace/c/modulo4/cmake/2/b.c > CMakeFiles/demo.dir/b.c.i

CMakeFiles/demo.dir/b.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/demo.dir/b.c.s"
	/usr/bin/gcc  $(C_DEFINES) $(C_FLAGS) -S /home/roho/workspace/c/modulo4/cmake/2/b.c -o CMakeFiles/demo.dir/b.c.s

CMakeFiles/demo.dir/b.c.o.requires:
.PHONY : CMakeFiles/demo.dir/b.c.o.requires

CMakeFiles/demo.dir/b.c.o.provides: CMakeFiles/demo.dir/b.c.o.requires
	$(MAKE) -f CMakeFiles/demo.dir/build.make CMakeFiles/demo.dir/b.c.o.provides.build
.PHONY : CMakeFiles/demo.dir/b.c.o.provides

CMakeFiles/demo.dir/b.c.o.provides.build: CMakeFiles/demo.dir/b.c.o

CMakeFiles/demo.dir/c.c.o: CMakeFiles/demo.dir/flags.make
CMakeFiles/demo.dir/c.c.o: c.c
	$(CMAKE_COMMAND) -E cmake_progress_report /home/roho/workspace/c/modulo4/cmake/2/CMakeFiles $(CMAKE_PROGRESS_4)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building C object CMakeFiles/demo.dir/c.c.o"
	/usr/bin/gcc  $(C_DEFINES) $(C_FLAGS) -o CMakeFiles/demo.dir/c.c.o   -c /home/roho/workspace/c/modulo4/cmake/2/c.c

CMakeFiles/demo.dir/c.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/demo.dir/c.c.i"
	/usr/bin/gcc  $(C_DEFINES) $(C_FLAGS) -E /home/roho/workspace/c/modulo4/cmake/2/c.c > CMakeFiles/demo.dir/c.c.i

CMakeFiles/demo.dir/c.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/demo.dir/c.c.s"
	/usr/bin/gcc  $(C_DEFINES) $(C_FLAGS) -S /home/roho/workspace/c/modulo4/cmake/2/c.c -o CMakeFiles/demo.dir/c.c.s

CMakeFiles/demo.dir/c.c.o.requires:
.PHONY : CMakeFiles/demo.dir/c.c.o.requires

CMakeFiles/demo.dir/c.c.o.provides: CMakeFiles/demo.dir/c.c.o.requires
	$(MAKE) -f CMakeFiles/demo.dir/build.make CMakeFiles/demo.dir/c.c.o.provides.build
.PHONY : CMakeFiles/demo.dir/c.c.o.provides

CMakeFiles/demo.dir/c.c.o.provides.build: CMakeFiles/demo.dir/c.c.o

# Object files for target demo
demo_OBJECTS = \
"CMakeFiles/demo.dir/demo.c.o" \
"CMakeFiles/demo.dir/a.c.o" \
"CMakeFiles/demo.dir/b.c.o" \
"CMakeFiles/demo.dir/c.c.o"

# External object files for target demo
demo_EXTERNAL_OBJECTS =

demo: CMakeFiles/demo.dir/demo.c.o
demo: CMakeFiles/demo.dir/a.c.o
demo: CMakeFiles/demo.dir/b.c.o
demo: CMakeFiles/demo.dir/c.c.o
demo: CMakeFiles/demo.dir/build.make
demo: CMakeFiles/demo.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking C executable demo"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/demo.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/demo.dir/build: demo
.PHONY : CMakeFiles/demo.dir/build

CMakeFiles/demo.dir/requires: CMakeFiles/demo.dir/demo.c.o.requires
CMakeFiles/demo.dir/requires: CMakeFiles/demo.dir/a.c.o.requires
CMakeFiles/demo.dir/requires: CMakeFiles/demo.dir/b.c.o.requires
CMakeFiles/demo.dir/requires: CMakeFiles/demo.dir/c.c.o.requires
.PHONY : CMakeFiles/demo.dir/requires

CMakeFiles/demo.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/demo.dir/cmake_clean.cmake
.PHONY : CMakeFiles/demo.dir/clean

CMakeFiles/demo.dir/depend:
	cd /home/roho/workspace/c/modulo4/cmake/2 && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/roho/workspace/c/modulo4/cmake/2 /home/roho/workspace/c/modulo4/cmake/2 /home/roho/workspace/c/modulo4/cmake/2 /home/roho/workspace/c/modulo4/cmake/2 /home/roho/workspace/c/modulo4/cmake/2/CMakeFiles/demo.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/demo.dir/depend

