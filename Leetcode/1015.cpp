#include <iostream>
using namespace std;

class Solution
{
public:
    int smallestRepunitDivByK(int k)
    {
        if (k == 1)
            return k;
        if (k % 2 == 0 || k % 5 == 0)
            return -1;
        int n = 0;
        int i = 1;
        while (i <= k)
        {
            n = (n * 10 + 1) % k;
            if (n == 0)
                return i;
            i++;
        }
        return -1;
    }
};

int main()
{
    Solution sol;

    // Test case 1
    cout << "k = 1: " << sol.smallestRepunitDivByK(1) << endl;

    // Test case 2
    cout << "k = 6: " << sol.smallestRepunitDivByK(6) << endl;

    return 0;
}