# Copyrigth (c) 2025 Yuan-Cheng Tsai. All rights reserved

# Require CMAKE version 3.12 or above
cmake_minimum_required(VERSION 3.12)

# Project name
project(Shape_Hierarchy VERSION 1.0)

# Build for C++17
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Any source files in this directory
set(SOURCE_FILES main.cpp)

# Where any include files are
include_directories(src)

# Subdirectories. to build
add_subdirectory(src)

# Name of executable
add_executable(main ${SOURCE_FILES})

# Link main vs the source library
target_link_libraries(main src)
