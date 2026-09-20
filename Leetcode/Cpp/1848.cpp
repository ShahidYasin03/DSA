#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
public:
    int getMinDistance(vector<int> &nums, int target, int start)
    {
        int m = nums.size();
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] == target)
            {
                m = min(abs(i - start), m);
            }
        }
        return m;
    }
};

int main()
{
    Solution sol;

    // Test case 1
    vector<int> nums1 = {1, 5, 4, 1, 5};
    int target1 = 5;
    int start1 = 2;
    cout << "Test 1: " << sol.getMinDistance(nums1, target1, start1) << endl;

    // Test case 2
    vector<int> nums2 = {1, 3, 1, 2, 5};
    int target2 = 1;
    int start2 = 1;
    cout << "Test 2: " << sol.getMinDistance(nums2, target2, start2) << endl;

    return 0;
}