#include <iostream>

class Solution
{
public:
    int brokenCalc(int startValue, int target)
    {
        int count = 0;
        while (target > startValue)
        {
            if (target % 2 != 0)
            {
                target++;
            }
            else
            {
                target /= 2;
            }
            count++;
        }
        return (count + (startValue - target));
    }
};

int main()
{
    Solution solution;

    // Test case 1
    int startValue1 = 2, target1 = 3;
    std::cout << "Test case 1: startValue = " << startValue1
              << ", target = " << target1
              << ", result = " << solution.brokenCalc(startValue1, target1) << std::endl;

    // Test case 2
    int startValue2 = 5, target2 = 8;
    std::cout << "Test case 2: startValue = " << startValue2
              << ", target = " << target2
              << ", result = " << solution.brokenCalc(startValue2, target2) << std::endl;

    return 0;
}