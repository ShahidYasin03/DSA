#include <iostream>
#include <vector>
#include <unordered_map>
#include <set>
using namespace std;

class Solution
{
public:
    bool wordPattern(string pattern, string s)
    {
        vector<string> str;
        string x = "";
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == ' ')
            {
                str.push_back(x);
                x = "";
                continue;
            }
            x += s[i];
        }
        str.push_back(x);
        if (pattern.size() != str.size())
        {
            return false;
        }
        unordered_map<char, string> m;
        set<string> st;

        for (int i = 0; i < pattern.size(); i++)
        {
            if (m.find(pattern[i]) != m.end())
            {
                if (m[pattern[i]] != str[i])
                    return false;
            }
            else
            {
                if (st.count(str[i]) > 0)
                {
                    return false;
                }
                m[pattern[i]] = str[i];
                st.insert(str[i]);
            }
        }
        return true;
    }
};

int main()
{

    Solution sol;
    // Test Case 1
    string pattern = "abba", s = "dog cat cat dog";

    cout << sol.wordPattern(pattern, s) << endl;

    return 0;
}