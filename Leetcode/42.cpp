#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

class Solution {
public:
    int trap(vector<int>& heights) {
        int n = heights.size();
        vector<int> leftMax(n);
        vector<int> rightMax(n);
        
        // Initializing leftMax and rightMax arrays
        leftMax[0] = INT_MIN;
        for (int i = 1; i < n; i++) {
            leftMax[i] = max(leftMax[i - 1], heights[i - 1]);
        }
        rightMax[n - 1] = INT_MIN;
        for (int i = n - 2; i >= 0; i--) {
            rightMax[i] = max(rightMax[i + 1], heights[i + 1]);
        }
        
        // Calculating trapped water
        int maxWater = 0;
        for (int i = 1; i < n - 1; i++) {
            int mini = min(rightMax[i], leftMax[i]);
            int water = mini - heights[i];
            if (water > 0) {
                maxWater += water;
            }
        }
        return maxWater;
    }
};

int main() {
    Solution solution;
    
    // Test case 1
    vector<int> heights1 = {0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1};
    int result1 = solution.trap(heights1);
    cout << "Trapped water for test case 1: " << result1 << endl; // Expected output: 6

    // Test case 2
    vector<int> heights2 = {4, 2, 0, 3, 2, 5};
    int result2 = solution.trap(heights2);
    cout << "Trapped water for test case 2: " << result2 << endl; // Expected output: 9
    
    return 0;
}
