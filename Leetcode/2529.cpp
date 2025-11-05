#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int maximumCount(vector<int> &nums)
    {
        int neg = 0, pos = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] == 0)
                continue;
            if (nums[i] < 0)
            {
                neg++;
            }
            else
            {
                pos = nums.size() - i;
                break;
            }
        }
        return (neg > pos) ? neg : pos;
    }
};

int main()
{
    Solution sol;

    vector<int> tc1 = {-2, -1, 0, 1, 2};
    cout << sol.maximumCount(tc1) << '\n'; // expected 2

    vector<int> tc2 = {-3, -2, -1, 0, 0, 1};
    cout << sol.maximumCount(tc2) << '\n'; // expected 3

    return 0;
}