#include <iostream>
using namespace std;

void count(int n)
{
    //base case
    if(n == 5)
        return;
        cout << n <<endl;
        n++;
        // function call
        count(n); 
}
int main()
{
    count(1);
    return 0;
}