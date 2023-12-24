
#include "solution.h"
#include <algorithm>
using namespace std;

namespace solution1048
{

bool Solution::is_predecessor(const string& a, const string& b) {
    fails = 0;
    ai = 0, bj = 0;
    while (ai<aN && bj<bN && fails<2)
        if ( a[ai] == b[bj] ) { ++ai; ++bj; }
        else { ++fails; ++bj; }
    return ai==aN && (fails==1||bj<bN);
}

int Solution::longestStrChain(vector<string>& words) {

    // Prepare : sort and remove duplicates:
    sort(words.begin(), words.end(), [](const string& a, const string& b) { return a.length() < b.length(); });

    // Base:
    vector<char> S(words.size(), 1);

    // Topological order:
    for (i=0; i<words.size(); ++i) 
    {
        // Subproblem:
        max_s = 0;
        for (j=i-1; j>=0; --j) {
            // Optimization:
            bN = words[i].length(); aN = words[j].length();
            d = bN-aN;
            if ( d > 1 ) break;
            else if(d == 1 )
                // Relation
                if (is_predecessor(words[j], words[i])) 
                    max_s = max( max_s, S[j] );
        }
        S[i] += max_s;
    }    

    // Origin problem:
    return *max_element(S.begin(), S.end());
}

}