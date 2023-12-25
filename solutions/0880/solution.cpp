
#include "solution.h"

using namespace std;

namespace solution0880
{

string Solution::decodeAtIndex(string S, int K) {
    long N = 0;
    short i;
    for (i = 0; N < K; ++i)
        N = ('0'<=S[i]&&S[i]<='9') ? N * (S[i] - '0') : N + 1;
    while (i--)
        if ('0'<=S[i]&&S[i]<='9')
            N /= S[i] - '0', K %= N;
        else if (K % N-- == 0) {
            S = S[i];
            return S;
        }
    return S;
}

}