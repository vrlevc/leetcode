
#include "solution.h"

using namespace std;

namespace solution1658
{

int Solution::minOperations(vector<int>& nums, int x)
{
    int N = nums.size();
    int i = -1, j = N;
    int Si = 0, Sj = 0;
    int Xi = 0, Xj = N+1;
    bool success = false;

    // Base
    for (int k=0; k<N; ++k) {
        if ( Si+nums[k] <=x ) { Si+=nums[k]; i=k; }
        else break;
    }

    if (i==N-1&&Si<x) 
        return -1;

    do
    {
        // Save min result:
        if ( Si+Sj == x ) { 
            if ( i+1+N-j < Xj+Xi ) { Xi=i+1; Xj=N-j; success=true; }   
        }

        // Move j till Si+Sj>x
        do {
            Sj+=nums[--j];
        } while ( Si + Sj < x );

        // Adjust i
        while ( Si + Sj > x ) { 
            if (i>=0) { Si-=nums[i--]; }
            else break;
        }
    }while (i>=0);

    if ( Si+Sj == x ) { 
        if ( i+1+N-j < Xj+Xi ) { Xi=i+1; Xj=N-j; success=true; }   
    }
    
    return (success?Xj+Xi:-1);
}

}