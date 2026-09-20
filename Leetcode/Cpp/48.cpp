#include <iostream>
#include <vector>
using namespace std;

void print(vector<vector<int>> x)
{
    for (int i = 0; i < x.size(); i++)
    {
        for (int j = 0; j < x[0].size(); j++)
        {
            cout << x[i][j] << "    ";
        }
        cout << endl;
    }
    cout << endl;
}

void rotate(vector<vector<int>> &x)
{
    int n = x.size();
    // Transpose
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i <= j)
            {
                swap(x[i][j], x[j][i]);
            }
        }
    }

    // Colum swap
    int j = n - 1;
    int s = 0;
    while (j >= s)
    {
        for (int i = 0; i < n; i++)
        {
            swap(x[i][s], x[i][j]);
        }
        s++;
        j--;
    }
}
int main()
{
    vector<vector<int>> x{{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    print(x);
    cout << "After rotate! : " << endl;
    rotate(x);
    print(x);
    return 0;
}