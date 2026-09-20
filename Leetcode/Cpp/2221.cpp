#include <iostream>
#include <vector>
using namespace std;

// class Solution
// {
// public:
//     int triangularSum(vector<int> &nums)
//     {
//         while (nums.size() != 1)
//         {
//             vector<int> temp;
//             for (int i = 0; i < nums.size() - 1; i++)
//             {
//                 int sum = nums[i] + nums[i + 1];
//                 temp.push_back(sum % 10);
//             }
//             nums = temp;
//         }
//         return nums[0];
//     }
// };

class Solution
{
public:
    int triangularSum(vector<int> &nums)
    {
        int n = nums.size();
        for (int len = n; len > 1; len--)
        {
            for (int i = 0; i < len - 1; i++)
            {
                nums[i] = (nums[i] + nums[i + 1]) % 10;
            }
        }
        return nums[0];
    }
};

int main()
{
    Solution sol;

    vector<int> test1 = {1, 2, 3, 4, 5};
    cout << "Test 1: " << sol.triangularSum(test1) << endl; // Expected output: 8

    vector<int> test2 = {5, 6, 7, 8, 9};
    cout << "Test 2: " << sol.triangularSum(test2) << endl; // Expected output: 2

    return 0;
}