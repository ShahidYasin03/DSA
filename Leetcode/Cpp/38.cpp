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
    cout << "n = 4: " << sol.countAndSay(4) << endl;

    // Test case 2
    cout << "n = 5: " << sol.countAndSay(5) << endl;

    return 0;
}