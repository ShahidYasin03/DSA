#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int minimumArea(vector<vector<int>>& grid) {
        int row = grid.size();
        int col = grid[0].size();
        
        int mini = row, maxi = -1;
        int minj = col, maxj = -1;
        
        for (int i = 0; i < row; i++) {
            for (int j = 0; j < col; j++) {
                if (grid[i][j] == 1) {
                    mini = min(mini, i);
                    maxi = max(maxi, i);
                    minj = min(minj, j);
                    maxj = max(maxj, j);
                }
            }
        }
        
        if (maxi == -1) return 0; 
        
        int height = maxi - mini + 1;
        int width  = maxj - minj + 1;
        return height * width;
    }
};


int main() {
    Solution sol;
    vector<vector<int>> grid1 = {
        {0, 0, 0, 0},
        {0, 1, 1, 0},
        {0, 1, 1, 0},
        {0, 0, 0, 0}
    };
    vector<vector<int>> grid2 = {
        {0, 0, 0},
        {0, 0, 0},
        {0, 0, 0}
    };

    cout << sol.minimumArea(grid1) << endl; // Output: 4
    cout << sol.minimumArea(grid2) << endl; // Output: 0

    return 0;
}