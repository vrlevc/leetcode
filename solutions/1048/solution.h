#include <vector>
#include <string>

using namespace std;

namespace solution1048
{
    
class Solution 
{
    short ai,bj,i,j;
    char aN,bN,max_s,d,fails;
public:
    bool is_predecessor(const string& a, const string& b);
    int longestStrChain(vector<string>& words);
};


}