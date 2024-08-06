#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int minimumPushes(string word) {
        int n = word.size();
        if (n <= 8) {
            return n;
        }

        vector<int> count(26, 0);
        for (char c : word) {
            count[c - 'a']++;
        }

        sort(count.begin(), count.end(), greater<int>());

        int keys = 0;
        for (int i = 0; i < count.size() && count[i] != 0; i++) {
            if (i < 8) {
                keys += count[i];
            } else if (i < 15) {
                keys += count[i] * 2;
            } else if (i < 23) {
                keys += count[i] * 3;
            } else {
                keys += count[i] * 4;
            }
        }

        return keys;
    }
};

void runTestCases() {
    Solution sol;

    vector<string> testCases = {
        "aabbccddeeffgghhiiiiii", // expected output 24
        "abc",                    // expected output 3
        "abcdefgh",               // expected output 8
        "abcdefghij",             // expected output 11
        "aaaabbbbccccdddd",       // expected output 16
        "abcabcabcabcabcabcabc",  // expected output 26
        "zzzzzzzzzzzzzzzzzzzzzzzz", // expected output 47
        "aabbccddeeffgghhiijjkkllmmnnooppqq", // expected output 54
        "abcdefghijklmnopqrstuvwxyz", // expected output 53
        "aabbccddeeffgghhiijjkkllmmnnooppqqrrsstt", // expected output 60
    };

    for (const string& testCase : testCases) {
        int keys = sol.minimumPushes(testCase);
        cout << "Word: " << testCase << ", Keys: " << keys << endl;
    }
}

int main() {
    runTestCases();
    return 0;
}
