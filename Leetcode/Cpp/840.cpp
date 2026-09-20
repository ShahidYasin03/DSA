#include <iostream>
#include <vector>
#include <set>
using namespace std;

class Solution
{
public:
    int helper(vector<vector<int>> grid, int r, int c)
    {
        set<int> uniqueNumbers;

        for (int i = r; i < r + 3; ++i)
        {
            for (int j = c; j < c + 3; ++j)
            {
                // If the number is already in the set, then it's not distinct
                if (uniqueNumbers.find(grid[i][j]) != uniqueNumbers.end() || grid[i][j] > 9 || grid[i][j] < 1)
                {
                    return 0;
                }
                // Insert the number into the set
                uniqueNumbers.insert(grid[i][j]);
            }
        }

        for (int i = r; i < r + 3; i++)
        {
            if (grid[i][c] + grid[i][c + 1] + grid[i][c + 2] != 15)
            {
                return 0;
            }
        }

        for (int i = c; i < c + 3; i++)
        {
            if (grid[r][i] + grid[r + 1][i] + grid[r + 2][i] != 15)
            {
                return 0;
            }
        }

        if (grid[r][c] + grid[r + 1][c + 1] + grid[r + 2][c + 2] != 15 || grid[r + 2][c] + grid[r + 1][c + 1] + grid[r][c + 2] != 15)
        {
            return 0;
        }

        return 1;
    }

    int numMagicSquaresInside(vector<vector<int>> &grid)
    {

        int rows = grid.size(), cols = grid[0].size();
        int count = 0;

        for (int i = 0; i < rows - 2; i++)
        {
            for (int j = 0; j < cols - 2; j++)
            {
                count += helper(grid, i, j);
            }
        }
        return count;
    }
};

int main()
{
    Solution sol;

    // Test Case I

    // [[4,3,8,4],[9,5,1,9],[2,7,6,2]]

    vector<vector<int>> x = {{1, 8, 6}, {10, 5, 0}, {4, 2, 9}};

    int res = sol.numMagicSquaresInside(x);

    cout << "Result: " << res << endl;

    return 0;
}