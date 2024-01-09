# SOLUTION LIBRARY
add_library(solution0872 solution.cpp)

# UNIT TESTS
enable_testing()

add_executable(
    test_0872
    test.cpp
)
target_link_libraries(
    test_0872
    GTest::gtest_main
    solution0872
)

include(GoogleTest)
gtest_discover_tests(test_0872)