cmake_minimum_required(VERSION 3.10)

# GoogleTest requires at least C++14
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# set the project name and version
# CMake defines Leetcode_VERSION_MAJOR and Leetcode_VERSION_MINOR behind the scenes.
project(Leetcode VERSION 1.0)

add_executable(Leetcode main.cpp)

# PRIVATE and PUBLIC items will populate the INCLUDE_DIRECTORIES property of <target>. 
# PUBLIC and INTERFACE items will populate the INTERFACE_INCLUDE_DIRECTORIES property of <target>.
target_include_directories(Leetcode PUBLIC
                           "${PROJECT_BINARY_DIR}"
                           "${PROJECT_SOURCE_DIR}/solutions"
                           )

configure_file(config/LeetcodeConfig.h.in LeetcodeConfig.h)

# SOLUTION 0001
add_subdirectory(solutions/0001)
target_link_libraries(Leetcode PUBLIC solution0001)

# UNIT TESTING : GOOGLE TEST
include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/release-1.12.1.zip
)
# For Windows: Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)
