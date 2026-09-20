#include <iostream>
using namespace std;

class Solution
{
public:
    int findClosest(int x, int y, int z)
    {
        int dif1 = abs(z - x);
        int dif2 = abs(z - y);
        if (dif1 > dif2)
        {
            return 2;
        }
        else if (dif2 > dif1)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
};

int main()
{
    Solution sol;
    cout << sol.findClosest(2, 7, 4) << endl;  // Test case 1
    cout << sol.findClosest(2, 5, 6) << endl; // Test case 2
    return 0;
}