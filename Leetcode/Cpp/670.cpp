#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int maximumSwap(int num) {
        string s = to_string(num);
        vector<int> last(10, 0);
        for (int i = 0; i < s.size(); i++) {
            last[s[i] - '0'] = i;
        }
        for (int i = 0; i < s.size(); i++) {
            int curr = s[i] - '0';
            for (int d = 9; d > curr; d--) {
                if (last[d] > i) {
                    swap(s[i], s[last[d]]);
                    return stoi(s);
                }
            }
        }
        return num;
    }
};

int main()
{
    Solution sol;

    // Test case 1: 2736 -> 7236
    int result1 = sol.maximumSwap(2736);
    cout << "Test 1: maximumSwap(2736) = " << result1 << " (expected: 7236)" << endl;

    // Test case 2: 9 -> 9 (single digit, no swap possible)
    int result2 = sol.maximumSwap(9);
    cout << "Test 2: maximumSwap(9) = " << result2 << " (expected: 9)" << endl;

    return 0;
}