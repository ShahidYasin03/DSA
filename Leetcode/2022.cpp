#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    vector<vector<int>> construct2DArray(vector<int> &original, int m, int n)
    {
        vector<vector<int>> ans(m, vector<int>(n));
         if (m * n != original.size()) {
            return {}; 
        }
        int ind = 0;
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                ans[i][j] = original[ind++];
            }
        }
        return ans;
    }
};


int main()
{
    Solution sol;
    vector<int> q{1, 2};
    vector<vector<int>> x = sol.construct2DArray(q, 1, 1);
    for (int i = 0; i < x.size(); i++)
    {
        for (int j = 0; j < x[0].size(); j++)
        {
            cout << x[i][j] << "    ";
        }
        cout << endl;
    }
    return 0;
}