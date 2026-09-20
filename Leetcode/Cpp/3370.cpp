#include <iostream>
#include <cmath>
using namespace std;

class Solution
{
public:
    int smallestNumber(int n)
    {
        int i = 1;
        int val = 1;
        while (val < n)
        {
            val = pow(2, i) - 1;
            i++;
        }
        return val;
    }
};

int main()
{
    Solution s;
    cout << s.smallestNumber(7) << endl;
    cout << s.smallestNumber(9) << endl;
    return 0;
}