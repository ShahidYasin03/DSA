#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int threeSumClosest(vector<int> &nums, int target)
    {
        int n = nums.size();
        if (n < 3)
            return 0;

        sort(nums.begin(), nums.end());
        int ans = nums[0] + nums[1] + nums[2];

        for (int i = 0; i < n - 2; ++i)
        {
            int s = i + 1, e = n - 1;
            while (s < e)
            {
                int sum = nums[i] + nums[s] + nums[e];

                if (abs(sum - target) < abs(ans - target))
                {
                    ans = sum;
                }

                if (sum > target)
                {
                    e--;
                }
                else if (sum < target)
                {
                    s++;
                }
                else
                {
                    return sum;
                }
            }
        }
        return ans;
    }
};

int main()
{
    Solution sol;

    // Test case 1
    vector<int> nums1 = {-1, 2, 1, -4};
    int target1 = 1;
    cout << "Test 1 result: " << sol.threeSumClosest(nums1, target1) << '\n';

    // Test case 2
    vector<int> nums2 = {0, 0, 0};
    int target2 = 1;
    cout << "Test 2 result: " << sol.threeSumClosest(nums2, target2) << '\n';

    return 0;
}