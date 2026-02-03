#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    bool isTrionic(vector<int> &nums)
    {
        int i = 0, n = nums.size();
        bool one = false, two = false, three = false;
        while (i < n - 1 && nums[i] < nums[i + 1])
        {
            i++;
            one = true;
        }
        while (i < n - 1 && nums[i] > nums[i + 1])
        {
            i++;
            two = true;
        }
        while (i < n - 1 && nums[i] < nums[i + 1])
        {
            i++;
            three = true;
        }

        return one && two && three && i == n - 1;
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