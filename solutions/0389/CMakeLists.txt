# SOLUTION LIBRARY
add_library(solution0389 solution.cpp)

# UNIT TESTS
enable_testing()

add_executable(
    test_0389
    test.cpp
)
target_link_libraries(
    test_0389
    GTest::gtest_main
    solution0389
)

include(GoogleTest)
gtest_discover_tests(test_0389)