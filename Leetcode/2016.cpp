#include <iostream>
#include <vector>
#include <algorithm> 
using namespace std;

class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int mx = -1;
        int min = nums[0];
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] > min) {
                mx = max(mx, nums[i] - min);
            } else {
                min = nums[i];
            }
        }
        return mx;
    }
};

int main() {
    Solution sol;

    // Test case 1
    vector<int> nums1 = {7, 1, 5, 4};
    cout << "Test Case 1 Result: " << sol.maximumDifference(nums1) << endl; // Expected: 4

    // Test case 2
    vector<int> nums2 = {9, 4, 3, 2};
    cout << "Test Case 2 Result: " << sol.maximumDifference(nums2) << endl; // Expected: -1

    return 0;
}
