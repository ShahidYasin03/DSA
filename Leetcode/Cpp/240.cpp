#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    bool searchMatrix(vector<vector<int>> &matrix, int target)
    {
        int n = matrix.size();
        int m = matrix[0].size();

        int r = 0;
        int c = m - 1;

        while (r < n && c >= 0)
        {
            if (matrix[r][c] == target)
            {
                return true;
            }
            else if (matrix[r][c] > target)
            {
                c--;
            }
            else
            {
                r++;
            }
        }

        return false;
    }
};

int main()
{
    Solution sol;
    vector<vector<int>> matrix1 = {
        {1, 4, 7, 11},
        {2, 5, 8, 12},
        {3, 6, 9, 16},
        {10, 13, 14, 17}};
    int target1 = 5;
    cout << (sol.searchMatrix(matrix1, target1) ? "Found" : "Not Found") << endl;

    vector<vector<int>> matrix2 = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};
    int target2 = 10;
    cout << (sol.searchMatrix(matrix2, target2) ? "Found" : "Not Found") << endl;

    return 0;
}