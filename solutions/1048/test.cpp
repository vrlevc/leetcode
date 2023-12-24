#include "solution.h"

#include <gtest/gtest.h>

using namespace std;
using namespace solution1048;

TEST(solution1048Test, Test001) {
    Solution s;
    vector<string> words {"a","b","ba","bca","bda","bdca"};
    EXPECT_EQ(4, s.longestStrChain( words ));
} 

TEST(solution1048Test, Test002) {
    Solution s;
    vector<string> words {"xbc","pcxbcf","xb","cxbc","pcxbc"};
    EXPECT_EQ(5, s.longestStrChain( words ));
} 

TEST(solution1048Test, Test003) {
    Solution s;
    vector<string> words {"abcd","dbqca"};
    EXPECT_EQ(1, s.longestStrChain( words ));
} 