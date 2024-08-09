#include <iostream>
#include <vector>

using namespace std;

auto init = []() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 'c';
}();

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int s = 0, e = nums.size() - 1;
        while (s <= e) {
            int mid = (s + e) / 2;
            if (nums[mid] == target) {
                return mid;
            } else if (nums[mid] > target) {
                e = mid - 1;
            } else {
                s = mid + 1;
            }
        }
        return -1;
    }
};

int main() {
    // Test Case 1: Target Found in Array
    vector<int> nums1 = {-10, -3, 0, 5, 9};
    int target1 = 5;
    Solution sol1;
    int result1 = sol1.search(nums1, target1);
    cout << "Test Case 1: Expected output = 3, Actual output = " << result1 << endl;

    // Test Case 2: Target Not Found in Array
    vector<int> nums2 = {1, 2, 3, 4, 5, 6, 7};
    int target2 = 8;
    Solution sol2;
    int result2 = sol2.search(nums2, target2);
    cout << "Test Case 2: Expected output = -1, Actual output = " << result2 << endl;

    return 0;
}
