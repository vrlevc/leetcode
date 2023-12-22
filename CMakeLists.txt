cmake_minimum_required(VERSION 3.10)

# GoogleTest requires at least C++14
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# set the project name and version
# CMake defines Leetcode_VERSION_MAJOR and Leetcode_VERSION_MINOR behind the scenes.
project(Leetcode VERSION 1.0)

# SOLUTION 0001
add_subdirectory(solutions/0001)
add_subdirectory(solutions/1422)
add_subdirectory(solutions/1637)

# UNIT TESTING : GOOGLE TEST
include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/release-1.12.1.zip
)
FetchContent_MakeAvailable(googletest)

# MAKE UNIT TESTS VISIBLE FROM BUILD DIR
enable_testing()