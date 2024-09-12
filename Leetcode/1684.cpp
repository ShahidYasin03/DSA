#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>

using namespace std;

class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        unordered_map<char, int> mapy;
        for (int i = 0; i < allowed.length(); i++) {
            mapy[allowed[i]]++;
        }
        int count = 0;
        for (int i = 0; i < words.size(); i++) {
            bool flag = true;
            string s = words[i];
            for (int j = 0; j < s.length(); j++) {
                if (mapy.find(s[j]) == mapy.end()) {
                    flag = false;
                    break;
                }
            }
            if (flag) {
                count++;
            }
        }
        return count;
    }
};

int main() {
    Solution solution;
    
    // Test Case 1
    string allowed1 = "ab";
    vector<string> words1 = {"ad", "bd", "aaab", "baa", "badab"};
    cout << "Test Case 1: " << solution.countConsistentStrings(allowed1, words1) << endl;  // Expected output: 2

    // Test Case 2
    string allowed2 = "abc";
    vector<string> words2 = {"a", "b", "c", "ab", "ac", "bc", "abc", "abcd"};
    cout << "Test Case 2: " << solution.countConsistentStrings(allowed2, words2) << endl;  // Expected output: 7

    return 0;
}
