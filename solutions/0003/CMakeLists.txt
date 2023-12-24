# SOLUTION LIBRARY
add_library(solution0003 solution.cpp)

# UNIT TESTS
enable_testing()

add_executable(
    test_0003
    test.cpp
)
target_link_libraries(
    test_0003
    GTest::gtest_main
    solution0003
)

include(GoogleTest)
gtest_discover_tests(test_0003)