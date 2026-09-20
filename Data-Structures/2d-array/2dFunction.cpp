#include <iostream>
using namespace std;
void inputarray(int *arr, int R, int C)
{
    for (int i = 0; i < R; i++)
    {
        for (int j = 0; j < C; j++)
        {
            cin >> *(arr + i * C + j);
        }
        cout << endl;
    }
}
void outputarray(int *arr, int R, int C)
{
    for (int i = 0; i < R; i++)
    {
        for (int j = 0; j < C; j++)
        {
            cout << *(arr + i * C + j) << " ";
        }
        cout << endl;
    }
}

int main()
{
    int arr[2][2] =
        {1, 2,
         3, 4};
    inputarray((int *)arr, 2, 2);
    outputarray((int *)arr, 2, 2);
}