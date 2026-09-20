#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int minRemoval(vector<int> &nums, int k)
    {
        sort(nums.begin(), nums.end());
        int n = nums.size(), ans = n, right = 0;
        for (int left = 0; left < n; left++)
        {
            long limit = (long)nums[left] * k;
            while (right < n && nums[right] <= limit)
            {
                right++;
            }
            ans = min(ans, n - (right - left));
        }
        return ans;
    }
};

int main()
{
    Solution sol;

    // Test case 1
    vector<int> nums1 = {1, 3, 4, 9};
    int k1 = 3;
    cout << "Test Case 1: " << sol.minRemoval(nums1, k1) << endl;

    // Test case 2
    vector<int> nums2 = {1, 2, 3, 4, 5};
    int k2 = 2;
    cout << "Test Case 2: " << sol.minRemoval(nums2, k2) << endl;

    return 0;
}
