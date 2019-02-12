# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.10

# Default target executed when no arguments are given to make.
default_target: all

.PHONY : default_target

# Allow only one "make -f Makefile2" at a time, but pass parallelism.
.NOTPARALLEL:


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
CMAKE_SOURCE_DIR = /mnt/c/Users/53181/Documents/vsCode/server

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /mnt/c/Users/53181/Documents/vsCode/server

#=============================================================================
# Targets provided globally by CMake.

# Special rule for the target rebuild_cache
rebuild_cache:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Running CMake to regenerate build system..."
	/usr/bin/cmake -H$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR)
.PHONY : rebuild_cache

# Special rule for the target rebuild_cache
rebuild_cache/fast: rebuild_cache

.PHONY : rebuild_cache/fast

# Special rule for the target edit_cache
edit_cache:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "No interactive CMake dialog available..."
	/usr/bin/cmake -E echo No\ interactive\ CMake\ dialog\ available.
.PHONY : edit_cache

# Special rule for the target edit_cache
edit_cache/fast: edit_cache

.PHONY : edit_cache/fast

# The main all target
all: cmake_check_build_system
	$(CMAKE_COMMAND) -E cmake_progress_start /mnt/c/Users/53181/Documents/vsCode/server/CMakeFiles /mnt/c/Users/53181/Documents/vsCode/server/CMakeFiles/progress.marks
	$(MAKE) -f CMakeFiles/Makefile2 all
	$(CMAKE_COMMAND) -E cmake_progress_start /mnt/c/Users/53181/Documents/vsCode/server/CMakeFiles 0
.PHONY : all

# The main clean target
clean:
	$(MAKE) -f CMakeFiles/Makefile2 clean
.PHONY : clean

# The main clean target
clean/fast: clean

.PHONY : clean/fast

# Prepare targets for installation.
preinstall: all
	$(MAKE) -f CMakeFiles/Makefile2 preinstall
.PHONY : preinstall

# Prepare targets for installation.
preinstall/fast:
	$(MAKE) -f CMakeFiles/Makefile2 preinstall
.PHONY : preinstall/fast

# clear depends
depend:
	$(CMAKE_COMMAND) -H$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR) --check-build-system CMakeFiles/Makefile.cmake 1
.PHONY : depend

#=============================================================================
# Target rules for targets named Demo1

# Build rule for target.
Demo1: cmake_check_build_system
	$(MAKE) -f CMakeFiles/Makefile2 Demo1
.PHONY : Demo1

# fast build rule for target.
Demo1/fast:
	$(MAKE) -f CMakeFiles/Demo1.dir/build.make CMakeFiles/Demo1.dir/build
.PHONY : Demo1/fast

epoll_demultiplexer.o: epoll_demultiplexer.cpp.o

.PHONY : epoll_demultiplexer.o

# target to build an object file
epoll_demultiplexer.cpp.o:
	$(MAKE) -f CMakeFiles/Demo1.dir/build.make CMakeFiles/Demo1.dir/epoll_demultiplexer.cpp.o
.PHONY : epoll_demultiplexer.cpp.o

epoll_demultiplexer.i: epoll_demultiplexer.cpp.i

.PHONY : epoll_demultiplexer.i

# target to preprocess a source file
epoll_demultiplexer.cpp.i:
	$(MAKE) -f CMakeFiles/Demo1.dir/build.make CMakeFiles/Demo1.dir/epoll_demultiplexer.cpp.i
.PHONY : epoll_demultiplexer.cpp.i

epoll_demultiplexer.s: epoll_demultiplexer.cpp.s

.PHONY : epoll_demultiplexer.s

# target to generate assembly for a file
epoll_demultiplexer.cpp.s:
	$(MAKE) -f CMakeFiles/Demo1.dir/build.make CMakeFiles/Demo1.dir/epoll_demultiplexer.cpp.s
.PHONY : epoll_demultiplexer.cpp.s

listen_handler.o: listen_handler.cpp.o

.PHONY : listen_handler.o

# target to build an object file
listen_handler.cpp.o:
	$(MAKE) -f CMakeFiles/Demo1.dir/build.make CMakeFiles/Demo1.dir/listen_handler.cpp.o
.PHONY : listen_handler.cpp.o

listen_handler.i: listen_handler.cpp.i

.PHONY : listen_handler.i

# target to preprocess a source file
listen_handler.cpp.i:
	$(MAKE) -f CMakeFiles/Demo1.dir/build.make CMakeFiles/Demo1.dir/listen_handler.cpp.i
.PHONY : listen_handler.cpp.i

listen_handler.s: listen_handler.cpp.s

.PHONY : listen_handler.s

# target to generate assembly for a file
listen_handler.cpp.s:
	$(MAKE) -f CMakeFiles/Demo1.dir/build.make CMakeFiles/Demo1.dir/listen_handler.cpp.s
.PHONY : listen_handler.cpp.s

reactor.o: reactor.cpp.o

.PHONY : reactor.o

