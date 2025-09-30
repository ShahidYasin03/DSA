#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
public:
    int largestPerimeter(vector<int> &nums)
    {
        sort(nums.begin(), nums.end());
        for (int i = nums.size() - 1; i > 1; i--)
        {
            if (nums[i - 1] + nums[i - 2] > nums[i])
            {
                return nums[i] + nums[i - 1] + nums[i - 2];
            }
        }
        return 0;
    }
};

int main()
{
    Solution sol;
    vector<int> test1 = {2, 1, 2};
    vector<int> test2 = {1, 2, 1};

    cout << "Test case 1: " << sol.largestPerimeter(test1) << endl;
    cout << "Test case 2: " << sol.largestPerimeter(test2) << endl;

    return 0;
}