#include <iostream>
#include <cstdlib>
#include <string>

#include "LeetcodeConfig.h"

#include "0001/solution.h"

int main(int argc, char* argv[])
{
    if (argc < 2) {
        // report version
        std::cout << argv[0] << " Version " << Leetcode_VERSION_MAJOR << "." << Leetcode_VERSION_MINOR << std::endl;
        std::cout << "Usage: " << argv[0] << " number" << std::endl;
        return 1;
    }

    const double inputValue = std::stod(argv[1]);
    std::cout << "Number is : " << inputValue << std::endl;

    solution0001::Solution s;
    auto res = s.twoSum({3,2,4}, 6);

    return 0;
}