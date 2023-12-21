#include "solution.h"
#include <vector>
#include <gtest/gtest.h>

using namespace std;
using namespace solution0001;

// Demonstrate some basic assertions.
TEST(solution0001Test, Test001) {
    // Expectations:
    vector<int> exp = {1, 2};
    // Execute solution
    Solution s;
    vector<int> res = s.twoSum({3,2,4}, 6);
    // Validate result
    ASSERT_EQ(res.size(), exp.size()) << "Vectors x and y are of unequal length";
    for (int i = 0; i < res.size(); ++i) {
        EXPECT_EQ(res[i], exp[i]) << "Vectors x and y differ at index " << i;
    }
} 