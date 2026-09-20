#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution
{
public:
    bool zeroCheck(int n)
    {
        while (n)
        {
            if (n % 10 == 0)
            {
                return false;
            }
            n /= 10;
        }
        return true;
    }
    vector<int> getNoZeroIntegers(int n)
    {
        for (int i = 1; i < n; i++)
        {
            int j = n - i;
            if (zeroCheck(i) && zeroCheck(j))
            {
                return {i, j};
            }
        }
        return {};
    }
};

int main()
{
    Solution sol;
    vector<int> res1 = sol.getNoZeroIntegers(11);
    cout << "Test case 1 (n=11): " << res1[0] << ", " << res1[1] << endl;

    vector<int> res2 = sol.getNoZeroIntegers(1010);
    cout << "Test case 2 (n=1010): " << res2[0] << ", " << res2[1] << endl;

    return 0;
}