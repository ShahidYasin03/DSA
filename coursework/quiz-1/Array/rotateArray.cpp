#include <iostream>
using namespace std;
void rotate(int *arr, int n, int k)
{
    int temp[n];
    for (int i = 0; i < n; i++)
    {
        temp[(i + k) % n] = arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        arr[i] = temp[i];
    }
}

void print(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int size = 5;
    int arr[size] = {1, 2, 3, 4, 5};

    rotate(arr, size, 3);
    print(arr, size);

    return 0;
}