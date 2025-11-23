#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool divideArray(vector<int> &nums)
    {
        int n = nums.size();
        if (n % 2 != 0)
            return false;
        vector<int> temp(501, 0);
        for (int i = 0; i < n; i++)
        {
            if (temp[nums[i]] == 0)
            {
                temp[nums[i]] += nums[i];
            }
            else
            {
                temp[nums[i]] -= nums[i];
            }
        }
        for (int i = 0; i < 501; i++)
        {
            if (temp[i] != 0)
                return false;
        }
        return true;
    }
};

int main()
{
    Solution sol;
    vector<int> tc1 = {3, 2, 3, 2, 2, 2};
    cout << (sol.divideArray(tc1) ? "true" : "false") << '\n';

    vector<int> tc2 = {1, 2, 3, 4};
    cout << (sol.divideArray(tc2) ? "true" : "false") << '\n';

    return 0;
}