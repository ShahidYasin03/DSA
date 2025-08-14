#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int sum = (n * (n+1)) / 2;
        for(int i = 0; i < n; i++)
        {
            sum -= nums[i];
        }
        return sum;
    }
};

int main() {
    Solution sol;

    vector<int> test1 = {3, 0, 1};
    cout << "Missing number (test1): " << sol.missingNumber(test1) << endl; // Output: 2

    vector<int> test2 = {0, 1};
    cout << "Missing number (test2): " << sol.missingNumber(test2) << endl; // Output: 2

    return 0;
}