#include <iostream>
using namespace std;

class Solution
{
public:
    void rev(string &s)
    {
        int n = s.length();
        for (int i = 0; i < n / 2; i++)
        {
            char temp = s[i];
            s[i] = s[n - i - 1];
            s[n - i - 1] = temp;
        }
    }

    string add(string s1, string s2)
    {
        string ans = "";
        int carry = 0;
        int n1 = s1.length();
        int n2 = s2.length();
        int i = n1 - 1, j = n2 - 1;

        while (i >= 0 || j >= 0 || carry)
        {
            int sum = carry;

            if (i >= 0)
            {
                sum += s1[i] - '0';
                i--;
            }

            if (j >= 0)
            {
                sum += s2[j] - '0';
                j--;
            }

            carry = sum / 10;
            sum = sum % 10;

            ans = char(sum + '0') + ans;
        }

        return ans;
    }

    string multiply(string num1, string num2)
    {
        string result = "0";

        int m = num1.length();
        int n = num2.length();
        int carry = 0;
        int countzero = 0;

        for (int i = n - 1; i >= 0; i--)
        {
            string ans = "";
            carry = 0; // Reset carry for each row
            for (int j = m - 1; j >= 0; j--)
            {
                int mul = (num1[j] - '0') * (num2[i] - '0');
                mul += carry;
                carry = mul / 10;
                ans += char((mul % 10) + '0');
            }

            if (carry)
            {
                ans += char(carry + '0');
            }

            rev(ans);

            // Append zeros to the end of the current result based on its position
            for (int k = 0; k < countzero; k++)
            {
                ans += '0';
            }
            countzero++;

            result = add(result, ans);
        }

        // Remove leading zeros if any
        while (result.length() > 1 && result[0] == '0')
        {
            result.erase(result.begin());
        }

        return result;
    }
};

int main()
{
    string a = "123", b = "456";
    Solution sol;
    cout << sol.multiply(a, b) << endl;
    return 0;
}
