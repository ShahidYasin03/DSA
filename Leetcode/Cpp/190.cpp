#include <iostream>
#include <cassert>

class Solution
{
public:
    int reverseBits(int x)
    {
        int y = 0;
        for (int i = 0; i < 32; i++)
        {
            int bit = x & 1;
            x >>= 1;
            y = (y << 1) | bit;
        }
        return y;
    }
};

int main()
{
    Solution sol;

    // Test case 1: reverseBits(1) should return 2147483648 (10000000000000000000000000000000 in binary)
    assert(sol.reverseBits(1) == 2147483648);
    std::cout << "Test case 1 passed" << std::endl;

    // Test case 2: reverseBits(43261596) should return 964176192
    assert(sol.reverseBits(43261596) == 964176192);
    std::cout << "Test case 2 passed" << std::endl;

    return 0;
}