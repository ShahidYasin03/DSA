#include <iostream>
#include <string>
#include <algorithm> // for std::min

class Solution {
public:
    int minimumDeletions(std::string s) {
        int n = s.length();
        int countMin = n;
        int countRight_a = 0;

        // Count the total number of 'a's in the string
        for(int i = 0; i < n; i++) {
            char curr = s[i];
            if(curr == 'a') countRight_a++;
        }

        int countLeft_b = 0;
        for(int i = 0; i < n; i++) {
            char curr = s[i];
            if(curr == 'a') countRight_a--;

            countMin = std::min(countMin, countRight_a + countLeft_b);

            if(curr == 'b') countLeft_b++;
        }

        return countMin;
    }
};

int main() {
    Solution sol;

    // Test cases
    std::string test1 = "aababb";
    std::cout << "Minimum deletions for " << test1 << ": " << sol.minimumDeletions(test1) << std::endl;

    std::string test2 = "aabbab";
    std::cout << "Minimum deletions for " << test2 << ": " << sol.minimumDeletions(test2) << std::endl;

    std::string test3 = "ababab";
    std::cout << "Minimum deletions for " << test3 << ": " << sol.minimumDeletions(test3) << std::endl; 

    std::string test4 = "bbb";
    std::cout << "Minimum deletions for " << test4 << ": " << sol.minimumDeletions(test4) << std::endl;

    std::string test5 = "aaa";
    std::cout << "Minimum deletions for " << test5 << ": " << sol.minimumDeletions(test5) << std::endl;

    return 0;
}
