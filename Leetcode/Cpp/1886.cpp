#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
public:
    bool findRotation(vector<vector<int>> &mat, vector<vector<int>> &target)
    {
        int n = mat.size();
        if (mat == target)
            return true;
        for (int i = 0; i <= n; i++)
        {
            for (int i = 0; i < n - 1; i++)
            {
                for (int j = i + 1; j < n; j++)
                {
                    swap(mat[i][j], mat[j][i]);
                }
            }
            for (int i = 0; i < n; i++)
            {
                reverse(mat[i].begin(), mat[i].end());
            }
            if (mat == target)
                return true;
        }
        return false;
    }
};

int main()
{
    Solution sol;

    // Test case 1
    vector<vector<int>> mat1 = {{0, 1}, {1, 0}};
    vector<vector<int>> target1 = {{1, 0}, {0, 1}};
    cout << "Test case 1: " << (sol.findRotation(mat1, target1) ? "true" : "false") << endl;

    // Test case 2
    vector<vector<int>> mat2 = {{0, 1}, {1, 1}};
    vector<vector<int>> target2 = {{1, 0}, {1, 1}};
    cout << "Test case 2: " << (sol.findRotation(mat2, target2) ? "true" : "false") << endl;

    return 0;
}