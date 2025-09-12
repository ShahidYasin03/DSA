#include <iostream>
#include <vector>
#include <algorithm>
#include <cctype>
using namespace std;

// -----------------------------Mine-----------------------------------

// class Solution
// {
// public:
//     bool isVowel(char ch)
//     {
//         ch = std::tolower(ch);
//         if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
//         {
//             return true;
//         }
//         else
//         {
//             return false;
//         }
//     }
//     string sortVowels(string s)
//     {
//         vector<char> full;
//         vector<char> vowel;
//         for (char i : s)
//         {
//             if (isVowel(i))
//             {
//                 vowel.push_back(i);
//                 full.push_back('+');
//             }
//             else
//             {
//                 full.push_back(i);
//             }
//         }
//         sort(vowel.begin(), vowel.end());
//         string ans = "";
//         int idx = 0;
//         for (int i = 0; i < full.size(); i++)
//         {
//             if (full[i] == '+')
//             {
//                 ans += vowel[idx++];
//             }
//             else
//             {
//                 ans += full[i];
//             }
//         }
//         return ans;
//     }
// };

// ---------------------------------------GPT--------------------------------------

class Solution
{
public:
    bool isVowel(char ch)
    {
        ch = tolower(ch);
        return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
    }

    string sortVowels(string s)
    {
        vector<char> vowel;
        for (char c : s)
        {
            if (isVowel(c))
                vowel.push_back(c);
        }
        sort(vowel.begin(), vowel.end());
        int idx = 0;
        for (char &c : s)
        {
            if (isVowel(c))
            {
                c = vowel[idx++];
            }
        }
        return s;
    }
};

int main()
{
    Solution sol;
    string test1 = "lEetcOde";
    string test2 = "helloWORLD";
    cout << sol.sortVowels(test1) << endl; // Output: lEOtcede
    cout << sol.sortVowels(test2) << endl; // Output: hEllOWORLD
    return 0;
}