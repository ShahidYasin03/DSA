#include <iostream>
#include <cstdint>

class Solution
{
public:
    int hammingWeight(uint32_t num)
    {
        int count = 0;
        for (int i = 31; i >= 0; --i)
        {
            if (((num >> i) & 1) != 0)
            {
                count++;
            }
        }
        return count;
    }
};

int main()
{
    Solution s;
    uint32_t tc1 = 11;          // 00000000000000000000000000001011 -> 3
    uint32_t tc2 = 0xFFFFFFFFu; // all 1s -> 32

    std::cout << s.hammingWeight(tc1) << '\n';
    std::cout << s.hammingWeight(tc2) << '\n';
    return 0;
}