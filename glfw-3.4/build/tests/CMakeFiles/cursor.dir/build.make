# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.31

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\CMake\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\CMake\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = D:\PROYECTOS_GABO\redes-hashing\glfw-3.4

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = D:\PROYECTOS_GABO\redes-hashing\glfw-3.4\build

# Include any dependencies generated for this target.
include tests/CMakeFiles/cursor.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include tests/CMakeFiles/cursor.dir/compiler_depend.make

# Include the progress variables for this target.
include tests/CMakeFiles/cursor.dir/progress.make

# Include the compile flags for this target's objects.
include tests/CMakeFiles/cursor.dir/flags.make

tests/CMakeFiles/cursor.dir/codegen:
.PHONY : tests/CMakeFiles/cursor.dir/codegen

tests/CMakeFiles/cursor.dir/cursor.c.obj: tests/CMakeFiles/cursor.dir/flags.make
tests/CMakeFiles/cursor.dir/cursor.c.obj: tests/CMakeFiles/cursor.dir/includes_C.rsp
tests/CMakeFiles/cursor.dir/cursor.c.obj: D:/PROYECTOS_GABO/redes-hashing/glfw-3.4/tests/cursor.c
tests/CMakeFiles/cursor.dir/cursor.c.obj: tests/CMakeFiles/cursor.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=D:\PROYECTOS_GABO\redes-hashing\glfw-3.4\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object tests/CMakeFiles/cursor.dir/cursor.c.obj"
	cd /d D:\PROYECTOS_GABO\redes-hashing\glfw-3.4\build\tests && D:\TDMGCC\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT tests/CMakeFiles/cursor.dir/cursor.c.obj -MF CMakeFiles\cursor.dir\cursor.c.obj.d -o CMakeFiles\cursor.dir\cursor.c.obj -c D:\PROYECTOS_GABO\redes-hashing\glfw-3.4\tests\cursor.c

tests/CMakeFiles/cursor.dir/cursor.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing C source to CMakeFiles/cursor.dir/cursor.c.i"
	cd /d D:\PROYECTOS_GABO\redes-hashing\glfw-3.4\build\tests && D:\TDMGCC\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E D:\PROYECTOS_GABO\redes-hashing\glfw-3.4\tests\cursor.c > CMakeFiles\cursor.dir\cursor.c.i

tests/CMakeFiles/cursor.dir/cursor.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling C source to assembly CMakeFiles/cursor.dir/cursor.c.s"
	cd /d D:\PROYECTOS_GABO\redes-hashing\glfw-3.4\build\tests && D:\TDMGCC\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S D:\PROYECTOS_GABO\redes-hashing\glfw-3.4\tests\cursor.c -o CMakeFiles\cursor.dir\cursor.c.s

# Object files for target cursor
cursor_OBJECTS = \
"CMakeFiles/cursor.dir/cursor.c.obj"

# External object files for target cursor
cursor_EXTERNAL_OBJECTS =

tests/cursor.exe: tests/CMakeFiles/cursor.dir/cursor.c.obj
tests/cursor.exe: tests/CMakeFiles/cursor.dir/build.make
tests/cursor.exe: src/libglfw3.a
tests/cursor.exe: tests/CMakeFiles/cursor.dir/linkLibs.rsp
tests/cursor.exe: tests/CMakeFiles/cursor.dir/objects1.rsp
tests/cursor.exe: tests/CMakeFiles/cursor.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=D:\PROYECTOS_GABO\redes-hashing\glfw-3.4\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable cursor.exe"
	cd /d D:\PROYECTOS_GABO\redes-hashing\glfw-3.4\build\tests && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\cursor.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
tests/CMakeFiles/cursor.dir/build: tests/cursor.exe
.PHONY : tests/CMakeFiles/cursor.dir/build

tests/CMakeFiles/cursor.dir/clean:
	cd /d D:\PROYECTOS_GABO\redes-hashing\glfw-3.4\build\tests && $(CMAKE_COMMAND) -P CMakeFiles\cursor.dir\cmake_clean.cmake
.PHONY : tests/CMakeFiles/cursor.dir/clean

tests/CMakeFiles/cursor.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\PROYECTOS_GABO\redes-hashing\glfw-3.4 D:\PROYECTOS_GABO\redes-hashing\glfw-3.4\tests D:\PROYECTOS_GABO\redes-hashing\glfw-3.4\build D:\PROYECTOS_GABO\redes-hashing\glfw-3.4\build\tests D:\PROYECTOS_GABO\redes-hashing\glfw-3.4\build\tests\CMakeFiles\cursor.dir\DependInfo.cmake "--color=$(COLOR)"
.PHONY : tests/CMakeFiles/cursor.dir/depend

