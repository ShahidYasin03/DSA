#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

class Solution {
public:
    int areaOfMaxDiagonal(vector<vector<int>>& dimensions) {
        int width = 0, length = 0;
        float mx = 0;
        int area = 0;
        for(int i = 0; i < dimensions.size(); i++)
        {
            length = dimensions[i][0];
            width = dimensions[i][1];
            int temp = (length * length) + (width * width);
            int currentArea = length * width;

            if(temp > mx || (temp == mx && currentArea > area))
            {
                mx = temp;
                area = currentArea;
            }
        }
        return area;
    }
};


int main() {
    Solution sol;
    vector<vector<int>> test1 = {{10,3}, {5,9}, {8,3}};
    vector<vector<int>> test2 = {{1, 1}, {2, 2}, {3, 3}};
    cout << sol.areaOfMaxDiagonal(test1) << endl; // Output: 45
    cout << sol.areaOfMaxDiagonal(test2) << endl; // Output: 9
    return 0;
}