#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        vector<int> num = nums; // Copy the original array
        sort(num.begin(), num.end()); // Sort the array for binary search
        int x = -1, y = -1;
        // Find two numbers whose sum equals the target
        for (int i = 0; i < num.size() - 1; i++)
        {
            int j = i + 1;
            int end = num.size() - 1;
            while (j <= end)
            {
                int mid = (j + end) / 2;
                if (num[i] + num[mid] == target)
                {
                    x = num[i]; // Store the numbers found
                    y = num[mid];
                    break; // Break out of the loop if found
                }
                else if (num[i] + num[mid] < target)
                {
                    j = mid + 1;
                }
                else
                {
                    end = mid - 1; // Correct update for the `end` index
                }
            }
            if (x != -1 && y != -1) // Exit the loop early once pair is found
                break;
        }

        // Finding the original indices of the two numbers in the original array
        int et = -1, ed = -1;
        for (int i = 0; i < nums.size(); i++)
        {
            if (x == nums[i] && et == -1)
            {
                et = i; // First occurrence of x
            }
            else if (y == nums[i] && ed == -1)
            {
                ed = i; // First occurrence of y
            }
        }
        return {et, ed};
    }
};

int main()
{
    vector<int> x{3, 2, 4, 7, 9};

    Solution sol;
    vector<int> ans = sol.twoSum(x, 9);

    cout << ans[0] << ", " << ans[1] << endl;

    return 0;
}
