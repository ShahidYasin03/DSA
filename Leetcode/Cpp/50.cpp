#include <iostream>
using namespace std;

class Solution {
    public:
        double pi(double x, int n) {
            if (n == 0) return 1;
            double half = pi(x, n / 2);
            if (n % 2 == 0)
                return half * half;
            else
                return half * half * x;
        }
    
        double myPow(double x, int n) {
            if (n < 0) {
                x = 1 / x;
                return pi(x, -(n + 1)) * x;
            }
            return pi(x, n);
        }
    };
    int main() {
        Solution solution;

        // Test case 1
        double result1 = solution.myPow(2.0, 10);
        std::cout << "2.0^10 = " << result1 << std::endl;

        // Test case 2
        double result2 = solution.myPow(2.1, 3);
        std::cout << "2.1^3 = " << result2 << std::endl;

        // Test case 3
        double result3 = solution.myPow(2.0, -2);
        std::cout << "2.0^-2 = " << result3 << std::endl;

        return 0;
    }