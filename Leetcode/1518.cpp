#include <iostream>
#include <vector>
using namespace std;

int numWaterBottles(int bottles, int ex)
{
    int total = bottles;
    int empty = bottles;

    while (empty >= ex)
    {
        int extra = empty % ex;
        total += empty / ex;
        empty = empty / ex + extra;
    }

    return total;
}

int main()
{

    cout << numWaterBottles(15, 4) << endl;

    return 0;
}