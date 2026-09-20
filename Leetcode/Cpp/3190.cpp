#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int count = 0;
        int n = nums.size();
        for(int i = 0; i < n; i++)
        {
            if(nums[i] % 3 != 0)
            {
                count++;
            }
        }
        return count;
    }
};

int main() {
    // Create an instance of the Solution class
    Solution solution;

    // Test case 1
    vector<int> nums1 = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int result1 = solution.minimumOperations(nums1);
    cout << "Test Case 1: " << result1 << endl; // Expected output: 6

    // Test case 2
    vector<int> nums2 = {3, 6, 9, 12, 15};
    int result2 = solution.minimumOperations(nums2);
    cout << "Test Case 2: " << result2 << endl; // Expected output: 0


    return 0;
}
