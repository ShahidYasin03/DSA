#include <iostream>

class Solution
{
public:
    int numberOfSteps(int num)
    {
        int count = 0;
        while (num)
        {
            if (num % 2 == 0)
            {
                num /= 2;
            }
            else
            {
                num--;
            }
            count++;
        }
        return count;
    }
};

int main()
{
    Solution solution;
    std::cout << solution.numberOfSteps(14) << std::endl; // Should output 6
    std::cout << solution.numberOfSteps(8) << std::endl;  // Should output 4
    return 0;
}