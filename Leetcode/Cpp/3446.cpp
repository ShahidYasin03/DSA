#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

class Solution
{
public:
    vector<vector<int>> sortMatrix(vector<vector<int>> &grid)
    {
        unordered_map<int, vector<int>> mapy;
        int n = grid.size();
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                mapy[j - i].push_back(grid[i][j]);
            }
        }

        for (auto &i : mapy)
        {
            if (i.first > 0)
            {
                sort(i.second.begin(), i.second.end(), greater<int>());
            }
            else
            {
                sort(i.second.begin(), i.second.end());
            }
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                int key = j - i;
                grid[i][j] = mapy[key].back(); 
                mapy[key].pop_back();  
            }
        }
        return grid;
    }
};

int main()
{
    Solution sol;
    vector<vector<int>> grid1 = {{3, 1, 2}, {4, 6, 5}, {9, 7, 8}};
    vector<vector<int>> res1 = sol.sortMatrix(grid1);
    for (const auto &row : res1)
    {
        for (int val : row)
            cout << val << ' ';
        cout << endl;
    }
    cout << "----------------------------" << endl;
    vector<vector<int>> grid2 = {{10, 20}, {5, 15}};
    vector<vector<int>> res2 = sol.sortMatrix(grid2);
    for (const auto &row : res2)
    {
        for (int val : row)
            cout << val << ' ';
        cout << endl;
    }
    return 0;
}