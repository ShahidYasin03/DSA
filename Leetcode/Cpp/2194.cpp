#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    vector<string> cellsInRange(string s)
    {
        char st = s[0];
        char ed = s[3];

        int el1 = s[1] - '0';
        int el2 = s[4] - '0';
        vector<string> res;
        while (st <= ed)
        {
            int x = el1;
            while (x <= el2)
            {
                string temp = "";
                char ch = x + '0';
                temp.push_back(st);
                temp.push_back(ch);
                res.push_back(temp);
                x++;
            }
            st++;
        }
        return res;
    }
};
int main()
{
    Solution sol;
    string s = "K1:L2";
    vector<string> ans = sol.cellsInRange(s);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << ", ";
    }
    cout << endl;

    return 0;
}