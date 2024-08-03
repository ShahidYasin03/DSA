#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
        sort(arr.begin(), arr.end());
        sort(target.begin(), target.end());

        for(int i = 0; i < arr.size(); i++)
        {
            if(arr[i] != target[i])
            {
                return false;
            }
        }
        return true;
    }
};

int main() {
    Solution solution;

    // Test Case 1
    vector<int> target1 = {1, 2, 3, 4};
    vector<int> arr1 = {2, 4, 1, 3};
    cout << (solution.canBeEqual(target1, arr1) ? "true" : "false") << endl; // Expected output: true

    // Test Case 2
    vector<int> target2 = {1, 2, 3, 5};
    vector<int> arr2 = {2, 4, 1, 3};
    cout << (solution.canBeEqual(target2, arr2) ? "true" : "false") << endl; // Expected output: false

    return 0;
}
