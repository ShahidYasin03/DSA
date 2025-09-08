#include <iostream>

class Solution
{
public:
    int sum(int num1, int num2)
    {
        return num1 + num2;
    }
};

int main()
{
    Solution sol;
    std::cout << sol.sum(1, 2) << std::endl;
    std::cout << sol.sum(-5, 10) << std::endl;
    return 0;
}