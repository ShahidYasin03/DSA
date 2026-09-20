#include <iostream>
using namespace std;

int search(int arr[], int size, int num)
{
    int s = 0;
    int e = size - 1;
    int mid = (s + e) / 2;

    while (s <= e)
    {
        if (arr[mid] == num)
        {
            return mid;
        }
        if (num > arr[mid])
        {
            s = mid + 1;
        }
        else
        {
            e--;
        }

        mid = (s + e) / 2;
    }
    return -1;
}
int main()
{
    int size = 10;
    int num;
    cout << "Enter number to search in array" << endl;
    cin >> num;
    int arr[size] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int index = search(arr, size, num);

    cout << "Index of number is : " << index << endl;
}