# SOLUTION LIBRARY
add_library(solution1422 solution.cpp)

# UNIT TESTS
enable_testing()

add_executable(
    test_1422
    test.cpp
)
target_link_libraries(
    test_1422
    GTest::gtest_main
    solution1422
)

include(GoogleTest)
gtest_discover_tests(test_1422)