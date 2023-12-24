
#include "solution.h"

using namespace std;

namespace solution1095
{

int Solution::findInMountainArray(int target, MountainArray &mountainArr) {
    // search top
    int a = 0, b = mountainArr.length() - 1; 
    int M = (a+b)/2;
    int prev, curr, next;
    do {
        prev = mountainArr.get(M-1);
        curr = mountainArr.get(M+0);
        next = mountainArr.get(M+1);
        // Top
        if (prev<curr && curr>next) break;
        // Up
        if (prev<curr && curr<next) a=M;
        // Down
        if (prev>curr && curr>next) b=M;
        M = (b+a)/2;
    } while (true);

    if (curr==target) return M;

    int m;

    // try up
    int left = -1;
    a = 0; b = M-1; m = (a+b)/2; 
    while (a < b) {
        curr = mountainArr.get(m);
        if (  curr == target ) { left = m; break; }
        if ( target < curr   ) { b = m-1; }
        if (   curr < target ) { a = m+1; }
        m = (a+b)/2;
    };
    if ( a==b && mountainArr.get(a) == target ) left = a;

    // try down
    int right = -1;
    a = M+1; b = mountainArr.length() - 1; m = (a+b)/2; 
    while (a < b) {
        curr = mountainArr.get(m);
        if (  curr == target ) { right = m; break; }
        if ( target < curr   ) { a = m+1; }
        if (   curr < target ) { b = m-1; }
        m = (a+b)/2;
    };
    if ( a==b && mountainArr.get(a) == target ) right = a;

    //cout << "left:" << left << " right:" << right << "\n";
    return (left!=-1?left:right);
}
    
}