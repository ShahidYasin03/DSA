#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    bool searchMatrix(vector<vector<int>> &matrix, int target)
    {
        // int i = 0;
        // int j = 0;
        int n = matrix.size();
        int m = matrix[0].size();
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (matrix[i][j] == target)
                {
                    return true;
                }
            }
        }
        return false;
    }
};

int main()
{
    Solution sol;
    vector<vector<int>> matrix1 = {
        {1, 3, 5, 7},
        {10, 11, 16, 20},
        {23, 30, 34, 60}};
    int target1 = 3;
    cout << (sol.searchMatrix(matrix1, target1) ? "Found" : "Not Found") << endl;

    vector<vector<int>> matrix2 = {
        {1, 4, 7, 11},
        {8, 9, 10, 20},
        {11, 12, 17, 30}};
    int target2 = 5;
    cout << (sol.searchMatrix(matrix2, target2) ? "Found" : "Not Found") << endl;

    return 0;
}