class Solution
{
public:
    vector<int> shortestToChar(string s, char c)
    {
        vector<int> temp;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == c)
            {
                temp.push_back(i);
            }
        }
        vector<int> ans(s.length(), 0);
        for (int i = 0; i < ans.size(); i++)
        {
            int sh = INT_MAX;
            for (int j = 0; j < temp.size(); j++)
            {
                sh = min(sh, abs(i - temp[j]));
            }
            ans[i] = sh;
        }

        return ans;
    }
};