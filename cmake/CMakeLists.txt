cmake_minimum_required (VERSION 2.6)
project (first_try)

# the version number
set (first_try_VERSION_MAJOR 1)
set (first_try_VERSION_MINOR 0)

# configure a header file to pass some of the cmake settings to the source
# code
configure_file (
	"${PROJECT_SOURCE_DIR}/hello_world_config.h.in"
	"${PROJECT_BINARY_DIR}/hello_world_config.h"
)

# add the binary tree to the search path for include files so that we will
# find hello_world_config.h
include_directories ("${PROJECT_BINARY_DIR}")

# add in libraries
include_directories ("${PROJECT_SOURCE_DIR}/print_hello_world")
add_subdirectory (print_hello_world)

# add the executable
add_executable (first_try hello_world.cpp)
target_link_libraries (first_try print_hello_world)
