#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Solution
{
public:
    string modifyString(string s)
    {
        string ans = "";
        int n = s.length();
        if(n == 1)
        {
            return s == "?" ? "a" : s;
        }
        vector<char> temp;
        for (int i = 0; i < n; i++)
        {
            temp.push_back(s[i]);
        }
        for (int i = 0; i < n; i++)
        {
            if (temp[i] != '?')
            {
                ans += temp[i];
            }
            else
            {
                char c = 'a';
                while (c <= 'z')
                {
                    bool isValid = true;

                    if (i > 0 && temp[i - 1] == c)
                    {
                        isValid = false;
                    }
                    if (i < n - 1 && temp[i + 1] == c)
                    {
                        isValid = false;
                    }

                    if (isValid)
                    {
                        temp[i] = c;
                        ans += c;
                        break;
                    }
                    c++;
                }
            }
        }
        return ans;
    }
};

int main()
{
    Solution sol;
    // Test case giving runtime error
    string s = "?a?ub???w?b";

    cout << sol.modifyString(s) << endl;

    return 0;
}
