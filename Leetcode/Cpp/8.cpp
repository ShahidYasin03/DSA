#include <iostream>
#include <string>
using namespace std;

class Solution
{
public:
    int myAtoi(string s)
    {
        int sign = 1;
        int i = 0;
        long ans = 0;

        while (i < s.length() && s[i] == ' ')
        {
            i++;
        }

        if (i < s.length() && (s[i] == '-' || s[i] == '+'))
        {
            if (s[i] == '-')
                sign = -1;
            i++;
        }

        while (i < s.length() && isdigit(s[i]))
        {
            int n = s[i] - '0';

            if (ans > (LONG_MAX - n) / 10)
            {
                return (sign == 1) ? INT_MAX : INT_MIN;
            }

            ans = ans * 10 + n;
            i++;
        }

        ans *= sign;

        if (ans > INT_MAX)
            return INT_MAX;
        if (ans < INT_MIN)
            return INT_MIN;

        return (int)ans;
    }
};

int main()
{
    Solution sol;
    cout << sol.myAtoi("-91283472332") << endl; // Test case 1: should output 42
    cout << sol.myAtoi("   -123abc") << endl;   // Test case 2: should output -123
    return 0;
}