#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution
{
public:
    bool checkSubarraySum(vector<int> &nums, int k)
    {
        int n = nums.size();
        unordered_map<int, int> mp;
        mp[0] = -1; 
        int sum = 0;

        for (int i = 0; i < n; i++)
        {
            sum += nums[i];
            int remain = sum % k;
            if (remain < 0) remain += k;

            if (mp.find(remain) != mp.end())
            {
                if (i - mp[remain] > 1) 
                    return true;
            }
            else
            {
                mp[remain] = i; 
            }
        }
        return false;
    }
};


int main()
{
    Solution solution;

    // Test case 1
    vector<int> nums1 = {23, 2, 4, 6, 6};
    int k1 = 7;
    cout << "Test case 1: " << (solution.checkSubarraySum(nums1, k1) ? "true" : "false") << endl;
    // Expected output: true

    // Test case 2
    vector<int> nums2 = {23, 2, 6, 4, 7};
    int k2 = 13;
    cout << "Test case 2: " << (solution.checkSubarraySum(nums2, k2) ? "true" : "false") << endl;
    // Expected output: false

    return 0;
}
