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
CMAKE_SOURCE_DIR = /home/roho/workspace/c/modulo4/cmake/3

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/roho/workspace/c/modulo4/cmake/3

# Include any dependencies generated for this target.
include library/CMakeFiles/abc.dir/depend.make

# Include the progress variables for this target.
include library/CMakeFiles/abc.dir/progress.make

# Include the compile flags for this target's objects.
include library/CMakeFiles/abc.dir/flags.make

library/CMakeFiles/abc.dir/a.c.o: library/CMakeFiles/abc.dir/flags.make
library/CMakeFiles/abc.dir/a.c.o: library/a.c
	$(CMAKE_COMMAND) -E cmake_progress_report /home/roho/workspace/c/modulo4/cmake/3/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building C object library/CMakeFiles/abc.dir/a.c.o"
	cd /home/roho/workspace/c/modulo4/cmake/3/library && /usr/bin/gcc  $(C_DEFINES) $(C_FLAGS) -o CMakeFiles/abc.dir/a.c.o   -c /home/roho/workspace/c/modulo4/cmake/3/library/a.c

library/CMakeFiles/abc.dir/a.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/abc.dir/a.c.i"
	cd /home/roho/workspace/c/modulo4/cmake/3/library && /usr/bin/gcc  $(C_DEFINES) $(C_FLAGS) -E /home/roho/workspace/c/modulo4/cmake/3/library/a.c > CMakeFiles/abc.dir/a.c.i

library/CMakeFiles/abc.dir/a.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/abc.dir/a.c.s"
	cd /home/roho/workspace/c/modulo4/cmake/3/library && /usr/bin/gcc  $(C_DEFINES) $(C_FLAGS) -S /home/roho/workspace/c/modulo4/cmake/3/library/a.c -o CMakeFiles/abc.dir/a.c.s

library/CMakeFiles/abc.dir/a.c.o.requires:
.PHONY : library/CMakeFiles/abc.dir/a.c.o.requires

library/CMakeFiles/abc.dir/a.c.o.provides: library/CMakeFiles/abc.dir/a.c.o.requires
	$(MAKE) -f library/CMakeFiles/abc.dir/build.make library/CMakeFiles/abc.dir/a.c.o.provides.build
.PHONY : library/CMakeFiles/abc.dir/a.c.o.provides

library/CMakeFiles/abc.dir/a.c.o.provides.build: library/CMakeFiles/abc.dir/a.c.o

library/CMakeFiles/abc.dir/b.c.o: library/CMakeFiles/abc.dir/flags.make
library/CMakeFiles/abc.dir/b.c.o: library/b.c
	$(CMAKE_COMMAND) -E cmake_progress_report /home/roho/workspace/c/modulo4/cmake/3/CMakeFiles $(CMAKE_PROGRESS_2)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building C object library/CMakeFiles/abc.dir/b.c.o"
	cd /home/roho/workspace/c/modulo4/cmake/3/library && /usr/bin/gcc  $(C_DEFINES) $(C_FLAGS) -o CMakeFiles/abc.dir/b.c.o   -c /home/roho/workspace/c/modulo4/cmake/3/library/b.c

library/CMakeFiles/abc.dir/b.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/abc.dir/b.c.i"
	cd /home/roho/workspace/c/modulo4/cmake/3/library && /usr/bin/gcc  $(C_DEFINES) $(C_FLAGS) -E /home/roho/workspace/c/modulo4/cmake/3/library/b.c > CMakeFiles/abc.dir/b.c.i

library/CMakeFiles/abc.dir/b.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/abc.dir/b.c.s"
	cd /home/roho/workspace/c/modulo4/cmake/3/library && /usr/bin/gcc  $(C_DEFINES) $(C_FLAGS) -S /home/roho/workspace/c/modulo4/cmake/3/library/b.c -o CMakeFiles/abc.dir/b.c.s

library/CMakeFiles/abc.dir/b.c.o.requires:
.PHONY : library/CMakeFiles/abc.dir/b.c.o.requires

library/CMakeFiles/abc.dir/b.c.o.provides: library/CMakeFiles/abc.dir/b.c.o.requires
	$(MAKE) -f library/CMakeFiles/abc.dir/build.make library/CMakeFiles/abc.dir/b.c.o.provides.build
