
#include "solution.h"

using namespace std;

namespace solution0389
{

char Solution::findTheDifference(string s, string t) {
    int S = 0;
    for (short c=0; c<s.length(); ++c) 
        S += t[c] - s[c];
    return S+t[t.length()-1];
}

}