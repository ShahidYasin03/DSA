#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    bool isTrionic(vector<int> &nums)
    {
        int i = 0, count = 0, n = nums.size();
        while (i < n - 1 && nums[i] < nums[i + 1])
        {
            i++;
            if (count == 0)
            {
                count = 1;
            }
        }
        while (i < n - 1 && nums[i] > nums[i + 1])
        {
            i++;
            if (count == 1)
            {
                count = 2;
            }
        }
        while (i < n - 1 && nums[i] < nums[i + 1])
        {
            i++;
            if (count == 2)
            {
                count = 3;
            }
        }

        return count == 3;
    }
};

int main()
{
    Solution sol;

    // Test case 1
    vector<int> nums1 = {1, 3, 5, 4, 2, 6};
    cout << "Test 1: " << (sol.isTrionic(nums1) ? "true" : "false") << endl;

    // Test case 2
    vector<int> nums2 = {1, 2, 3, 4};
    cout << "Test 2: " << (sol.isTrionic(nums2) ? "true" : "false") << endl;

    return 0;
}