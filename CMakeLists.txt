cmake_minimum_required(VERSION 3.10)

# specify the C++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

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
