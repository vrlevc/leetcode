# SOLUTION LIBRARY
add_library(solution2251 solution.cpp)

# UNIT TESTS
enable_testing()

add_executable(
    test_2251
    test.cpp
)
target_link_libraries(
    test_2251
    GTest::gtest_main
    gmock
    solution2251
)

include(GoogleTest)
gtest_discover_tests(test_2251)