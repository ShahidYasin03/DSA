#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Solution
{
public:
    string longestCommonPrefix(vector<string> &strs)
    {
        int n = strs.size();
        if (n == 0)
            return "";
        string shortest = "";
        int len = INT_MAX;
        for (const string &s : strs)
        {
            if ((int)s.length() < len)
            {
                len = s.length();
                shortest = s;
            }
        }
        for (const string &str : strs)
        {
            string temp = "";
            for (int i = 0; i < (int)shortest.length(); i++)
            {
                if (shortest[i] == str[i])
                    temp += shortest[i];
                else
                    break;
            }
            shortest = temp;
            if (shortest.empty())
                break;
        }

        return shortest;
    }
};

int main()
{
    Solution sol;

    vector<string> tc1 = {"flower", "flow", "flight"};
    cout << "Test 1: " << sol.longestCommonPrefix(tc1) << '\n';

    vector<string> tc2 = {"dog", "racecar", "car"};
    cout << "Test 2: " << sol.longestCommonPrefix(tc2) << '\n';

    return 0;
}