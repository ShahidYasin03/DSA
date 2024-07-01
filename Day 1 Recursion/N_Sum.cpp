#include <iostream>
using namespace std;

int sum(int n)
{
    //Base Case
    if(n == 1) return 1;
    // Recursive call
    return sum(n - 1) + n;
}

int main()
{
    int Nsum = sum(10);
    cout << Nsum << endl;
    return 0;
}