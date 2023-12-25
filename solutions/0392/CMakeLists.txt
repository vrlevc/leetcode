# SOLUTION LIBRARY
add_library(solution0392 solution.cpp)

# UNIT TESTS
enable_testing()

add_executable(
    test_0392
    test.cpp
)
target_link_libraries(
    test_0392
    GTest::gtest_main
    solution0392
)

include(GoogleTest)
gtest_discover_tests(test_0392)