#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
public:
    int maximumSwap(int num)
    {
        vector<int> temp;
        int tempNum = num;
        while (num)
        {
            temp.push_back(num % 10);
            num /= 10;
        }
        reverse(temp.begin(), temp.end());
        int n = temp.size();
        vector<int> last(10, -1);
        for (int i = 0; i < n; i++)
        {
            last[temp[i]] = i;
        }
        for (int i = 0; i < n; i++)
        {
            int curr = temp[i];
            for (int d = 9; d > curr; d--)
            {
                if (last[d] > i)
                {
                    int j = last[d];
                    int t = temp[i];
                    temp[i] = temp[j];
                    temp[j] = t;

                    int ans = 0;
                    for (int k = 0; k < n; k++)
                    {
                        ans = ans * 10 + temp[k];
                    }
                    return ans;
                }
            }
        }

        return tempNum;
    }
};

int main()
{
    Solution sol;

    // Test case 1: 2736 -> 7236
    int result1 = sol.maximumSwap(2736);
    cout << "Test 1: maximumSwap(2736) = " << result1 << " (expected: 7236)" << endl;

    // Test case 2: 9 -> 9 (single digit, no swap possible)
    int result2 = sol.maximumSwap(9);
    cout << "Test 2: maximumSwap(9) = " << result2 << " (expected: 9)" << endl;

    return 0;
}