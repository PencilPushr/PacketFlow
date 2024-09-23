# Set which version of cmake we need, will throw an error if this check fails.
cmake_minimum_required(VERSION 3.16)

project(PacketFlow)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

set(PROJECT_VERSION_MAJOR 1)
set(PROJECT_VERSION_MINOR 0)
set(PROJECT_VERSION_PATCH 0)

set(PROJECT_VERSION "${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}.${PROJECT_VERSION_PATCH}")

include_directories( "Source" )

file (GLOB SOURCE_FILES CONFIGURE_DEPENDS
		"*.cpp"
		"*.h"
			"Source*.cpp"
			"Source*.h"
)

#this is a change
# Add source to this project's library.
add_executable(${PROJECT_NAME} ${SOURCE_FILES})