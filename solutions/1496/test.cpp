#include "solution.h"
#include <gtest/gtest.h>

using namespace std;
using namespace solution1496;

TEST(solution1496Test, Test001) {
    Solution s;
    EXPECT_FALSE( s.isPathCrossing("NES") );
}

TEST(solution1496Test, Test002) {
    Solution s;
    EXPECT_TRUE( s.isPathCrossing("NESWW") );
} 

TEST(solution1496Test, Test003) {
    Solution s;
    EXPECT_FALSE( s.isPathCrossing("SS") );
} 