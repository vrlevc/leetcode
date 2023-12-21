
#include "solution.h"
#include <algorithm>

namespace solution1637
{

int Solution::maxWidthOfVerticalArea(vector<vector<int>>&& points)
{
    sort(points.begin(), points.end(), [](vector<int>& a, vector<int>& b) { return a[0] < b[0]; });
    int a = points[0][0];
    int d = 0;
    for (int i=1; i<points.size(); ++i) 
    {
        d = ( points[i][0] - a > d ? points[i][0] - a : d );
        a = points[i][0];
    }
    return d;
}

}