
#include "solution.h"
#include <algorithm>
using namespace std;

namespace solution2251
{

vector<int> Solution::fullBloomFlowers(vector<vector<int>>& flowers, vector<int>& people) {
    vector<int> start, end;
    int fN = flowers.size();
    int pN = people.size();
    for (int t = 0; t<fN; ++t)
        start.push_back(flowers[t][0]), end.push_back(flowers[t][1]);
    sort(start.begin(), start.end());
    sort(end.begin(), end.end());
    
    for (int t=0; t<pN; ++t)
    {
        int started = upper_bound(start.begin(), start.end(), people[t]) - start.begin();
        int ended = lower_bound(end.begin(), end.end(), people[t]) - end.begin();
        people[t] = (started - ended);
    }
    return people;
}

}