#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

class Solution
{
public:
    int canBeTypedWords(string text, string brokenLetters)
    {
        unordered_map<char, int> mp;
        for (char i : brokenLetters)
        {
            mp[i]++;
        }
        int count = 0;
        bool flag = false;
        for (char i : text)
        {
            if (mp.find(i) != mp.end())
            {
                flag = true;
            }
            if (i == ' ')
            {
                if (!flag)
                    count++;
                flag = false;
            }
        }
        if (!flag)
            count++;
        return count;
    }
};

int main()
{
    Solution sol;
    string text1 = "hello world", broken1 = "ad";
    cout << sol.canBeTypedWords(text1, broken1) << endl; // Output: 1

    string text2 = "leet code", broken2 = "e";
    cout << sol.canBeTypedWords(text2, broken2) << endl; // Output: 0

    return 0;
}