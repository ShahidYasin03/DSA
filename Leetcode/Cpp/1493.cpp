#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int left = 0, right = 0, maxi = 0;
        bool hasZero = false;

        for (int num : nums) {
            if (num == 1) {
                right++;
            } else {
                hasZero = true;
                maxi = max(maxi, left + right);
                left = right;   // shift window
                right = 0;      // reset
            }
        }

        // final merge at the end
        maxi = max(maxi, left + right);

        // if no zero, must delete one element
        if (!hasZero) return nums.size() - 1;

        return maxi;
    }
};




int main()
{
    Solution sol;
    vector<int> test1 = {1, 1, 0, 1};
    vector<int> test2 = {0, 1, 1, 1, 0, 1, 1, 0, 1};
    cout << "Test case 1: " << sol.longestSubarray(test1) << endl;
    cout << "Test case 2: " << sol.longestSubarray(test2) << endl;
    return 0;
}