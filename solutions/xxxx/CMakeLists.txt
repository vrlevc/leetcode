# SOLUTION LIBRARY
add_library(solutionxxxx solution.cpp)

# UNIT TESTS
enable_testing()

add_executable(
    test_xxxx
    test.cpp
)
target_link_libraries(
    test_xxxx
    GTest::gtest_main
    solutionxxxx
)

include(GoogleTest)
gtest_discover_tests(test_xxxx)