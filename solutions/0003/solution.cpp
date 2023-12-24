
#include "solution.h"

using namespace std;

namespace solution0003
{

int Solution::lengthOfLongestSubstring(string s) {
    if (s.size()==0) return 0;
    char used[128] = {0};
    int f=0, b=0;
    int maxl = 0;
    used[s[0]] = 1;
    for (int i=1; i<s.size(); ++i) { 
        char c = s[i];
        if (used[c] == 0)
        {
            ++b;
            used[c] = 1;
        }
        else 
        {
            maxl = max(maxl, b - f + 1);
            while (s[f] != c) { used[s[f]]=0; ++f; }
            ++f;  
            ++b;  used[c]=1;            
        }
        
    }
    return max(maxl, b - f + 1);
}

}