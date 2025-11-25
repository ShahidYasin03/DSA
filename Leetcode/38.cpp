#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Solution
{
public:
    string countAndSay(int n)
    {
        string ans = "1";
        for (int i = 1; i < n; i++)
        {
            vector<pair<int, char>> temp;
            int count = 0;
            char c = ans[0];
            for (int k = 0; k < ans.length(); k++)
            {
                if (c == ans[k])
                {
                    count++;
                }
                else
                {
                    temp.push_back({count, c});
                    c = ans[k];
                    count = 1;
                }
            }
            temp.push_back({count, c});

            ans = "";
            for (int j = 0; j < temp.size(); j++)
            {
                ans += char(temp[j].first + '0');
                ans += temp[j].second;
            }
        }

        return ans;
    }
};

int main()
{
    Solution sol;

    // Test case 1
    // cout << "n = 1: " << sol.countAndSay(1) << endl;

    // Test case 2
    cout << "n = 5: " << sol.countAndSay(5) << endl;

    // vector<vector<int>> temp = {
    //     {0, 1}, {0, 2}, {0, 3}, {0, 4}, {0, 5}, {0, 6}, {0, 7}, {0, 8}, {0, 9}};

    // for (int i = 0; i < 9; i++)
    // {
    //     cout << "{" << temp[i][0] << ", " << temp[i][1] << "} ";
    // }

    return 0;
}