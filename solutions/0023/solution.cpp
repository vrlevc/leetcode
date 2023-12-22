
#include "solution.h"

namespace solution0023
{

ListNode::ListNode(std::initializer_list<double>&& il)
{
    val = 0;
    next = nullptr;
    
    if (il.size()) {
        val = *il.begin();
        ListNode* node = this;
        for(auto i = il.begin()+1; i!=il.end(); ++i) {
            node->next = new ListNode(*i);
            node = node->next;
        }
    }
}

bool ListNode::operator==(const ListNode& other)
{
    if (this != &other) {
        for (const ListNode *i=this, *j=&other; i&&j; i=i->next, j=j->next) {
            if (i->val != j->val) return false;
            if ((i->next && !j->next) || (!i->next && j->next)) return false;
        }
    }
    return true;
}

ListNode* Solution::mergeKLists(vector<ListNode*>& lists)
{
    ListNode* merged = (lists.size() ? lists[0] : nullptr);
    if (lists.size() > 1)
        for (auto it=lists.begin()+1; it!=lists.end(); ++it)
            merged = merge2Lists(merged, *it);
    return merged;
}

ListNode* Solution::insert(ListNode* list, ListNode* node)
{
    node->next = list->next;
    list->next = node;
    return list;
}

ListNode* Solution::merge2Lists(ListNode* a, ListNode* b)
{
    if (!a) return b;
    if (!b) return a;

    ListNode* dst = ( a->val <= b->val ? a : b );
    ListNode* src = ( (void*)a == (void*)dst ? b : a );

    ListNode* medged = dst;

    ListNode* node = nullptr;
    while (src)
    {
        if (src->val == dst->val)
        {
            node = src; src = src->next;
            insert(dst, node);
            continue;
        }
        if (dst->val < src->val)
        {
            if (!dst->next) { dst->next = src;  break; }
            while (dst->next && dst->next->val < src->val) { dst = dst->next; }
            while (src && dst->next && dst->next->val >= src->val) {
                node = src; src = src->next;
                insert(dst, node);
                dst = dst->next;
            }
        }
    }    

    return medged;
}

}