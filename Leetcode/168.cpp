#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

class Solution {
public:
    string convertToTitle(int columnNumber) {
        string ans = "";
        while(columnNumber > 0) {
            int digit = (columnNumber - 1) % 26;
            ans += char(digit + 'A');
            columnNumber = (columnNumber - 1) / 26;
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};

int main() {
    Solution solution;

    // Test case 1
    int columnNumber1 = 28;
    string result1 = solution.convertToTitle(columnNumber1);
    cout << "Column number " << columnNumber1 << " -> " << result1 << endl;  // Expected output: "AB"

    // Test case 2
    int columnNumber2 = 701;
    string result2 = solution.convertToTitle(columnNumber2);
    cout << "Column number " << columnNumber2 << " -> " << result2 << endl;  // Expected output: "ZY"

    return 0;
}
