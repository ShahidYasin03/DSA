#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int, int> numMap;  // hashmap to store the index of elements
        for (int i = 0; i < nums.size(); i++) {
            if (numMap.find(nums[i]) != numMap.end()) {
                // If the number is found and the difference between indices is <= k
                if (i - numMap[nums[i]] <= k) {
                    return true;
                }
            }
            // Store or update the index of the current number
            numMap[nums[i]] = i;
        }
        return false;
    }
};

int main()
{
    Solution sol;
    vector<int> x {1, 2, 3, 1, 2, 3};
    cout << sol.containsNearbyDuplicate(x, 3);  // Expected output: 1 (true)
    return 0;
}
