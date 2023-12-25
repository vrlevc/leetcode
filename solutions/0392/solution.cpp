
#include "solution.h"

using namespace std;

namespace solution0392
{

bool Solution::isSubsequence(string s, string t) {
    int i = 0, j = 0;
    while(i < s.length() && j < t.length()){
        if(s[i] == t[j]) i++;
        j++;
    }
    return i == s.length(); 
}

}