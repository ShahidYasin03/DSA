#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    vector<int> constructTransformedArray(vector<int> &nums)
    {
        vector<int> result;
        int n = nums.size();
        for (int i = 0; i < n; i++)
        {
            if (nums[i] > 0)
            {
                int idx = (i + nums[i]) % n;
                result.push_back(nums[idx]);
            }
            else if (nums[i] < 0)
            {
                int idx = i + nums[i] % n;
                if (idx < 0)
                {
                    idx = n + idx;
                }
                result.push_back(nums[idx]);
            }
            else
            {
                result.push_back(nums[i]);
            }
        }
        return result;
    }
};

// 0 - 1

int main()
{
    Solution sol;

    // Test case 1
    vector<int> test1 = {-1, 4, -1}; // -1,-1,4
    vector<int> result1 = sol.constructTransformedArray(test1);
    cout << "Test case 1: ";
    for (int num : result1)
    {
        cout << num << " ";
    }
    cout << endl;

    // Test case 2
    vector<int> test2 = {2, -1, 3};
    vector<int> result2 = sol.constructTransformedArray(test2);
    cout << "Test case 2: ";
    for (int num : result2)
    {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}