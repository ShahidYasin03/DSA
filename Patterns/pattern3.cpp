// Pattern 3

#include <iostream>
using namespace std;

int main()
{
    int n = 4;

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j <= n; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}

// Output

// ****
// ***
// **
// *