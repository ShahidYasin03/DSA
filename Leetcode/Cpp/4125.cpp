#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class Solution
{
public:
    string addStrings(string num1, string num2)
    {
        int n = num1.length() - 1, m = num2.length() - 1;
        int carry = 0;
        string ans = "";
        while (n >= 0 || m >= 0 || carry)
        {
            int sum = carry;
            if (n >= 0)
            {
                sum += (num1[n] - 48);
                n--;
            }
            if (m >= 0)
            {
                sum += (num2[m] - 48);
                m--;
            }

            carry = sum / 10;
            ans += char((sum % 10) + 48);
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};
auto init = []()
{
    ios::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);
    return 'c';
}();

int main()
{
    Solution solution;

    // Test case 1
    string num1 = "123";
    string num2 = "456";
    cout << "Sum of " << num1 << " and " << num2 << " is: " << solution.addStrings(num1, num2) << endl; // Output: "579"

    // Test case 2
    string num1_2 = "999";
    string num2_2 = "1";
    cout << "Sum of " << num1_2 << " and " << num2_2 << " is: " << solution.addStrings(num1_2, num2_2) << endl; // Output: "1000"

    // Test case 3
    string num1_3 = "0";
    string num2_3 = "0";
    cout << "Sum of " << num1_3 << " and " << num2_3 << " is: " << solution.addStrings(num1_3, num2_3) << endl; // Output: "0"

    return 0;
}
