

#include <iostream>
using namespace std;

class Solution
{
public:
    string makeFancyString(string s)
    {
        if (s.length() < 3)
            return s;
        string st = "";
        int count = 1;
        char c = s[0];
        st += c;
        for (int i = 1; i < s.length(); i++)
        {
            if (s[i] == c)
            {
                count++;
            }else{
                count = 1;
                c = s[i];
            }
            if (count < 3)
            {
                st += s[i];
            }
        }

        return st;
    }
};

int main()
{
    Solution sol;
    string test1 = "leeetcode";
    string test2 = "aaabaaaa";
    cout << sol.makeFancyString(test1) << endl; // Output: "aabaa"
    cout << sol.makeFancyString(test2) << endl; // Output: "aabaa"
    return 0;
}