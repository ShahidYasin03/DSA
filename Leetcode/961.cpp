#include <iostream>
#include <vector>
#include <set>
using namespace std;

class Solution
{
public:
    int repeatedNTimes(vector<int> &nums)
    {
        set<int> newSet;
        for (int i = 0; i < nums.size(); i++)
        {
            if (newSet.empty() || newSet.find(nums[i]) == newSet.end())
            {
                newSet.insert(nums[i]);
            }
            else
            {
                return nums[i];
            }
        }
        return -1;
    }
};

int main()
{
    Solution sol;

    // Test case 1
    vector<int> nums1 = {1, 2, 3, 3};
    cout << "Test case 1: " << sol.repeatedNTimes(nums1) << endl;

    // Test case 2
    vector<int> nums2 = {2, 1, 2, 5, 3, 2};
    cout << "Test case 2: " << sol.repeatedNTimes(nums2) << endl;

    return 0;
}