# SOLUTION LIBRARY
add_library(solution0034 solution.cpp)

# UNIT TESTS
enable_testing()

add_executable(
    test_0034
    test.cpp
)
target_link_libraries(
    test_0034
    GTest::gtest_main
    gmock
    solution0034
)

include(GoogleTest)
gtest_discover_tests(test_0034)