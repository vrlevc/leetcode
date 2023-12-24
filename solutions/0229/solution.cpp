
#include "solution.h"

using namespace std;

namespace solution0229
{

vector<int> Solution::majorityElement(vector<int>& nums) {
    unsigned short N = nums.size();
    if (N == 0) return {};
    if (N == 1) return { nums[0] };

    unsigned short count1=0, count2=0; 
    int candidate1=0, candidate2=1;
    for (int i=0; i<N; ++i){
        int n = nums[i];
        if (n == candidate1)
            ++count1;
        else if (n == candidate2)
            ++count2;
        else if (count1 == 0) {
            candidate1=n; count1=1; }
        else if (count2 == 0) {
            candidate2=n; count2=1; }
        else {
            --count1; --count2;
        }
    }

    count1 = count2 = 0;
    for (int i=0; i<N; ++i){
        int n = nums[i];
        if      (n==candidate1) ++count1;
        else if (n==candidate2) ++count2;
    }
    
    char nn = 0;
    if (count1 > N / 3) { nums[0]=candidate1; ++nn; }
    if (count2 > N / 3) { nums[nn]=candidate2; ++nn; }
    nums.erase(nums.begin()+nn, nums.end());
    return nums;
}

}