#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> sortArrayByParity(vector<int> &nums)
    {
        int st = 0, en = nums.size() - 1;

        while (st < en)
        {
            if (nums[st] % 2 == 0)
            {
                st++;
            }
            if (nums[en] % 2 != 0)
            {
                en--;
            }
            else
            {
                if (nums[st] % 2 != 0 && nums[en] % 2 == 0)
                {
                    swap(nums[st], nums[en]);
                    st++;
                    en--;
                }
            }
        }
        return nums;
    }
};

int main()
{
    Solution sol;

    // Test case 1
    vector<int> nums1 = {3, 1, 2, 4};
    vector<int> result1 = sol.sortArrayByParity(nums1);
    cout << "Test case 1: ";
    for (int num : result1)
    {
        cout << num << " ";
    }
    cout << endl;

    // Test case 2
    vector<int> nums2 = {0, 1};
    vector<int> result2 = sol.sortArrayByParity(nums2);
    cout << "Test case 2: ";
    for (int num : result2)
    {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}