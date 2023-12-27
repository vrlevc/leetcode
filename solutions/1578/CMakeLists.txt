# SOLUTION LIBRARY
add_library(solution1578 solution.cpp)

# UNIT TESTS
enable_testing()

add_executable(
    test_1578
    test.cpp
)
target_link_libraries(
    test_1578
    GTest::gtest_main
    solution1578
)

include(GoogleTest)
gtest_discover_tests(test_1578)