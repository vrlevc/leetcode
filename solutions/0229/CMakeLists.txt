# SOLUTION LIBRARY
add_library(solution0229 solution.cpp)

# UNIT TESTS
enable_testing()

add_executable(
    test_0229
    test.cpp
)
target_link_libraries(
    test_0229
    GTest::gtest_main
    gmock
    solution0229
)

include(GoogleTest)
gtest_discover_tests(test_0229)