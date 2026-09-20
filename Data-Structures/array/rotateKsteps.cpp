#include <iostream>
using namespace std;
void fun(int *arr, int n)
{
    int x = arr[n - 1];
    for (int i = n - 1; i >= 0; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[0] = x;
}
void print(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int k = 8;
    int n = 5;
    k %= n;
    int arr[n] = {1, 2, 3, 4, 5};
    print(arr, n);
    cout << endl;
    if (k != 0)
    {
        for (int i = 0; i < k; i++)
        {
            fun(arr, n);
        }
    }

    print(arr, n);
}