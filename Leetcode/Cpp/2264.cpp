#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Solution {
public:
    string largestGoodInteger(string num) {
        string ans = "";
        for (int i = 0; i <= num.size() - 3; i++) {
            if (num[i] == num[i+1] && num[i] == num[i+2]) {
                string trip = num.substr(i, 3);
                if (trip > ans) ans = trip;
            }
        }
        return ans;
    }
};



int main() {
    Solution sol;
    vector<string> test_cases = {
        "6777133339",
        "2300019",
        "42352338"
    };
    for (const auto& num : test_cases) {
        cout << "Input: " << num << " -> Output: " << sol.largestGoodInteger(num) << endl;
    }
    return 0;
}