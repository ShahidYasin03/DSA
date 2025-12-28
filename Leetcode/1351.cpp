#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    int countNegatives(vector<vector<int>> &grid)
    {
        int count = 0;
        int m = grid.size(), n = grid[0].size();
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (grid[i][j] < 0)
                {
                    count++;
                }
            }
        }
        return count;
    }
};

int main()
{
    Solution sol;

    // Test case 1
    vector<vector<int>> grid1 = {{4, 3, 2, -1}, {3, 2, 1, -1}, {1, 1, -1, -2}, {-1, -1, -2, -3}};
    cout << "Test case 1: " << sol.countNegatives(grid1) << endl;

    // Test case 2
    vector<vector<int>> grid2 = {{3, 2}, {1, 0}};
    cout << "Test case 2: " << sol.countNegatives(grid2) << endl;

    return 0;
}