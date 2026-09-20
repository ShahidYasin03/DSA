#include <iostream>
using namespace std;
void takeinput(int arr[4][4], int R, int C)
{
    cout << "Enter elements of matrix \n";
    for (int i = 0; i < R; i++)
    {
        for (int j = 0; j < C; j++)
        {
            cin >> arr[i][j];
        }
    }
}
void outputarray(int arr[4][4], int R, int C)
{
    for (int i = 0; i < R; i++)
    {
        for (int j = 0; j < C; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}
void multiply(int arr[4][4], int arr2[4][4], int result[4][4], int r1, int c1, int r2, int c2)
{
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            int value = 0;
            for (int k = 0; k < c1; k++)
            {
                value += arr[i][k] * arr2[k][j];
            }
            result[i][j] = value;
        }
    }
}
int main()
{
    int r1=0, c1=0, r2=0, c2=0;
    cout << "Enter Rows of 1st matrix : ";
    cin >> r1;
    cout << "Enter Cols of 1st matrix : ";
    cin >> c1;
    int Mat1[r1][c1];
    takeinput(Mat1, r1, c1);
    outputarray(Mat1, r1, c1);
    cout << endl;
    cout << "Enter Rows of 2nd matrix : ";
    cin >> r2;
    cout << "Enter Cols of 2nd matrix : ";
    cin >> c2;
    int Mat2[r2][c2];
    takeinput(Mat2, r2, c2);
    outputarray(Mat2, r2, c2);
    cout << endl;
    int Mat3[r1][c2];
    cout << endl;
    multiply(Mat1, Mat2, Mat3, r1, c1, r2, c2);
    outputarray(Mat3, r1, c2);

    return 0;
}