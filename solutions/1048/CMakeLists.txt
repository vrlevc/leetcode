# SOLUTION LIBRARY
add_library(solution1048 solution.cpp)

# UNIT TESTS
enable_testing()

add_executable(
    test_1048
    test.cpp
)
target_link_libraries(
    test_1048
    GTest::gtest_main
    solution1048
)

include(GoogleTest)
gtest_discover_tests(test_1048)