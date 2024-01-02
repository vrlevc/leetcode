
#include "solution.h"
#include <list>
#include <algorithm>
using namespace std;

namespace solution1531
{

int Solution::getLengthOfOptimalCompression(string s, int k)
{
    list<int> code;
    char c=static_cast<char>(s[0]), r = 1, n=1, N = s.length();
    for (; r<=N; ++r) {
        if (c!=s[r]){
            code.push_back(n);
            if (r==N) break;
            n=1;
            c=s[r];
        }else{ // update sequence
            ++n;
        }
    }
    
    code.sort();
    
    while (k>0&&code.size()) {
        r = code.front();
        if (code.front() <= k) { code.pop_front(); k -= r; }
        else { code.front() -= k; k=0; }
    }

    N = 0;
    for (const auto& v: code) {
        ++N;
        if (v> 1) ++N;
        if (v> 9) ++N;
        if (v>99) ++N;
    }

    return N;
}

}