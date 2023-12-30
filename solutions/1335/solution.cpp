
#include "solution.h"
#include <algorithm>
#include <numeric>
#include <malloc.h>
using namespace std;

namespace solution1335
{

int Solution::minDifficulty(vector<int>& jobDifficulty, int d)
{
    short  N = jobDifficulty.size();

    // Optimization:
    if (d > N) return -1;
    else if ( d == 1 ) return *max_element(jobDifficulty.begin(), jobDifficulty.end());
    else if ( d == N ) return accumulate(jobDifficulty.begin(), jobDifficulty.end(), 0);

    short* DB = (short *)calloc( N * d, sizeof( short ) );

    short TEMP = -1;
    short JMAX = -1;
    for (char dd = 0; dd < d; ++dd) {
        for (short ii=0; ii < N; ++ii) {
            if ( dd > ii ) DB[dd*N + ii] = -1;
            else if ( dd==0 ) DB[ii] = max( (ii ? DB[ii - 1] : 0) , jobDifficulty[ii]);
            else if ( dd==ii ) DB[dd*N + ii] = ( dd ? DB[(dd-1)*N + ii-1] + jobDifficulty[ii] : jobDifficulty[0] );
            else {
                JMAX = jobDifficulty[ii];
                DB[dd*N + ii] = DB[(dd-1)*N + ii-1] + JMAX;
                for ( short vv = ii-1; vv >= dd-1; --vv ) {
                    TEMP = DB[(dd-1)*N + vv-1] + max((short)jobDifficulty[vv], JMAX);
                    DB[dd*N + ii] = min(TEMP, DB[dd*N + ii]);
                }
            }
        }
    }

    int res = DB[N * d - 1];
    free(DB);
    return res;
}

}