#include "solution.h"
#include <vector>
#include <gtest/gtest.h>

using namespace std;
using namespace solution0023;

TEST(solution0023Test, TestEmptyListNodeCreation) {
    ListNode listEmpty = {};
    EXPECT_EQ(listEmpty.next, nullptr);
    EXPECT_EQ(listEmpty.val, 0);
}

TEST(solution0023Test, TestListNodeCreation) {
    ListNode list = {1, 4, 5};
    ListNode* pList = &list;
    EXPECT_NE(pList->next, nullptr);
    EXPECT_EQ(pList->val, 1);
    pList = pList->next;
    EXPECT_NE(pList->next, nullptr);
    EXPECT_EQ(pList->val, 4);
    pList = pList->next;
    EXPECT_EQ(pList->next, nullptr);
    EXPECT_EQ(pList->val, 5);
}

TEST(solution0023Test, TestListNodeCompareEQ) {
    ListNode listA = {1, 4, 5};
    ListNode listB = {1, 4, 5};
    EXPECT_TRUE(listA == listB);
}

TEST(solution0023Test, TestEmptyListNodeCompareEQ) {
    ListNode listA = {};
    ListNode listB = {};
    EXPECT_TRUE(listA == listB);
}

TEST(solution0023Test, TestListNodeCompareNEValue) {
    ListNode listA = {1, 4, 5};
    ListNode listB = {1, 3, 5};
    EXPECT_FALSE(listA == listB);
}

TEST(solution0023Test, TestListNodeCompareNESize) {
    ListNode listA = {1, 4, 5};
    ListNode listB = {1, 4};
    EXPECT_FALSE(listA == listB);
}

TEST(solution0023Test, TestListNodeCompareNENull) {
    ListNode listA = {1, 4, 5};
    ListNode listB = {};
    EXPECT_FALSE(listA == listB);
}

TEST(solution0023Test, TestEmptyListNodeCompareNE) {
    ListNode listA = {};
    ListNode listB = {1, 4, 5};
    EXPECT_FALSE(listA == listB);
}

TEST(solution0023Test, TestInsertValueIntoListNode) {
    ListNode list = {1, 4, 5};
    ListNode node(10);
    ListNode expected = {1, 10, 4, 5};
    Solution s;
    s.insert(&list, &node);
    EXPECT_TRUE(list == expected);
}

TEST(solution0023Test, TestListNodeMergeListNode001) {
    ListNode listA = {2, 3};
    ListNode listB = {1, 4, 5};
    ListNode listExpecte = {1, 2, 3, 4, 5};
    Solution s;
    ListNode* merged = s.merge2Lists(&listA, &listB);
    EXPECT_TRUE(*merged == listExpecte);
}

TEST(solution0023Test, TestListNodeMergeListNode002) {
    ListNode listA = {2, 6};
    ListNode listB = {1, 4, 5};
    ListNode listExpecte = {1, 2, 4, 5, 6};
    Solution s;
    ListNode* merged = s.merge2Lists(&listA, &listB);
    EXPECT_TRUE(*merged == listExpecte);
}

TEST(solution0023Test, TestListNodeMergeListNode003) {
    ListNode listA = {1, 3, 4};
    ListNode listB = {1, 4, 5};
    ListNode listExpecte = {1, 1, 3, 4, 4, 5};
    Solution s;
    ListNode* merged = s.merge2Lists(&listA, &listB);
    EXPECT_TRUE(*merged == listExpecte);
}

TEST(solution0023Test, Test001) {
    vector<ListNode*> lists = {};
    Solution s;
    ListNode* merged = s.mergeKLists(lists);
    EXPECT_EQ(merged, nullptr);
} 

TEST(solution0023Test, Test002) {
    ListNode listEmpty = {};
    vector<ListNode*> lists = {&listEmpty};
    Solution s;
    ListNode* merged = s.mergeKLists(lists);
    ASSERT_NE(merged, nullptr);
    EXPECT_EQ(merged->next, nullptr);
    EXPECT_EQ(merged->val, 0);
} 

TEST(solution0023Test, Test003) {
    ListNode list01 = {1, 4, 5};
    ListNode list02 = {1, 3, 4};
    ListNode list03 = {2, 6};
    vector<ListNode*> lists = {&list01, &list02, &list03};
    ListNode listExpecte = {1, 1, 2, 3, 4, 4, 5, 6};
    Solution s;
    ListNode* merged = s.mergeKLists(lists);
    ASSERT_NE(merged, nullptr);
    EXPECT_TRUE(*merged == listExpecte);
} 

TEST(solution0023Test, Test004) {
    ListNode l01 = {-8,-6,-4,-4,-1};
    ListNode l02 = {-9,-6,-6,-4,-3,-2,0,0,2};
    ListNode l03 = {-9};
    ListNode l04 = {-9,-5};
    ListNode l05 = {-8,-7,-4,-4};
    ListNode l06 = {-8,-8,-7,-6,-6,-6,-2,1,2};
    ListNode l07 = {-7,1,1};
    ListNode l08 = {-4,-2};
    vector<ListNode*> lists = {&l01, &l02, &l03, &l04, &l05, &l06, &l07, &l08};
    ListNode listExpecte = {-9,-9,-9,-8,-8,-8,-8,-7,-7,-7,-6,-6,-6,-6,-6,-6,-5,-4,-4,-4,-4,-4,-4,-3,-2,-2,-2,-1,0,0,1,1,1,2,2};
    Solution s;
    ListNode* merged = s.mergeKLists(lists);
    ASSERT_NE(merged, nullptr);
    EXPECT_TRUE(*merged == listExpecte);
} 