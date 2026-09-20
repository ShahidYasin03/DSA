#include <iostream>
#include <string>
using namespace std;

class Solution
{
public:
    bool isVowel(char ch)
    {
        ch = tolower(ch);
        return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
    }

    bool doesAliceWin(string s)
    {
        for (char c : s)
        {
            if (isVowel(c))
                return true;
        }
        return false;
    }
};

int main()
{
    Solution sol;
    string test1 = "hello";
    string test2 = "rhythm";

    cout << "Test 1: " << (sol.doesAliceWin(test1) ? "Alice wins" : "Alice loses") << endl;
    cout << "Test 2: " << (sol.doesAliceWin(test2) ? "Alice wins" : "Alice loses") << endl;

    return 0;
}