
#include "solution.h"

namespace solution1422
{

int Solution::maxScore(string s)
{
    // Base : 
    // index == 0  
    // left  = 1 if s[index]=='0' else 0  
    // right = number of '1' in s[index+1:]
    // sum   = left + right

    int index = 0;
    int left = ( 1 ? s[index]=='0' : 0 );
    int right = 0;
    for (int i=index+1; i<s.length(); ++i) 
        right += ( 1 ? s[i]=='1' : 0 );
    int sum = left + right;

    // Iteration:
    // index  < N; ++index
    // left  += 1 if s[index]=='0' 
    // right -= 1 if s[index]=='1'
    // sum    = max(sum, left + right)
    while (++index < s.length()-1)
    {
        left  += ( 1 ? s[index]=='0' : 0 );
        right -= ( 1 ? s[index]=='1' : 0 );
        sum    = max(sum, left + right);
    }

    // Result : sum
    return sum;
}

}