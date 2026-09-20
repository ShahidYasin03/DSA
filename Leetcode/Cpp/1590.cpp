#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
public:
    int minSubarray(vector<int> &nums, int p)
    {
        long long sum = 0;
        int n = nums.size();
        for (int i = 0; i < n; i++)
        {
            sum += nums[i];
        }
        if (sum % p == 0)
            return 0;
        int len = n;
        for (int i = 0; i < n; i++)
        {
            long long currSum = 0;
            for (int j = i; j < n; j++)
            {
                currSum += nums[j];
                if ((sum - currSum) % p == 0)
                {
                    int currLen = j - i + 1;
                    len = min(len, currLen);
                    // return j - i;
                }
            }
        }
        if (len == n)
            return -1;
        return len;
    }
};

int main()
{
    Solution sol;

    // Test case 1 expected = 7
    vector<int> nums1 = {8, 32, 31, 18, 34, 20, 21, 13, 1, 27, 23, 22, 11, 15, 30, 4, 2};
    int p1 = 148;
    cout << "Test 1: " << sol.minSubarray(nums1, p1) << endl;

    // Test case 2
    vector<int> nums2 = {6, 3, 5, 2};
    int p2 = 9;
    cout << "Test 2: " << sol.minSubarray(nums2, p2) << endl;

    return 0;
}