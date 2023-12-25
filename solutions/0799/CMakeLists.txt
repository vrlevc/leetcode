# SOLUTION LIBRARY
add_library(solution0799 solution.cpp)

# UNIT TESTS
enable_testing()

add_executable(
    test_0799
    test.cpp
)
target_link_libraries(
    test_0799
    GTest::gtest_main
    solution0799
)

include(GoogleTest)
gtest_discover_tests(test_0799)