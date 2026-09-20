#include <iostream>
using namespace std;
void remove(int *arr, int &size)
{
    int temp[size];
    int k = 0;
    for (int i = 0; i < size - 1; i++)
    {
        if (arr[i] != arr[i + 1])
        {
            temp[k++] = arr[i];
        }
    }
    temp[k++] = arr[size - 1];

    for (int i = 0; i < k; i++)
    {
        arr[i] = temp[i];
    }
    size = k;
}
int main()
{
    int size = 5;
    int arr[size] = {1, 2, 2, 2, 3};
    remove(arr, size);
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}