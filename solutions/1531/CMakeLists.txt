# SOLUTION LIBRARY
add_library(solution1531 solution.cpp)

# UNIT TESTS
enable_testing()

add_executable(
    test_1531
    test.cpp
)
target_link_libraries(
    test_1531
    GTest::gtest_main
    solution1531
)

include(GoogleTest)
gtest_discover_tests(test_1531)