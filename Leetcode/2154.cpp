#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int findFinalValue(vector<int> &nums, int original)
    {
        int n = nums.size();
        for (int i = 0; i < n; i++)
        {
            if (nums[i] == original)
            {
                original *= 2;
                i = -1;
            }
        }
        return original;
    }
};

int main()
{
    Solution sol;

    // Test case 1
    vector<int> nums1 = {5, 3, 6, 1, 12};
    int original1 = 3;
    cout << "Result 1: " << sol.findFinalValue(nums1, original1) << "\n"; // expected 24

    // Test case 2
    vector<int> nums2 = {2, 7, 9};
    int original2 = 4;
    cout << "Result 2: " << sol.findFinalValue(nums2, original2) << "\n"; // expected 4

    return 0;
}