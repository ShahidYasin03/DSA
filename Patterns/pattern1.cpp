// n X n square

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter value of N : ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "*";
        }
        // Put next line after each row
        cout << endl;
    }

    return 0;
}