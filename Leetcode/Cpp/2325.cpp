#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution
{
public:
    string decodeMessage(string key, string message)
    {
        unordered_map<char, char> m;
        char alpha = 'a';

        for (char ch : key)
        {
            if (ch != ' ' && m.find(ch) == m.end())
            {
                m[ch] = alpha;
                alpha++;
            }
        }

        string s;
        for (char ch : message)
        {
            if (ch == ' ')
            {
                s += ' ';
            }
            else
            {
                s += m[ch];
            }
        }

        return s;
    }
};

int main()
{
    Solution sol;
    string message = "vkbs bs t suepuv", key = "the quick brown fox jumps over the lazy dog";
    string ans = sol.decodeMessage(key, message);
    cout << ans;

    return 0;
}