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
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= i ; j++)
        {
            cout<<" ";
        }
        for(int j =i; j <= n; j++)
        {
            cout << "*";
        }
        for(int j = i + 1; j <= n; j++)
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

    for(int i = 2; i <= n; i++)
    {
        for(int j = 1; j <= i ; j++)
        {
            cout<<" ";
        }
        for(int j =i; j <= n; j++)
        {
            cout << "*";
        }
        for(int j = i + 1; j <= n; j++)
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

int main()
{
    int n;
    // cout << "Enter value of N : ";
    // cin >> n;
    n = 4;
    pattern9(n);

    return 0;
}