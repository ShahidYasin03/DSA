#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int findMin(vector<int>& nums) {
        int x = 5001;
        for(int i = 0 ; i < nums.size(); i++){
            x = min(x, nums[i]);
        }
        return x;
    }
};


int main() {
    Solution sol;
    vector<int> test1 = {3, 4, 5, 1, 2};
    vector<int> test2 = {11, 13, 15, 17};
    cout << "Test case 1: " << sol.findMin(test1) << endl;
    cout << "Test case 2: " << sol.findMin(test2) << endl;
    return 0;
}