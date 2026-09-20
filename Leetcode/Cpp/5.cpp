#include <iostream>
#include <string>
using namespace std;

class Solution
{
public:
    string longestPalindrome(string s)
    {
        string res = "";
        int resLen = 0;
        int n = s.length();

        for (int i = 0; i < n; i++)
        {
            // Odd-length palindromes
            int r = i, l = i;
            while (l >= 0 && r < n && s[l] == s[r])
            {
                if ((r - l + 1) > resLen)
                {
                    res = s.substr(l, r - l + 1); 
                    resLen = (r - l + 1);
                }
                l--;
                r++;
            }

            // Even-length palindromes
            r = i + 1, l = i;
            while (l >= 0 && r < n && s[l] == s[r])
            {
                if ((r - l + 1) > resLen)
                {
                    res = s.substr(l, r - l + 1); 
                    resLen = (r - l + 1);
                }
                l--;
                r++;
            }
        }

        return res;
    }
};

int main()
{
    Solution solution;

    // Test case 1
    string s1 = "babad";
    cout << "Input: " << s1 << endl;
    cout << "Longest Palindromic Substring: " << solution.longestPalindrome(s1) << endl;

    // Test case 2
    string s2 = "cbbd";
    cout << "Input: " << s2 << endl;
    cout << "Longest Palindromic Substring: " << solution.longestPalindrome(s2) << endl;

    return 0;
}
