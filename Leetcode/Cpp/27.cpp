#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    int removeElement(vector<int> &nums, int val)
    {
        int end = nums.size() - 1;
        int ele = 0;
        int i = 0;
        while (i <= end)
        {
            if (nums[end] == val)
            {
                end--;
                ele++;
                continue;
            }
            if (nums[i] == val)
            {
                ele++;
                swap(nums[i], nums[end]);
                end--;
            }
            i++;
        }

        return nums.size() - ele;
    }
};

int main()
{
    Solution sol;

    vector<int> nums1 = {3, 2, 2, 3};
    int val1 = 3;
    int res1 = sol.removeElement(nums1, val1);
    cout << "Result 1: " << res1 << endl;
    for (int i = 0; i < res1; i++)
    {
        cout << nums1[i] << "   ";
    }
    cout << endl;

    vector<int> nums2 = {0, 1, 2, 2, 3, 0, 4, 2};
    int val2 = 2;
    int res2 = sol.removeElement(nums2, val2);
    cout << "Result 2: " << res2 << endl;
    for (int i = 0; i < res2; i++)
    {
        cout << nums2[i] << "   ";
    }
    cout << endl;

    return 0;
}