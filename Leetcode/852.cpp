#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        for(int i = 0; i < arr.size()-1; i++)
        {
            if(arr[i] > arr[i+1]) return i;
        }
        return -1;
        
    }
};


int main() {
    Solution sol;
    vector<int> test1 = {0, 2, 1, 0};
    vector<int> test2 = {1, 3, 5, 4, 2};
    cout << "Test 1 Peak Index: " << sol.peakIndexInMountainArray(test1) << endl;
    cout << "Test 2 Peak Index: " << sol.peakIndexInMountainArray(test2) << endl;
    return 0;
}