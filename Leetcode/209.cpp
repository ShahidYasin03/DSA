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
        int n = nums.size();
        for (int i = 0; i < n; i++)
        {
            int len = 0;
            int sum = 0;
            for (int j = i; j < n; j++)
            {
                sum += nums[j];
                if (sum >= target)
                {
                    len = j - i + 1;
                    ans = min(ans, len);
                    break;
                }
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