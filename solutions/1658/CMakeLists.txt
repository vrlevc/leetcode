# SOLUTION LIBRARY
add_library(solution1658 solution.cpp)

# UNIT TESTS
enable_testing()

add_executable(
    test_1658
    test.cpp
)
target_link_libraries(
    test_1658
    GTest::gtest_main
    solution1658
)

include(GoogleTest)
gtest_discover_tests(test_1658)