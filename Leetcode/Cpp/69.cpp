#include <iostream>
using namespace std;

// class Solution {
// public:
//     int mySqrt(int x) {
//         if (x == 0) return 0;
//         long long i = 0;
//         long long ans = 0;
//         while (ans <= x) {
//             ans = i * i;
//             i++;
//         }
//         return i - 2;
//     }
// };

class Solution
{
public:
    int mySqrt(int x)
    {
        if (x < 2)
            return x;

        int left = 1, right = x / 2, ans = 0;
        while (left <= right)
        {
            long long mid = left + (right - left) / 2;
            long long square = mid * mid;

            if (square == x)
            {
                return mid;
            }
            else if (square < x)
            {
                ans = mid;
                left = mid + 1;
            }
            else
            {
                right = mid - 1;
            }
        }
        return ans;
    }
};

int main()
{
    Solution sol;

    int test1 = 4;
    int result1 = sol.mySqrt(test1);
    cout << "Square root of " << test1 << " is: " << result1 << endl;

    int test2 = 10;
    int result2 = sol.mySqrt(test2);
    cout << "Square root of " << test2 << " is: " << result2 << endl;

    return 0;
}
