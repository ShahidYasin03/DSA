#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 14, 7, 2, 3, 4, 5, -1};
    int mx = 0;
    for (int i = 0; i < size(arr); i++)
    {
        if (mx < arr[i])
        {
           mx = arr[i];
        }
    }
    cout << mx << endl;
    return 0;
}