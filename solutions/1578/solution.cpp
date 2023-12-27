
#include "solution.h"
#include <numeric>
using namespace std;

namespace solution1578
{

int Solution::minCost(string colors, vector<int>& neededTime)
{
    int cost = 0;
    int  s = neededTime.size();
    int  i = 0;
    int  m = 0;
    while (i<s) 
    {
        int j = i;
        char t = colors[i];
        while (j < s && colors[j]==t)
        {
            cost += neededTime[j];
            m = max(m, neededTime[j]);
            ++j;
        }
        cost -= m;

        i=j;
        m=0;
    }

    return cost;
}

}