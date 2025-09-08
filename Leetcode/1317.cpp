#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution
{
public:
    bool zeroCheck(string s)
    {
        for (char i : s)
        {
            if (i == '0')
                return false;
        }
        return true;
    }
    vector<int> getNoZeroIntegers(int n)
    {
        int i = 1, j = n - 1;
        while (i <= j)
        {
            if (i + j == n && (zeroCheck(to_string(i)) && zeroCheck(to_string(j))))
            {
                return {i, j};
            }
            else if (i + j < n)
            {
                i++;
            }
            else
            {
                j--;
            }
        }
        return {-1, -1};
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