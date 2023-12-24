# SOLUTION LIBRARY
add_library(solution0119 solution.cpp)

# UNIT TESTS
enable_testing()

add_executable(
    test_0119
    test.cpp
)
target_link_libraries(
    test_0119
    GTest::gtest_main
    gmock
    solution0119
)

include(GoogleTest)
gtest_discover_tests(test_0119)