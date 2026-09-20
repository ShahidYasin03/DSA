#include <iostream>

class Solution
{
public:
    int maxBottlesDrunk(int numBottles, int numExchange)
    {
        int drunk = numBottles;
        int empty = drunk;

        while (empty >= numExchange)
        {
            drunk++;
            empty -= numExchange;
            empty++;
            numExchange++;
        }
        return drunk;
    }
};

int main()
{
    Solution sol;
    std::cout << sol.maxBottlesDrunk(13, 6) << std::endl; // Test case 1
    std::cout << sol.maxBottlesDrunk(10, 3) << std::endl; // Test case 2
    return 0;
}