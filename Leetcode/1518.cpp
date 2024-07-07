#include <iostream>
#include <vector>
using namespace std;

int numWaterBottles(int bottles, int ex)
{
    int total = bottles;
    int empty = bottles;

    while (empty >= ex)
    {
        int ex1 = empty / ex;
        total += ex1;
        int extra = empty % ex;
        empty = ex1 + extra;
    }

    return total;
}

int main()
{

    cout << numWaterBottles(15, 4) << endl;

    return 0;
}