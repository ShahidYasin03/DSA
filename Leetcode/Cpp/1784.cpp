#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Solution
{
public:
    bool checkOnesSegment(string s)
    {
        bool flag = false;
        if (s[0] == '1')
            flag = true;
        for (int i = 0; i < s.length() - 1; i++)
        {
            if (s[i] == '0' && s[i + 1] == '1')
            {
                if (!flag)
                {
                    flag = true;
                }
                else
                {
                    return false;
                }
            }
        }
        return true;
    }
};

int main()
{
    Solution sol;

    // Test case 1
    string test1 = "1001";
    cout << "Input: \"" << test1 << "\"" << endl;
    cout << "Output: " << (sol.checkOnesSegment(test1) ? "true" : "false") << endl;
    cout << "Expected: false" << endl
         << endl;

    // Test case 2
    string test2 = "110";
    cout << "Input: \"" << test2 << "\"" << endl;
    cout << "Output: " << (sol.checkOnesSegment(test2) ? "true" : "false") << endl;
    cout << "Expected: true" << endl;

    return 0;
}