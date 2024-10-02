#include <iostream>
#include <vector>
#include <map>

using namespace std;

class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        map<int, int> x;
        for (int i = 0; i < arr.size(); i++) {
            x[arr[i]] = 0;  // Insert unique elements into the map
        }

        // Assign ranks starting from 1
        int n = 1;
        for (auto& i : x) {
            i.second = n++;
        }

        // Update the original array with the ranks
        for (int i = 0; i < arr.size(); i++) {
            auto it = x.find(arr[i]);
            if (it != x.end()) {
                arr[i] = it->second;  // Replace arr[i] with its rank
            }
        }
        return arr;
    }
};

int main() {
    Solution solution;

    // Test Case 1
    vector<int> arr1 = {40, 10, 20, 30, 20, 10, 50};
    vector<int> result1 = solution.arrayRankTransform(arr1);
    cout << "Test Case 1 Result: ";
    for (int val : result1) {
        cout << val << " ";
    }
    cout << endl;

    // Test Case 2
    vector<int> arr2 = {100, 200, 100, 300, 400};
    vector<int> result2 = solution.arrayRankTransform(arr2);
    cout << "Test Case 2 Result: ";
    for (int val : result2) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}
