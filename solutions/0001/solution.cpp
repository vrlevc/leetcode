
#include "solution.h"
#include <unordered_map>

using namespace std;

namespace solution0001
{

vector<int> Solution::twoSum(vector<int>&& nums, int target) {
        
    unordered_map<int, int> numMap;
    int n = nums.size();

    for (int i = 0; i < n; i++) {
        int complement = target - nums[i];
        if (numMap.count(complement)) {
            return {numMap[complement], i};
        }
        numMap[nums[i]] = i;
    }

    return {}; // No solution found
}

}