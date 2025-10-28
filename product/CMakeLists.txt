cmake_minimum_required(VERSION 3.14)
project(MyProject LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Enable testing
enable_testing()
include(CTest)

Include(FetchContent)

FetchContent_Declare(
  Catch2
  GIT_REPOSITORY https://github.com/catchorg/Catch2.git
  GIT_TAG        v3.8.1 # or a later release
)

FetchContent_MakeAvailable(Catch2)

add_executable(tests product_tests/test_main.cpp)
add_executable(main src/main.cpp)
target_include_directories(main PRIVATE headers)
target_include_directories(tests PRIVATE headers)
target_link_libraries(tests PRIVATE Catch2::Catch2WithMain)