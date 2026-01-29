#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

class Solution
{
public:
    int minSubArrayLen(int target, vector<int> &nums)
    {
        int ans = INT_MAX;
        int res = 0;
        int n = nums.size();
        int l = 0;
        for (int r = 0; r < n; r++)
        {
            res += nums[r];
            while (res >= target)
            {
                ans = min(r - l + 1, ans);
                res -= nums[l];
                l++;
            }
        }
        if (ans > n)
            return 0;
        return ans;
    }
};

int main()
{
    Solution sol;

    // Test case 1
    vector<int> nums1 = {2, 3, 1, 2, 4, 3};
    int target1 = 7;
    cout << "Test case 1: " << sol.minSubArrayLen(target1, nums1) << endl;

    // Test case 2
    vector<int> nums2 = {1, 4, 4};
    int target2 = 4;
    cout << "Test case 2: " << sol.minSubArrayLen(target2, nums2) << endl;

    return 0;
}