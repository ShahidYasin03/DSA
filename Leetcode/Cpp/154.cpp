#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    int findMin(vector<int> &nums)
    {
        int l = 0;
        int r = nums.size() - 1;
        int ans = 5001;
        while (l <= r)
        {
            if (nums[l] == nums[r])
            {
                ans = min(ans, nums[l]);
                l++;
                r--;
                continue;
            }
            int mid = l + (r - l) / 2;
            if (nums[l] <= nums[mid])
            {
                ans = min(ans, nums[l]);
                l = mid + 1;
            }
            else
            {
                r = mid - 1;
                ans = min(ans, nums[mid]);
            }
        }
        return ans;
    }
};

int main()
{
    Solution sol;
    vector<int> test1 = {3, 4, 5, 1, 2};
    vector<int> test2 = {2, 2, 2, 0, 1};
    cout << "Test case 1: " << sol.findMin(test1) << endl;
    cout << "Test case 2: " << sol.findMin(test2) << endl;
    return 0;
}