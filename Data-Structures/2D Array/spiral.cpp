#include <iostream>
#include <vector>
using namespace std;

// Function to print matrix elements in spiral order
void spiral(vector<vector<int>> &matrix)
{
    int left = 0;                     // Left boundary of the matrix
    int right = matrix[0].size() - 1; // Right boundary of the matrix
    int top = 0;                      // Top boundary of the matrix
    int bottom = matrix.size() - 1;   // Bottom boundary of the matrix
    int direction = 0;                // 0: move right, 1: move down, 2: move left, 3: move up

    while (left <= right && top <= bottom)
    {
        if (direction == 0)
        {
            // Move from left to right and print the elements
            for (int col = left; col <= right; col++)
            {
                cout << matrix[top][col] << " ";
            }
            top++; // Move the top boundary down
        }
        else if (direction == 1)
        {
            // Move from top to bottom and print the elements
            for (int row = top; row <= bottom; row++)
            {
                cout << matrix[row][right] << " ";
            }
            right--; // Move the right boundary left
        }
        else if (direction == 2)
        {
            // Move from right to left and print the elements
            for (int col = right; col >= left; col--)
            {
                cout << matrix[bottom][col] << " ";
            }
            bottom--; // Move the bottom boundary up
        }
        else
        {
            // Move from bottom to top and print the elements
            for (int row = bottom; row >= top; row--)
            {
                cout << matrix[row][left] << " ";
            }
            left++; // Move the left boundary right
        }
        direction = (direction + 1) % 4; // Change direction for the next iteration
    }
}

int main()
{
    int n, m;
    cout << "Enter size: ";
    cin >> n >> m;
    vector<vector<int>> matrix(n, vector<int>(m));
    cout << "Enter elements:\n";
    // Input elements into the matrix
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> matrix[i][j];
        }
    }
    // Call the function to print matrix elements in spiral order
    spiral(matrix);
    cout << endl; // Print a newline character after the spiral is printed
    return 0;
}