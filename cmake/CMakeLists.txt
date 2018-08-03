cmake_minimum_required (VERSION 2.6)
project (first_try)
add_executable(first_try hello_world.cpp)

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
include_directories("${PROJECT_BINARY_DIR}")

# add the executable
add_executable(first_try hello_world.cpp)
