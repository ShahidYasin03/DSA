#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) return false;
        vector<int> abc(26, 0);
        for (int i = 0; i < s.length(); i++) {
            abc[s[i] - 'a']++;
        }
        for (int i = 0; i < s.length(); i++) {
            abc[t[i] - 'a']--;
            if (abc[t[i] - 'a'] < 0) {
                return false;
            }
        }
        return true;
    }
};

int main() {
    Solution solution;

    // Test case 1
    string s1 = "anagram";
    string t1 = "nagaram";
    cout << "Test case 1: " << (solution.isAnagram(s1, t1) ? "True" : "False") << endl;

    // Test case 2
    string s2 = "rat";
    string t2 = "car";
    cout << "Test case 2: " << (solution.isAnagram(s2, t2) ? "True" : "False") << endl;

    return 0;
}
