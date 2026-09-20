#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter Number : ";
    cin>>n;
    int x;
    while(n > 0)
    {
        n = n /10;
        x++;
    }
    cout<<x;
}