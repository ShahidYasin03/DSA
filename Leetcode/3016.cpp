// #include <iostream>
// #include <vector>
// #include <algorithm>

// using namespace std;

// class Solution
// {
// public:
//     int minimumPushes(string word)
//     {
//         int n = word.size();
//         if (n <= 8)
//         {
//             return n;
//         }
//         vector<int> count(26, 0);
//         for (int i = 0; i < n; i++)
//         {
//             // char - 97 = int
//             count[word[i] - 97]++;
//         }
//         sort(count.begin(), count.end(), greater<int>());

//         int keys = 0;
//         for (int i = 0; i < count.size(); i++)
//         {
//             if (count[i] == 0)
//             {
//                 break;
//             }
//             else if (count[i] != 0 && i < 9)
//             {
//                 keys += count[i] * 1;
//             }
//             else if (count[i] != 0 && i < 16)
//             {
//                 keys += count[i] * 2;
//             }
//             else if (count[i] != 0 && i < 24)
//             {
//                 keys += count[i] * 3;
//             }
//             else
//             {
//                 keys += count[i] * 4;
//             }
//         }
//         return keys;
//     }
// };

// int main()
// {
//     string word = "aabbccddeeffgghhiiiiii";
//     // expected output 24
//     Solution sol;
//     int keys = sol.minimumPushes(word);
//     cout << "Keys: " << keys << endl;

//     return 0;
// }

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution
{
public:
    int minimumPushes(string word)
    {
        int n = word.size();
        if (n <= 8)
        {
            return n;
        }

        vector<int> count(26, 0);
        for (char c : word)
        {
            count[c - 'a']++;
        }

        // Debug: Print the frequency of each character before sorting
        // cout << "Frequency before sorting: ";
        // for (int i = 0; i < 26; ++i) {
        //     if (count[i] != 0) {
        //         cout << char('a' + i) << ": " << count[i] << " ";
        //     }
        // }
        // cout << endl;

        sort(count.begin(), count.end(), greater<int>());

        // Debug: Print the sorted frequency
        // cout << "Sorted frequency: ";
        // for (int i = 0; i < 26; ++i) {
        //     if (count[i] != 0) {
        //         cout << count[i] << " ";
        //     }
        // }
        // cout << endl;

        int keys = 0;
        for (int i = 0; i < count.size() && count[i] != 0; i++)
        {
            if (i < 8)
            {
                keys += count[i];
            }
            else if (i < 16)
            {
                keys += count[i] * 2;
            }
            else if (i < 24)
            {
                keys += count[i] * 3;
            }
            else
            {
                keys += count[i] * 4;
            }
        }

        // Debug: Print total key presses
        // cout << "Total key presses: " << keys << endl;

        return keys;
    }
};

int main()
{
    string word = "aabbccddeeffgghhiiiiii";
    // expected output 24
    Solution sol;
    int keys = sol.minimumPushes(word);
    cout << "Keys: " << keys << endl;

    return 0;
}