.PHONY : library/CMakeFiles/abc.dir/b.c.o.provides

library/CMakeFiles/abc.dir/b.c.o.provides.build: library/CMakeFiles/abc.dir/b.c.o

library/CMakeFiles/abc.dir/c.c.o: library/CMakeFiles/abc.dir/flags.make
library/CMakeFiles/abc.dir/c.c.o: library/c.c
	$(CMAKE_COMMAND) -E cmake_progress_report /home/roho/workspace/c/modulo4/cmake/3/CMakeFiles $(CMAKE_PROGRESS_3)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building C object library/CMakeFiles/abc.dir/c.c.o"
	cd /home/roho/workspace/c/modulo4/cmake/3/library && /usr/bin/gcc  $(C_DEFINES) $(C_FLAGS) -o CMakeFiles/abc.dir/c.c.o   -c /home/roho/workspace/c/modulo4/cmake/3/library/c.c

library/CMakeFiles/abc.dir/c.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/abc.dir/c.c.i"
	cd /home/roho/workspace/c/modulo4/cmake/3/library && /usr/bin/gcc  $(C_DEFINES) $(C_FLAGS) -E /home/roho/workspace/c/modulo4/cmake/3/library/c.c > CMakeFiles/abc.dir/c.c.i

library/CMakeFiles/abc.dir/c.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/abc.dir/c.c.s"
	cd /home/roho/workspace/c/modulo4/cmake/3/library && /usr/bin/gcc  $(C_DEFINES) $(C_FLAGS) -S /home/roho/workspace/c/modulo4/cmake/3/library/c.c -o CMakeFiles/abc.dir/c.c.s

library/CMakeFiles/abc.dir/c.c.o.requires:
.PHONY : library/CMakeFiles/abc.dir/c.c.o.requires

library/CMakeFiles/abc.dir/c.c.o.provides: library/CMakeFiles/abc.dir/c.c.o.requires
	$(MAKE) -f library/CMakeFiles/abc.dir/build.make library/CMakeFiles/abc.dir/c.c.o.provides.build
.PHONY : library/CMakeFiles/abc.dir/c.c.o.provides

library/CMakeFiles/abc.dir/c.c.o.provides.build: library/CMakeFiles/abc.dir/c.c.o

# Object files for target abc
abc_OBJECTS = \
"CMakeFiles/abc.dir/a.c.o" \
"CMakeFiles/abc.dir/b.c.o" \
"CMakeFiles/abc.dir/c.c.o"

# External object files for target abc
abc_EXTERNAL_OBJECTS =

library/libabc.so: library/CMakeFiles/abc.dir/a.c.o
library/libabc.so: library/CMakeFiles/abc.dir/b.c.o
library/libabc.so: library/CMakeFiles/abc.dir/c.c.o
library/libabc.so: library/CMakeFiles/abc.dir/build.make
library/libabc.so: library/CMakeFiles/abc.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking C shared library libabc.so"
	cd /home/roho/workspace/c/modulo4/cmake/3/library && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/abc.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
library/CMakeFiles/abc.dir/build: library/libabc.so
.PHONY : library/CMakeFiles/abc.dir/build

library/CMakeFiles/abc.dir/requires: library/CMakeFiles/abc.dir/a.c.o.requires
library/CMakeFiles/abc.dir/requires: library/CMakeFiles/abc.dir/b.c.o.requires
library/CMakeFiles/abc.dir/requires: library/CMakeFiles/abc.dir/c.c.o.requires
.PHONY : library/CMakeFiles/abc.dir/requires

library/CMakeFiles/abc.dir/clean:
	cd /home/roho/workspace/c/modulo4/cmake/3/library && $(CMAKE_COMMAND) -P CMakeFiles/abc.dir/cmake_clean.cmake
.PHONY : library/CMakeFiles/abc.dir/clean

library/CMakeFiles/abc.dir/depend:
	cd /home/roho/workspace/c/modulo4/cmake/3 && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/roho/workspace/c/modulo4/cmake/3 /home/roho/workspace/c/modulo4/cmake/3/library /home/roho/workspace/c/modulo4/cmake/3 /home/roho/workspace/c/modulo4/cmake/3/library /home/roho/workspace/c/modulo4/cmake/3/library/CMakeFiles/abc.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : library/CMakeFiles/abc.dir/depend
