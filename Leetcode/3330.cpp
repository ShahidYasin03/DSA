#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    int possibleStringCount(string word) {
        int count = 1;
        int n = word.length();
        for (int i = 0; i < n - 1; i++) {
            if (word[i] == word[i + 1]) {
                count++;
            }
        }
        return count;
    }
};

int main() {
    Solution obj;

    // Test Case 1
    string word1 = "aabbcc";
    int result1 = obj.possibleStringCount(word1);
    cout << "Test Case 1 - Input: " << word1 << ", Output: " << result1 << endl;

    // Test Case 2
    string word2 = "abcde";
    int result2 = obj.possibleStringCount(word2);
    cout << "Test Case 2 - Input: " << word2 << ", Output: " << result2 << endl;

    return 0;
}
