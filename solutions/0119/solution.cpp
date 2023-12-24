
#include "solution.h"

using namespace std;

namespace solution0119
{

vector<int> Solution::getRow(int rowIndex)
{
        vector<int> row(rowIndex+1, 1); 
        
        int m = 0;
        for (int i=1; i<=rowIndex; ++i)
        {
            m = i / 2;
            for (int j=0; j<m; ++j)
            {
                row[m-j] += row[m-j-1];
                row[m+j+(i%2?1:0)] = row[m-j];
            }
            
        }

        return move(row);  
}

}