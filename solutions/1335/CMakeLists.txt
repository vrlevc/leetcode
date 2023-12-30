# SOLUTION LIBRARY
add_library(solution1335 solution.cpp)

# UNIT TESTS
enable_testing()

add_executable(
    test_1335
    test.cpp
)
target_link_libraries(
    test_1335
    GTest::gtest_main
    solution1335
)

include(GoogleTest)
gtest_discover_tests(test_1335)