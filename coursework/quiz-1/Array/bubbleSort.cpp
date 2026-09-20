#include <iostream>
using namespace std;
int main()
{
    int size = 6;
    int arr[size] = {1, 3, 2, 6, -1, 4};

    for (int i = 1; i < size; i++)
    {
        for (int j = 0; j < size - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}