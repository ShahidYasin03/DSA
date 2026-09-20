#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int findLucky(vector<int>& arr) {
        vector<int> x(501, 0);
        for(int i = 0; i < arr.size(); i++) {
            x[arr[i]]++;
        } 
        for(int i = 500; i >= 1; i--) {
            if(x[i] == i) {
                return i;
            }
        }
        return -1;
    }
};

int main() {
    Solution sol;

    // Test Case 1: Has a lucky number
    vector<int> test1 = {2, 2, 3, 4};
    cout << "Test Case 1 Output: " << sol.findLucky(test1) << endl;  // Expected: 2

    // Test Case 2: No lucky number
    vector<int> test2 = {1, 2, 2, 3, 3, 3};
    cout << "Test Case 2 Output: " << sol.findLucky(test2) << endl;  // Expected: -1

    return 0;
}
