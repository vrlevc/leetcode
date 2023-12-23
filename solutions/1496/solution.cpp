
#include "solution.h"
#include <set>

using namespace std;

namespace solution1496
{

bool Solution::isPathCrossing(string path) {
    using Point = pair<short,short>;
    set<Point> points;
    Point last{0,0};
    points.insert( last );
    for (const auto& d: path) {
        Point p {last};
        p.first  += ( d=='E' ? +1 : ( d=='W' ? -1 : 0 ) );
        p.second += ( d=='N' ? +1 : ( d=='S' ? -1 : 0 ) );
        if (points.find(p) != points.end()) return true;
        last = p;
        points.emplace( std::move(p) );
    }
    return false;
}

}