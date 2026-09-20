#include <iostream>
using namespace std;
// input heights from user
void input(int *arr)
{
    cout << "Enter heights" << endl;
    for (int i = 0; i < 11; i++)
    {
        cin >> arr[i];
    }
}

float average(int *arr)
{
    float sum = 0.00;
    for (int i = 0; i < 11; i++)
    {
        sum += arr[i];
    }
    return sum / 11;
}
void top(int *arr)
{
    for (int i = 0; i < 11; i++)
    {
        for (int j = 0; j < 11; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
    cout << "Three smallest : ";
    for (int i = 0; i < 3; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "Three highest : ";
    for (int i = 8; i < 11; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main()
{
    int arr[11];
    input(arr);
    float av = average(arr);
    cout << "Average is : " << av << endl;
    top(arr);

    return 0;
}
