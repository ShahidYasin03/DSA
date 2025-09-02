#include <iostream>
#include <string>
#include <numeric>
using namespace std;

class Solution
{
public:
    string fractionAddition(string expression)
    {
        int num = 0, den = 1;

        int i = 0, n = expression.size();
        while (i < n)
        {
            int sign = 1;
            if (expression[i] == '+' || expression[i] == '-')
            {
                if (expression[i] == '-')
                    sign = -1;
                i++;
            }

            int n1 = 0;
            while (i < n && isdigit(expression[i]))
            {
                n1 = n1 * 10 + (expression[i] - '0');
                i++;
            }
            n1 *= sign;

            i++;

            int d1 = 0;
            while (i < n && isdigit(expression[i]))
            {
                d1 = d1 * 10 + (expression[i] - '0');
                i++;
            }

            num = num * d1 + n1 * den;
            den = den * d1;

            int g = gcd(abs(num), den);
            num /= g;
            den /= g;
        }

        return to_string(num) + "/" + to_string(den);
    }
};

int main()
{
    Solution sol;

    string expr1 = "1/3-1/2";
    cout << "Input: " << expr1 << endl;
    cout << "Output: " << sol.fractionAddition(expr1) << endl;

    string expr2 = "-1/2+1/2+1/3";
    cout << "Input: " << expr2 << endl;
    cout << "Output: " << sol.fractionAddition(expr2) << endl;

    return 0;
}
