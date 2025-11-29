#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    int minOperations(vector<int> &nums, int k)
    {
        int sum = 0;
        for (int i : nums)
        {
            sum += i;
        }
        return sum % k;
    }
};

int main()
{
    Solution sol;

    // Test case 1
    vector<int> nums1 = {1, 2, 3, 4, 5};
    int k1 = 3;
    cout << "Test case 1: " << sol.minOperations(nums1, k1) << endl;

    // Test case 2
    vector<int> nums2 = {10, 20, 30};
    int k2 = 7;
    cout << "Test case 2: " << sol.minOperations(nums2, k2) << endl;

    return 0;
}