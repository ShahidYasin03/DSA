#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int findPeakElement(vector<int>& arr) {
        int s = 0;
        int e = arr.size()-1;
        while(s < e)
        {
            int mid = s + (e-s)/2;
            if(arr[mid] > arr[mid + 1])
            {
                e = mid;
            }else {
                s = mid+1;
            }
        }
        return s;
    }
};


int main() {
    Solution sol;
    vector<int> test1 = {1, 2, 3, 1};
    vector<int> test2 = {1, 2, 1, 3, 5, 6, 4};

    cout << "Peak index in test1: " << sol.findPeakElement(test1) << endl;
    cout << "Peak index in test2: " << sol.findPeakElement(test2) << endl;

    return 0;
}