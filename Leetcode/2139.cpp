#include <iostream>

class Solution
{
public:
    int minMoves(int target, int maxDoubles)
    {
        int count = 0;
        if (maxDoubles < 1)
            return target - 1;
        while (target >= 1 && maxDoubles > 0)
        {
            if (target % 2 == 0)
            {
                target /= 2;
                count++;
                maxDoubles--;
            }
            else
            {
                target--;
                count++;
            }
        }
        return (count + target - 1);
    }
};

int main()
{
    Solution solution;

    // Test case 1
    int target1 = 5;
    int maxDoubles1 = 0;
    std::cout << "Test case 1: target = " << target1 << ", maxDoubles = " << maxDoubles1 << std::endl;
    std::cout << "Result: " << solution.minMoves(target1, maxDoubles1) << std::endl;

    // Test case 2
    int target2 = 19;
    int maxDoubles2 = 2;
    std::cout << "Test case 2: target = " << target2 << ", maxDoubles = " << maxDoubles2 << std::endl;
    std::cout << "Result: " << solution.minMoves(target2, maxDoubles2) << std::endl;

    return 0;
}