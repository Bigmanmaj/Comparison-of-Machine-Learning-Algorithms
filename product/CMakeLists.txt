cmake_minimum_required(VERSION 3.16)
project(MLProject VERSION 1.0 LANGUAGES CXX)

# Require C++17
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Add source files
add_executable(main
    src/main.cpp
)

# Include header directory
target_include_directories(main PRIVATE include)

