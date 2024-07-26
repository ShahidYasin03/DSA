#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int numberOfPairs(vector<int>& nums1, vector<int>& nums2, int k) {
        int n = nums1.size(), m = nums2.size(), pair = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (nums1[i] % (nums2[j] * k) == 0) {
                    pair++;
                }
            }
        }
        return pair;
    }
};

int main() {
    Solution solution;
    
    // Test case
    vector<int> nums1 = {6, 12, 18};
    vector<int> nums2 = {2, 3};
    int k = 2;
    
    // Expected result: nums1[0] (6) is divisible by nums2[0] * k (4), 
    // nums1[1] (12) is divisible by nums2[0] * k (4), 
    // nums1[2] (18) is divisible by nums2[1] * k (6).
    // Thus, 3 pairs are possible: (6, 2), (12, 2), (18, 3).
    int result = solution.numberOfPairs(nums1, nums2, k);
    
    cout << "Number of pairs: " << result << endl; // Output should be 3
    
    return 0;
}
