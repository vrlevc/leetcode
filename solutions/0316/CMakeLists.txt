# SOLUTION LIBRARY
add_library(solution0316 solution.cpp)

# UNIT TESTS
enable_testing()

add_executable(
    test_0316
    test.cpp
)
target_link_libraries(
    test_0316
    GTest::gtest_main
    gmock
    solution0316
)

include(GoogleTest)
gtest_discover_tests(test_0316)