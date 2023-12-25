
#include "solution.h"
#include <algorithm>
using namespace std;

namespace solution0034
{

vector<int> Solution::searchRange(vector<int>& nums, int target) {
    if (nums.size() == 0) return {-1, -1};

    auto it = find(nums.begin(), nums.end(), target);
    
    int b = -1, e = -1;
    if (it != nums.end()) {
        b = e = it - nums.begin();
        while (0<=b-1 && nums[b-1] == target) --b;
        while (e+1<nums.size() && nums[e+1] == target) ++e;
    }

    return {b, e};
}

}