#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    bool hasDuplicate(vector<char> &arr)
    {
        vector<bool> seen(10, false);
        for (char c : arr)
        {
            if (c == '.')
                continue;
            int x = c - '0';
            if (x < 1 || x > 9)
                return true;
            if (seen[x])
                return true;
            seen[x] = true;
        }
        return false;
    }

    bool isValidSudoku(vector<vector<char>> &board)
    {
        int n = 9;
        vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9};
        for (int i = 0; i < n; i++)
        {
            if (hasDuplicate(board[i]))
                return false;
        }
        // cols
        for (int j = 0; j < n; j++)
        {
            vector<char> col;
            for (int i = 0; i < n; i++)
            {
                col.push_back(board[i][j]);
            }
            if (hasDuplicate(col))
                return false;
        }

        for (int bi = 0; bi < n; bi++)
        {
            vector<char> box;
            int rowStart = (bi / 3) * 3;
            int colStart = (bi % 3) * 3;
            for (int i = 0; i < 3; i++)
                for (int j = 0; j < 3; j++)
                    box.push_back(board[rowStart + i][colStart + j]);
            if (hasDuplicate(box))
                return false;
        }

        return true;
    }
};

int main()
{
    Solution sol;

    vector<vector<char>> board1 = {
        {'.', '.', '4', '.', '.', '.', '6', '3', '.'},
        {'.', '.', '.', '.', '.', '.', '.', '.', '.'},
        {'5', '.', '.', '.', '.', '.', '.', '9', '.'},
        {'.', '.', '.', '5', '6', '.', '.', '.', '.'},
        {'4', '.', '3', '.', '.', '.', '.', '.', '1'},
        {'.', '.', '.', '7', '.', '.', '.', '.', '.'},
        {'.', '.', '.', '5', '.', '.', '.', '.', '.'},
        {'.', '.', '.', '.', '.', '.', '.', '.', '.'},
        {'.', '.', '.', '.', '.', '.', '.', '.', '.'}};

    vector<vector<char>> board2 = {
        {'8', '3', '.', '.', '7', '.', '.', '.', '.'},
        {'6', '.', '.', '1', '9', '5', '.', '.', '.'},
        {'.', '9', '8', '.', '.', '.', '.', '6', '.'},
        {'8', '.', '.', '.', '6', '.', '.', '.', '3'},
        {'4', '.', '.', '8', '.', '3', '.', '.', '1'},
        {'7', '.', '.', '.', '2', '.', '.', '.', '6'},
        {'.', '6', '.', '.', '.', '.', '2', '8', '.'},
        {'.', '.', '.', '4', '1', '9', '.', '.', '5'},
        {'.', '.', '.', '.', '8', '.', '.', '7', '9'}};

    cout << "Test case 1: " << (sol.isValidSudoku(board1) ? "Valid" : "Invalid") << endl;
    cout << "Test case 2: " << (sol.isValidSudoku(board2) ? "Valid" : "Invalid") << endl;

    return 0;
}