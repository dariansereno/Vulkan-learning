# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.27

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

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /opt/homebrew/Cellar/cmake/3.27.7/bin/cmake

# The command to remove a file.
RM = /opt/homebrew/Cellar/cmake/3.27.7/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/dariansereno/TRAVAIL/42/scop

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/dariansereno/TRAVAIL/42/scop/build

# Utility rule file for Shaders.

# Include any custom commands dependencies for this target.
include CMakeFiles/Shaders.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/Shaders.dir/progress.make

CMakeFiles/Shaders: /Users/dariansereno/TRAVAIL/42/scop/shaders/simple_shader.frag.spv
CMakeFiles/Shaders: /Users/dariansereno/TRAVAIL/42/scop/shaders/simple_shader.vert.spv

/Users/dariansereno/TRAVAIL/42/scop/shaders/simple_shader.frag.spv: /Users/dariansereno/TRAVAIL/42/scop/shaders/simple_shader.frag
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=/Users/dariansereno/TRAVAIL/42/scop/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating /Users/dariansereno/TRAVAIL/42/scop/shaders/simple_shader.frag.spv"
	/usr/local/bin/glslangValidator -V /Users/dariansereno/TRAVAIL/42/scop/shaders/simple_shader.frag -o /Users/dariansereno/TRAVAIL/42/scop/shaders/simple_shader.frag.spv

/Users/dariansereno/TRAVAIL/42/scop/shaders/simple_shader.vert.spv: /Users/dariansereno/TRAVAIL/42/scop/shaders/simple_shader.vert
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=/Users/dariansereno/TRAVAIL/42/scop/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Generating /Users/dariansereno/TRAVAIL/42/scop/shaders/simple_shader.vert.spv"
	/usr/local/bin/glslangValidator -V /Users/dariansereno/TRAVAIL/42/scop/shaders/simple_shader.vert -o /Users/dariansereno/TRAVAIL/42/scop/shaders/simple_shader.vert.spv

Shaders: CMakeFiles/Shaders
Shaders: /Users/dariansereno/TRAVAIL/42/scop/shaders/simple_shader.frag.spv
Shaders: /Users/dariansereno/TRAVAIL/42/scop/shaders/simple_shader.vert.spv
Shaders: CMakeFiles/Shaders.dir/build.make
.PHONY : Shaders

# Rule to build all files generated by this target.
CMakeFiles/Shaders.dir/build: Shaders
.PHONY : CMakeFiles/Shaders.dir/build

CMakeFiles/Shaders.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Shaders.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Shaders.dir/clean

CMakeFiles/Shaders.dir/depend:
	cd /Users/dariansereno/TRAVAIL/42/scop/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/dariansereno/TRAVAIL/42/scop /Users/dariansereno/TRAVAIL/42/scop /Users/dariansereno/TRAVAIL/42/scop/build /Users/dariansereno/TRAVAIL/42/scop/build /Users/dariansereno/TRAVAIL/42/scop/build/CMakeFiles/Shaders.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/Shaders.dir/depend
