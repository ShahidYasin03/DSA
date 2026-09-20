#include <iostream>
using namespace std;
int main()
{
    int n, m;
    cout << "Enter size \n";
    cin >> n >> m;
    int A[n][m];
    cout << "Enter elements \n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> A[i][j];
        }
    }

    int transpose[m][n];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            transpose[i][j] = A[j][i];
        }
    }
    cout << "Transpose Matrix : \n";
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << transpose[i][j] << " ";
        }
        cout << endl;
    }
}