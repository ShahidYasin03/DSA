#include <iostream>
#include <vector>
#include <map>
using namespace std;

class Solution
{
public:
    int maxBalancedSubarray(vector<int> &nums)
    {
        map<pair<int, int>, int> firstOccur;
        int XOR = 0;
        int diff = 0; 
        int maxLen = 0;

        pair<int, int> mpp = {0, 0};
        firstOccur[mpp] = -1;

        for (int i = 0; i < nums.size(); i++)
        {
            XOR ^= nums[i];

            if (nums[i] % 2 == 0)
            {
                diff++;
            }
            else
            {
                diff--;
            }

            mpp = {XOR, diff};

            if (firstOccur.count(mpp))
            {
                maxLen = max(maxLen, i - firstOccur[mpp]);
            }
            else
            {
                firstOccur[mpp] = i;
            }
        }

        return maxLen;
    }
};

int main()
{
    Solution sol;

    // Test case 1
    vector<int> nums1 = {1, 2, 3, 4};
    cout << "Test 1: " << sol.maxBalancedSubarray(nums1) << endl;

    // Test case 2
    vector<int> nums2 = {2, 4, 6, 8};
    cout << "Test 2: " << sol.maxBalancedSubarray(nums2) << endl;

    return 0;
}