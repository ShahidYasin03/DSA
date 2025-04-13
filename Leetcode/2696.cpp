#include <iostream>
#include <string>
#include <stack>
using namespace std;

// class Solution {
// public:
//     int minLength(string s) {
//         stack<char> stk;

//         for (char c : s) {
//             // Check for pairs to remove
//             if (!stk.empty() && ((stk.top() == 'A' && c == 'B') || (stk.top() == 'C' && c == 'D'))) {
//                 stk.pop(); // Remove the top element (the first character of the pair)
//             } else {
//                 stk.push(c); // Add the current character to the stack
//             }
//         }

//         return stk.size(); // The size of the stack is the length of the reduced string
//     }
// };


class Solution {
public:
    int minLength(string s) {
        int i = 0;
        while (i < s.length() - 1) {
            if ((s[i] == 'A' && s[i + 1] == 'B') || (s[i] == 'C' && s[i + 1] == 'D')) {
                s.erase(i, 2);
                // Move back one position if not at the start
                i = max(0, i - 1);
            } else {
                i++;
            }
        }
        return s.length();
    }
};

int main()
{
    Solution sol;
    cout << sol.minLength("CCCCDDDD") << endl;
    return 0;
}