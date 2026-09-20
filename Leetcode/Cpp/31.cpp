#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
public:
    void nextPermutation(vector<int> &nums)
    {
        int found = -1;
        int n = nums.size();
        for (int i = n - 2; i >= 0; i--)
        {
            if (nums[i] < nums[i + 1])
            {
                found = i;
                break;
            }
        }
        if (found != -1)
        {
            for (int i = n - 1; i > found; i--)
            {
                if (nums[i] > nums[found])
                {
                    swap(nums[i], nums[found]);
                    break;
                }
            }
        }
        reverse(nums.begin() + found + 1, nums.end());
    }
};

int main()
{
    Solution sol;

    vector<int> nums1 = {1, 2, 3};
    sol.nextPermutation(nums1);
    for (int num : nums1)
        cout << num << " ";
    cout << endl;

    vector<int> nums2 = {3, 2, 1};
    sol.nextPermutation(nums2);
    for (int num : nums2)
        cout << num << " ";
    cout << endl;

    return 0;
}