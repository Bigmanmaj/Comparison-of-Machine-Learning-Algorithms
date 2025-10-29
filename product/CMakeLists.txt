cmake_minimum_required(VERSION 3.14)
project(MyProject LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Enable testing
enable_testing()

Include(FetchContent)

FetchContent_Declare(
  Catch2
  GIT_REPOSITORY https://github.com/catchorg/Catch2.git
  GIT_TAG        v3.8.1 # or a later release
)

FetchContent_MakeAvailable(Catch2)

# Create a library with your logic (no main function)
add_library(myproject_lib src/main.cpp)
target_include_directories(myproject_lib PUBLIC headers)

# Main application - just calls the library
add_executable(main.app src/main_runner.cpp)
target_link_libraries(main.app PRIVATE myproject_lib)

# Test executable - links against the library
add_executable(tests.app product_tests/test_main.cpp)
target_link_libraries(tests.app PRIVATE myproject_lib Catch2::Catch2WithMain)


include(CTest)
list(APPEND CMAKE_MODULE_PATH ${catch2_SOURCE_DIR}/extras)
include(Catch)
catch_discover_tests(tests.app)