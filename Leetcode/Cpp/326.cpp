#include <iostream>

class Solution {
public:
    bool isPowerOfThree(int n) {
        if (n <= 0) return false;
        while(n % 3 == 0)
        {
            n /= 3;
        }
        return n == true;
    }
};

int main() {
    Solution sol;
    int test1 = 27;
    int test2 = 10;
    std::cout << std::boolalpha;
    std::cout << "isPowerOfThree(" << test1 << ") = " << sol.isPowerOfThree(test1) << std::endl;
    std::cout << "isPowerOfThree(" << test2 << ") = " << sol.isPowerOfThree(test2) << std::endl;
    return 0;
}