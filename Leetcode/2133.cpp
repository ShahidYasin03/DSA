#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    bool contain(vector<int> &x)
    {
        int n = x.size();
        vector<bool> sol(n + 1, false);
        for (int i = 0; i < n; i++)
        {
            if (x[i] <= n && x[i] >= 0)
            {
                sol[x[i]] = true;
            }
        }
        for (int i = 1; i < n + 1; i++)
        {
            if (!sol[i])
            {
                return false;
            }
        }
        return true;
    }
    bool checkValid(vector<vector<int>> &matrix)
    {
        int n = matrix.size();
        for (int i = 0; i < n; i++)
        {
            if (!contain(matrix[i]))
                return false;
        }
        for (int j = 0; j < n; j++)
        {
            vector<int> col;
            for (int i = 0; i < n; i++)
            {
                col.push_back(matrix[i][j]);
            }
            if (!contain(col))
                return false;
        }
        return true;
    }
};

int main()
{
    Solution sol;
    vector<vector<int>> matrix1 = {
        {1, 1},
        {1, 1}};
    vector<vector<int>> matrix2 = {
        {1, 2, 3},
        {3, 1, 2},
        {2, 3, 1}};
    // cout << boolalpha << sol.checkValid(matrix1) << endl; // true
    cout << boolalpha << sol.checkValid(matrix2) << endl; // false
    return 0;
}