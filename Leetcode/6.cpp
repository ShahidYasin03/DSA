#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    string convert(string s, int numRows)
    {
        if(s.length() <= 1 || numRows <= 1)
        {
            return s;
        }
        string ans = "";
        int n = numRows, m = 7;
        vector<vector<char>> x(n, vector<char>(m, '*'));
        int index = 0;
        int i = 0, j = 0;
        while(index < s.length())
        {
            while(i < numRows)
            {
                x[i][j] = s[index++];
                i++;
            }
            i--;
            while(i > 0)
            {
                i--;
                j++;
                x[i][j] = s[index++];
            }
            i++;
        }
        for(int k = 0; k < n; k++)
        {
            for(int l = 0; l < m; l++)
            {
                // cout << x[k][l] << "    ";
                if(x[k][l] != '*')
                {
                    ans += x[k][l];
                }
            }
            // cout << endl;
        }
        return ans;
    }
};

int main()
{
    Solution sol;
    string s = "PAYPALISHIRING";
    int row = 3;

    cout << sol.convert(s, row) << endl;
    return 0;
}