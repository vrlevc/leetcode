# SOLUTION LIBRARY
add_library(solution1637 solution.cpp)

# UNIT TESTS
enable_testing()

add_executable(
    test_1637
    test.cpp
)
target_link_libraries(
    test_1637
    GTest::gtest_main
    solution1637
)

include(GoogleTest)
gtest_discover_tests(test_1637)