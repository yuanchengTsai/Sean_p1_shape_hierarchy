# Copyright (c) 2025 Yuan-Cheng "Sean" Tsai. All rights reserved

# Require CMAKE 3.12 or higher
cmake_minimum_required(VERSION 3.12)

# If you created new header files
set(HEADER_FILES
    shapes.h
)

# If you create new cpp files
set(SOURCE_FILES
    shapes.cpp
)

# DON'T CHANGE THIS!!!
add_library(src ${SOURCE_FILES} ${HEADER_FILES})