# target to build an object file
reactor.cpp.o:
	$(MAKE) -f CMakeFiles/Demo1.dir/build.make CMakeFiles/Demo1.dir/reactor.cpp.o
.PHONY : reactor.cpp.o

reactor.i: reactor.cpp.i

.PHONY : reactor.i

# target to preprocess a source file
reactor.cpp.i:
	$(MAKE) -f CMakeFiles/Demo1.dir/build.make CMakeFiles/Demo1.dir/reactor.cpp.i
.PHONY : reactor.cpp.i

reactor.s: reactor.cpp.s

.PHONY : reactor.s

# target to generate assembly for a file
reactor.cpp.s:
	$(MAKE) -f CMakeFiles/Demo1.dir/build.make CMakeFiles/Demo1.dir/reactor.cpp.s
.PHONY : reactor.cpp.s

reactor_impl.o: reactor_impl.cpp.o

.PHONY : reactor_impl.o

# target to build an object file
reactor_impl.cpp.o:
	$(MAKE) -f CMakeFiles/Demo1.dir/build.make CMakeFiles/Demo1.dir/reactor_impl.cpp.o
.PHONY : reactor_impl.cpp.o

reactor_impl.i: reactor_impl.cpp.i

.PHONY : reactor_impl.i

# target to preprocess a source file
reactor_impl.cpp.i:
	$(MAKE) -f CMakeFiles/Demo1.dir/build.make CMakeFiles/Demo1.dir/reactor_impl.cpp.i
.PHONY : reactor_impl.cpp.i

reactor_impl.s: reactor_impl.cpp.s

.PHONY : reactor_impl.s

# target to generate assembly for a file
reactor_impl.cpp.s:
	$(MAKE) -f CMakeFiles/Demo1.dir/build.make CMakeFiles/Demo1.dir/reactor_impl.cpp.s
.PHONY : reactor_impl.cpp.s

server.o: server.cpp.o

.PHONY : server.o

# target to build an object file
server.cpp.o:
	$(MAKE) -f CMakeFiles/Demo1.dir/build.make CMakeFiles/Demo1.dir/server.cpp.o
.PHONY : server.cpp.o

server.i: server.cpp.i

.PHONY : server.i

# target to preprocess a source file
server.cpp.i:
	$(MAKE) -f CMakeFiles/Demo1.dir/build.make CMakeFiles/Demo1.dir/server.cpp.i
.PHONY : server.cpp.i

server.s: server.cpp.s

.PHONY : server.s

# target to generate assembly for a file
server.cpp.s:
	$(MAKE) -f CMakeFiles/Demo1.dir/build.make CMakeFiles/Demo1.dir/server.cpp.s
.PHONY : server.cpp.s

socket_handler.o: socket_handler.cpp.o

.PHONY : socket_handler.o

# target to build an object file
socket_handler.cpp.o:
	$(MAKE) -f CMakeFiles/Demo1.dir/build.make CMakeFiles/Demo1.dir/socket_handler.cpp.o
.PHONY : socket_handler.cpp.o

socket_handler.i: socket_handler.cpp.i

.PHONY : socket_handler.i

# target to preprocess a source file
socket_handler.cpp.i:
	$(MAKE) -f CMakeFiles/Demo1.dir/build.make CMakeFiles/Demo1.dir/socket_handler.cpp.i
.PHONY : socket_handler.cpp.i

socket_handler.s: socket_handler.cpp.s

.PHONY : socket_handler.s

# target to generate assembly for a file
socket_handler.cpp.s:
	$(MAKE) -f CMakeFiles/Demo1.dir/build.make CMakeFiles/Demo1.dir/socket_handler.cpp.s
.PHONY : socket_handler.cpp.s

# Help Target
help:
	@echo "The following are some of the valid targets for this Makefile:"
	@echo "... all (the default if no target is provided)"
	@echo "... clean"
	@echo "... depend"
	@echo "... rebuild_cache"
	@echo "... Demo1"
	@echo "... edit_cache"
	@echo "... epoll_demultiplexer.o"
	@echo "... epoll_demultiplexer.i"
	@echo "... epoll_demultiplexer.s"
	@echo "... listen_handler.o"
	@echo "... listen_handler.i"
	@echo "... listen_handler.s"
	@echo "... reactor.o"
	@echo "... reactor.i"
	@echo "... reactor.s"
	@echo "... reactor_impl.o"
	@echo "... reactor_impl.i"
	@echo "... reactor_impl.s"
	@echo "... server.o"
	@echo "... server.i"
	@echo "... server.s"
	@echo "... socket_handler.o"
	@echo "... socket_handler.i"
	@echo "... socket_handler.s"
.PHONY : help



#=============================================================================
# Special targets to cleanup operation of make.

# Special rule to run CMake to check the build system integrity.
# No rule that depends on this can have commands that come from listfiles
# because they might be regenerated.
cmake_check_build_system:
	$(CMAKE_COMMAND) -H$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR) --check-build-system CMakeFiles/Makefile.cmake 0
.PHONY : cmake_check_build_system
