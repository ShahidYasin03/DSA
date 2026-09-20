#include <iostream>
using namespace std;
int main()
{
    int n, m;
    cout << "Enter size : ";
    cin >> n >> m;
    int arr[n][m];
    cout << "Enter array elements \n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }
    cout << "Array : " << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    int sum = 0;
    int r1, c1, r2, c2;
    cout << "Enter starting address : ";
    cin >> r1 >> c1;
    cout << "Enter ending address : ";
    cin >> r2 >> c2;

    for (int i = r1; i <= r2; i++)
    {
        for (int j = c1; j <= c2; j++)
        {
            sum += arr[i][j];
        }
    }

    cout << sum << endl;
}