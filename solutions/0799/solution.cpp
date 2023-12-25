
#include "solution.h"
#include <memory>
#include <memory.h>
using namespace std;

namespace solution0799
{

double Solution::champagneTower(int poured, int query_row, int query_glass) {
    double* tower = static_cast<double*>( calloc( (2 * query_row + 2), sizeof(double) ) );
    
    tower[0] = static_cast<double>(poured);
    double* row_top = tower;
    double* row_bottom = tower + query_row + 1;

    for (int row=0; row<query_row; ++row) {
        for (int glass=0; glass<=row; ++glass) {
            double excess = (row_top[glass] - 1.0) / 2.0;
            if (excess > 0.0) {
                row_bottom[glass] += excess;
                row_bottom[glass+1] += excess;
            }
        }
        swap(row_top, row_bottom);
        memset(row_bottom, 0, (query_row+1)*sizeof(double));
    }

    double res = min(1.0, row_top[query_glass]);
    free(tower);
    return res;
}

}