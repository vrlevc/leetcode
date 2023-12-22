
#include <vector>

using namespace std;

namespace solution0023
{

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
    ListNode(std::initializer_list<double>&& il);

    bool operator==(const ListNode& other);
 };   

class Solution 
{
public:
    ListNode* mergeKLists(vector<ListNode*>& lists);

    ListNode* insert(ListNode* list, ListNode* node);
    ListNode* merge2Lists(ListNode* a, ListNode* b);
};


}