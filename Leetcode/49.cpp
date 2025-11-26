#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
#include <algorithm>

using namespace std;

class Solution
{
public:
    vector<vector<string>> groupAnagrams(vector<string> &strs)
    {
        vector<vector<string>> ans;
        int n = strs.size();
        unordered_map<string, vector<string>> mp;
        for (int i = 0; i < n; i++)
        {
            string str = strs[i];
            sort(str.begin(), str.end());
            mp[str].push_back(strs[i]);
        }
        for (auto &p : mp)
        {
            ans.push_back(p.second);
        }
        return ans;
    }
};

int main()
{
    Solution sol;

    // Test case 1
    vector<string> strs1 = {"eat", "tea", "ate", "nat", "tan", "bat"};
    vector<vector<string>> result1 = sol.groupAnagrams(strs1);
    cout << "Test case 1:\n";
    for (auto &group : result1)
    {
        for (auto &str : group)
        {
            cout << str << " ";
        }
        cout << "\n";
    }

    // Test case 2
    vector<string> strs2 = {"", "a"};
    vector<vector<string>> result2 = sol.groupAnagrams(strs2);
    cout << "\nTest case 2:\n";
    for (auto &group : result2)
    {
        for (auto &str : group)
        {
            cout << str << " ";
        }
        cout << "\n";
    }

    return 0;
}