#include <iostream>
using namespace std;

void printer(int i, int n)
{
    if(i < 1)
    {
        return;
    }
    printer(i - 1, n);
    cout << i <<endl;
}

int main()
{

    printer(5, 5);

    return 0;

}