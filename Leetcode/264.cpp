#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
public:
    int nthUglyNumber(int n)
    {
        vector<int> uglies(n);
        int i2 = 0, i3 = 0, i5 = 0;
        uglies[0] = 1;
        for (int i = 1; i < n; i++)
        {
            int next2 = uglies[i2] * 2;
            int next3 = uglies[i3] * 3;
            int next5 = uglies[i5] * 5;

            int next = min({next2, next3, next5});
            uglies[i] = next;
            if (next == next2)
                i2++;
            if (next == next3)
                i3++;
            if (next == next5)
                i5++;
        }
        return uglies[n - 1];
    }
};

int main()
{
    Solution sol;
    cout << sol.nthUglyNumber(10) << endl; // Expected: 12
    cout << sol.nthUglyNumber(1) << endl;  // Expected: 1
    return 0;
}