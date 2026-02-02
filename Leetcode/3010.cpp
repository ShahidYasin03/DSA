#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    int minimumCost(vector<int> &nums)
    {
        int sum = nums[0];
        int m1 = 100, m2 = 100;
        for (int i = 1; i < nums.size(); i++)
        {
            if (nums[i] < m1)
            {
                m2 = m1;
                m1 = nums[i];
            }
            else if (nums[i] < m2)
            {
                m2 = nums[i];
            }
        }
        return sum + m1 + m2;
    }
};

int main()
{
    Solution solution;

    // Test case 1
    vector<int> nums1 = {1, 2, 3, 12};
    cout << "Test case 1: " << solution.minimumCost(nums1) << endl;

    // Test case 2
    vector<int> nums2 = {5, 4, 3, 2, 1};
    cout << "Test case 2: " << solution.minimumCost(nums2) << endl;

    return 0;
}