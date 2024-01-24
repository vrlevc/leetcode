cmake_minimum_required(VERSION 3.10)

# GoogleTest requires at least C++14
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# set the project name and version
# CMake defines Leetcode_VERSION_MAJOR and Leetcode_VERSION_MINOR behind the scenes.
project(Leetcode VERSION 1.0)

# SOLUTION 0001
add_subdirectory(solutions/xxxx)
add_subdirectory(solutions/0001)
add_subdirectory(solutions/0003)
add_subdirectory(solutions/0023)
add_subdirectory(solutions/0034)
add_subdirectory(solutions/0119)
add_subdirectory(solutions/0229)
add_subdirectory(solutions/0316)
add_subdirectory(solutions/0343)
add_subdirectory(solutions/0389)
add_subdirectory(solutions/0392)
add_subdirectory(solutions/0799)
add_subdirectory(solutions/0872)
add_subdirectory(solutions/0880)
add_subdirectory(solutions/1048)
add_subdirectory(solutions/1095)
add_subdirectory(solutions/1335)
add_subdirectory(solutions/1422)
add_subdirectory(solutions/1496)
add_subdirectory(solutions/1457)
add_subdirectory(solutions/1531)
add_subdirectory(solutions/1578)
add_subdirectory(solutions/1637)
add_subdirectory(solutions/1658)
add_subdirectory(solutions/2251)

# UNIT TESTING : GOOGLE TEST
include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/release-1.12.1.zip
)
FetchContent_MakeAvailable(googletest)

# MAKE UNIT TESTS VISIBLE FROM BUILD DIR
enable_testing()