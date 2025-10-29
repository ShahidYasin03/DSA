#include <iostream>
#include <cmath>

class Solution
{
public:
    int smallestNumber(int n)
    {
        int i = 1;
        int val = 1;
        while (val < n)
        {
            val = pow(2, i) - 1;
            i++;
        }
        return val;
    }
};

int main()
{
    Solution s;
    std::cout << s.smallestNumber(7) << std::endl; // Expected: 7
    std::cout << s.smallestNumber(9) << std::endl; // Expected: 15
    return 0;
}