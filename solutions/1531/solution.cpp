
#include "solution.h"
#include <list>
#include <algorithm>
using namespace std;

namespace solution1531
{

int Solution::getLengthOfOptimalCompression(string s, int k)
{
    list<pair<char, int>> code;
    char c=static_cast<char>(s[0]), r = 1, n=1, N = s.length();
    for (; r<=N; ++r) {
        if (c!=s[r]){
            code.push_back({c,n});
            if (r==N) break;
            n=1;
            c=s[r];
        }else{ // update sequence
            ++n;
        }
    }
    
    n=1;
    while (k>0&&code.size()) {
        
        if (code.size() >= 3) {
            auto l = code.begin();
            auto c = l; ++c;
            auto r = c; ++r;
            while ( true ) {
                if ( c->second == n && l->first == r->first && n<=k ) {
                    l->second += r->second;
                    k -= n;
                    code.erase(r); code.erase(c);
                } else {
                    ++l; if (l==code.end()) break;
                }
                c=l; ++c; if (c==code.end()) break;
                r=c; ++r; if (r==code.end()) break;
            }
        }

        auto c = code.begin();
        while ( c!=code.end() ) {
            auto l = c; ++c;
            if ( l->second == n && n<=k ) { k-=n; code.erase(l); }
        }

        ++n;
        if (n>k) break;
    }

    while (k>0&&code.size()) {
        code.sort([](const auto& a, const auto& b)->bool{ 
            int ax=0, bx=0;
            if      (a.second > 99) ax = a.second - 99;
            else if (a.second >  9) ax = a.second - 9;
            else                    ax = a.second;
            if      (b.second > 99) bx = b.second - 99;
            else if (b.second >  9) bx = b.second - 9;
            else                    bx = b.second;
            return ax<bx;
        });
        auto& a = code.front();
        if      (a.second > 99) { if (k<a.second-99) break; k-=a.second-99; a.second=99; } 
        else if (a.second >  9) { if (k<a.second- 9) break; k-=a.second- 9; a.second= 9; }
        else                    { if (k<a.second)    break; k-=a.second;    code.pop_front(); }
    }

    N = 0;
    for (const auto& v: code) {
        ++N;
        if (v.second> 1) ++N;
        if (v.second> 9) ++N;
        if (v.second>99) ++N;
    }

    return N;
}

}
