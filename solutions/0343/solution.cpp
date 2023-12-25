
#include "solution.h"
#include <random>
using namespace std;

namespace solution0343
{

int Solution::integerBreak(int n) {
    constexpr const char N = 59;
    int S[N] = {0};
    S[0] = S[1] = S[2] = 1; S[3] = 2;
    for (int i=2; i<=n; ++i)
        for (int k=2; k<i-1; ++k)
            S[i] = max( S[i], k * max(S[i-k], i-k) );
    return S[n];
}

}