#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    bool isTrionic(vector<int> &nums)
    {
        bool one = false, two = false, three = false;
        for (int i = 0; i < nums.size() - 1; i++)
        {
            if (nums[i] > nums[i + 1])
            {
                one = true;
            }
            else if (nums[i] < nums[i + 1])
            {
                one = false;
            }
        }
        return one;
    }
};

int main()
{
    Solution sol;

    // Test case 1
    vector<int> nums1 = {1,3,5,4,2,6};
    cout << "Test 1: " << (sol.isTrionic(nums1) ? "true" : "false") << endl;

    // Test case 2
    vector<int> nums2 = {1, 2, 3, 4};
    cout << "Test 2: " << (sol.isTrionic(nums2) ? "true" : "false") << endl;

    return 0;
}