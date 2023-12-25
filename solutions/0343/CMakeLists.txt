# SOLUTION LIBRARY
add_library(solution0343 solution.cpp)

# UNIT TESTS
enable_testing()

add_executable(
    test_0343
    test.cpp
)
target_link_libraries(
    test_0343
    GTest::gtest_main
    solution0343
)

include(GoogleTest)
gtest_discover_tests(test_0343)