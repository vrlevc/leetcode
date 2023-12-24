#include <vector>
#include <assert.h>
using namespace std;

namespace solution1095
{

class MountainArray {
    vector<int> _d;
    int N;
    public:
        MountainArray(vector<int>&& data) : _d(data) { N=length(); }
        int get(int index) { assert(0 <= index && index < N); return _d[index]; }
        int length() { return _d.size(); }
 };
    
class Solution 
{
public:
    int findInMountainArray(int target, MountainArray& mountainArr);
};


}