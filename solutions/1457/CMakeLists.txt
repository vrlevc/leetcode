# SOLUTION LIBRARY
add_library(solution1457 solution.cpp)

# UNIT TESTS
enable_testing()

add_executable(
    test_1457
    test.cpp
)
target_link_libraries(
    test_1457
    GTest::gtest_main
    solution1457
)

include(GoogleTest)
gtest_discover_tests(test_1457)