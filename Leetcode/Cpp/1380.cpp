#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    vector<int> luckyNumbers(vector<vector<int>>& matrix) {
        vector<int> mins;
        int rows = matrix.size();
        int cols = matrix[0].size();
        
        // Find the minimum in each row
        for (int i = 0; i < rows; i++) {
            int min = matrix[i][0];
            for (int j = 1; j < cols; j++) {
                if (matrix[i][j] < min) {
                    min = matrix[i][j];
                }
            }
            mins.push_back(min);
        }

        vector<int> result;
        
        // Find the maximum in each column and check for lucky numbers
        for (int col = 0; col < cols; ++col) {
            int max = matrix[0][col];
            int maxIndex = 0;
            for (int row = 1; row < rows; ++row) {
                if (matrix[row][col] > max) {
                    max = matrix[row][col];
                    maxIndex = row;
                }
            }
            if (mins[maxIndex] == max) {
                result.push_back(max);
            }
        }
        
        return result;
    }
};

int main() {
    Solution solution;
    vector<vector<int>> matrix = {
        {3, 7, 8},
        {9, 11, 13},
        {15, 16, 17}
    };

    vector<int> luckyNumbers = solution.luckyNumbers(matrix);

    cout << "Lucky Numbers: ";
    for (int num : luckyNumbers) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
