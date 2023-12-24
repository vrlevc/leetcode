# SOLUTION LIBRARY
add_library(solution1095 solution.cpp)

# UNIT TESTS
enable_testing()

add_executable(
    test_1095
    test.cpp
)
target_link_libraries(
    test_1095
    GTest::gtest_main
    solution1095
)

include(GoogleTest)
gtest_discover_tests(test_1095)