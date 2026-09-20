#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    double maxAverageRatio(vector<vector<int>>& classes, int extraStudents) {
        
    }
};


int main() {
    Solution sol;
    vector<vector<int>> classes1 = {{1,2},{3,5},{2,2}}; // 0.78333
    int extraStudents1 = 2;
    cout << sol.maxAverageRatio(classes1, extraStudents1) << endl;

    vector<vector<int>> classes2 = {{2,4},{3,9},{4,5},{2,10}}; // 0.53485     -----   0.5,  0.333333,   0.8,    0.2
    // In second Test Case:
    // Class 1 gets 2 students,
    // Class 2 gets 1,
    // Class 3 gets 0,
    // Class 4 gets 1.


    int extraStudents2 = 4;
    cout << sol.maxAverageRatio(classes2, extraStudents2) << endl;

    return 0;
}