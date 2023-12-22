# SOLUTION LIBRARY
add_library(solution0023 solution.cpp)

# UNIT TESTS
enable_testing()

add_executable(
    test_0023
    test.cpp
)
target_link_libraries(
    test_0023
    GTest::gtest_main
    solution0023
)

include(GoogleTest)
gtest_discover_tests(test_0023)