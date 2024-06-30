// Patterns Practice

#include <iostream>
using namespace std;

// Pattern 1

void pattern1(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "*";
        }
        // Put next line after each row
        cout << endl;
    }

    // Output

    // ****
    // ****
    // ****
    // ****
}

// Pattern 2

void pattern2(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    // Output

    // *
    // **
    // ***
    // ****
}

// Pattern 3

void pattern3(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j <= n; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    // Output

    // ****
    // ***
    // **
    // *
}

// Pattern 4

void pattern4(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << j + 1;
        }
        cout << endl;
    }

    // Output

    // 1
    // 12
    // 123
    // 1234
}

// Pattern 5

void pattern5(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i;
        }
        cout << endl;
    }

    // Output

    // 1
    // 22
    // 333
    // 4444
}

// Pattern 6

void pattern6(int n)
{
    int count = 1;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << count++;
        }
        cout << endl;
    }

    // Output

    // 1
    // 23
    // 456
    // 78910
}

// Pattern 7

void pattern7(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j <= n; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        for (int j = 2; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    // Output

    //    *
    //   ***
    //  *****
    // *******
}

// Pattern 8

void pattern8(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << " ";
        }
        for (int j = i; j <= n; j++)
        {
            cout << "*";
        }
        for (int j = i + 1; j <= n; j++)
        {
            cout << "*";
        }

        cout << endl;
    }

    // Output

    // *******
    //  *****
    //   ***
    //    *
}

// Pattern 9

void pattern9(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j <= n; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        for (int j = 2; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    for (int i = 2; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << " ";
        }
        for (int j = i; j <= n; j++)
        {
            cout << "*";
        }
        for (int j = i + 1; j <= n; j++)
        {
            cout << "*";
        }

        cout << endl;
    }

    // Output

    //    *
    //   ***
    //  *****
    // *******
    //  *****
    //   ***
    //    *
}

// Pattern 10

void pattern10(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j < n; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    // Output

    // *
    // **
    // ***
    // ****
    // ***
    // **
    // *
}

// Pattern 11

void pattern11(int n)
{
    bool flag = true;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if (flag)
            {
            cout << "1";
                flag = false;
            }
            else
            {
                cout << "0";
                flag = true;
            }
        }
        cout << endl;
    }

    // Output 

    // 1
    // 01
    // 010
    // 1010
    // 10101
}

// Pattern 12

void pattern12(int n)
{
    int space = 2 * (n-1);
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= i; j++)
        {
            cout << j;
        }

        for(int j = 1; j<= space; j++)
        {
            cout <<" ";
        }

        for(int j = i; j>= 1; j--)
        {
            cout << j;
        }
        cout << endl;
        space -= 2;
    }
    
    // Output

    // 1        1
    // 12      21
    // 123    321
    // 1234  4321
    // 1234554321
}

// Pattern 13

void pattern13(int n)
{
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= i; j++)
        {
            cout << char(65 + j - 1);
        }
        cout << endl;
    }

    // Output

    // A
    // AB
    // ABC
    // ABCD
    // ABCDE
}
int main()
{
    int n;
    cout << "Enter value of N : ";
    cin >> n;

    pattern13(5);

    return 0;
}