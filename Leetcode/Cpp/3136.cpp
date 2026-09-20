#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    bool checkVowel(char c) {
        if (c == 'a' || c == 'A' || c == 'e' || c == 'E' || c == 'i' ||
            c == 'I' || c == 'o' || c == 'O' || c == 'u' || c == 'U') {
            return true;
        } else {
            return false;
        }
    }
    bool cons(char c) {
        if (checkVowel(c)) {
            return false;
        } else {
            return true;
        }
    }
    bool isValid(string word) {
        int n = word.length();
        if (n < 3) return false;
        int count = 0;
        int count2 = 0;
        for (int i = 0; i < n; i++) {
            if (isdigit(word[i])) {
                continue;
            } else if (isupper(word[i]) || islower(word[i])) {
                if (checkVowel(word[i])) {
                    count++;
                }
                if (cons(word[i])) {
                    count2++;
                }
            } else {
                return false;
            }
        }
        return (count >= 1 && count2 >= 1);
    }
};

int main() {
    Solution sol;

    // Test case 1
    string word1 = "Hello";
    cout << word1 << " -> " << (sol.isValid(word1) ? "Valid" : "Invalid") << endl;

    // Test case 2
    string word2 = "AEI";
    cout << word2 << " -> " << (sol.isValid(word2) ? "Valid" : "Invalid") << endl;

    // Test case 3
    string word3 = "Ab1";
    cout << word3 << " -> " << (sol.isValid(word3) ? "Valid" : "Invalid") << endl;

    return 0;
}
