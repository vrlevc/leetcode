#include "solution.h"

#include <gtest/gtest.h>

using namespace std;
using namespace solution1095;

TEST(solution1095Test, Test001) {
    MountainArray ma( {1,2,3,4,5,3,1} );
    Solution s;
    EXPECT_EQ(2, s.findInMountainArray(3, ma));
} 

TEST(solution1095Test, Test002) {
    MountainArray ma( {0,1,2,4,2,1} );
    Solution s;
    EXPECT_EQ(-1, s.findInMountainArray(3, ma));
} 