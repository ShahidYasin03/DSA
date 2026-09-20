#include <iostream>
using namespace std;
void input(int *arr, int s)
{
    for (int i = 0; i < s; i++)
    {
        cout << "Enter number : ";
        cin >> arr[i];
    }
}

void print(int *arr, int s)
{
    for (int i = 0; i < s; i++)
    {
        cout << arr[i] << " ";
    }
}

void sorting(int *arr, int s)
{
    for (int i = 0; i < s - 1; i++)
    {
        for (int j = i + 1; j < s; j++)
        {
            if (arr[j] < arr[i])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}
int removeDuplicate(int * arr, int size)
{
    int temp[size];
    int j = 0;

    for (int i = 0; i < size - 1; i++)
    {
        if(arr[i] != arr[i+1])
        {
            temp[j++] = arr[i];
        }
    }
    temp[j++]= arr[size-1];

    for (int i = 0; i < j; i++)
    {
        arr[i] = temp[i];
    }
    return j; 
}

int main()
{
    int size;
    cout << "Enter array size : ";
    cin >> size;
    int arr[size];
    input(arr, size);
    print(arr, size);
    cout << endl;
    sorting(arr, size);
    print(arr, size);
    cout<<endl;
    int b = removeDuplicate(arr, size);
    print(arr, b);
}