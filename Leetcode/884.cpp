#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
using namespace std;

class Solution
{
public:
    vector<string> uncommonFromSentences(string s1, string s2)
    {

        vector<string> str1;
        string temp = "";

        for (int i = 0; i < s1.length(); i++)
        {
            if (s1[i] == ' ')
            {
                if (!temp.empty())
                {
                    str1.push_back(temp);
                    temp = "";
                }
            }
            else
            {
                temp += s1[i];
            }
        }
        if (!temp.empty())
        {
            str1.push_back(temp);
        }

        vector<string> str2;
        temp = "";

        for (int i = 0; i < s2.length(); i++)
        {
            if (s2[i] == ' ')
            {
                if (!temp.empty())
                {
                    str2.push_back(temp);
                    temp = "";
                }
            }
            else
            {
                temp += s2[i];
            }
        }
        if (!temp.empty())
        {
            str2.push_back(temp);
        }

        unordered_map<string, int> mapy;
        for (int i = 0; i < str1.size(); i++)
        {
            mapy[str1[i]]++;
        }
        for (int i = 0; i < str2.size(); i++)
        {
            mapy[str2[i]]++;
        }

        vector<string> ans;
        for (auto el : mapy)
        {
            if (el.second == 1)
            {
                ans.push_back(el.first);
            }
        }

        return ans;
    }
};

int main()
{
    Solution sol;

    // Test case 1
    string s1 = "apple banana orange";
    string s2 = "banana grape apple";
    vector<string> result1 = sol.uncommonFromSentences(s1, s2);

    cout << "Uncommon words from Test Case 1: ";
    for (const string &word : result1)
    {
        cout << word << " ";
    }
    cout << endl;

    // Test case 2
    s1 = "the quick brown fox";
    s2 = "the slow brown dog";
    vector<string> result2 = sol.uncommonFromSentences(s1, s2);

    cout << "Uncommon words from Test Case 2: ";
    for (const string &word : result2)
    {
        cout << word << " ";
    }
    cout << endl;

    return 0;
}
