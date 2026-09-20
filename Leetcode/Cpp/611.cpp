#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
public:
    int triangleNumber(vector<int> &nums)
    {
        int n = nums.size();
        int count = 0;
        sort(nums.begin(), nums.end());
        for (int i = n - 1; i >= 2; i--)
        {
            int left = 0, right = i - 1;
            while (left < right)
            {
                if (nums[left] + nums[right] > nums[i])
                {
                    count += right - left;
                    right--;
                }
                else
                {
                    left++;
                }
            }
        }
        return count;
    }
};

int main()
{
    Solution sol;

    vector<int> test1 = {2, 2, 3, 4};
    cout << "Test 1: " << sol.triangleNumber(test1) << endl; // Expected: 3

    vector<int> test2 = {4, 2, 3, 4};
    cout << "Test 2: " << sol.triangleNumber(test2) << endl; // Expected: 4

    return 0;
}