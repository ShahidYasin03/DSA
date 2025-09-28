class Solution
{
public:
    bool isUgly(int n)
    {
        if (n <= 0)
            return false;

        while (n % 2 == 0)
            n /= 2;
        while (n % 3 == 0)
            n /= 3;
        while (n % 5 == 0)
            n /= 5;

        return n == 1;
    }
};

#include <iostream>

int main()
{
    Solution sol;
    std::cout << std::boolalpha << sol.isUgly(6) << std::endl;  // true
    std::cout << std::boolalpha << sol.isUgly(14) << std::endl; // false
    return 0;
}