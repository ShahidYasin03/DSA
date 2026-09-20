#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    int compress(vector<char> &chars)
    {
        int n = chars.size();
        if (n < 2)
            return n;
        int idx = 0;
        int count = 1;
        for (int i = 1; i <= n; i++)
        {
            if (i < n && chars[i] == chars[i - 1])
            {
                count++;
            }
            else
            {
                chars[idx++] = chars[i - 1];
                if (count > 1)
                {
                    string s = to_string(count);
                    for (char dig : s)
                    {
                        chars[idx++] = dig;
                    }
                }
                count = 1;
            }
        }
        return idx;
    }
};

// class Solution
// {
// public:
//     int compress(vector<char> &chars)
//     {
//         int idx = 0;
//         int n = chars.size();
//         for (int i = 0; i < n; i++)
//         {
//             char c = chars[i];
//             int count = 0;
//             while (i < n && chars[i] == c)
//             {
//                 count++;
//                 i++;
//             }
//             if (count == 1)
//             {
//                 chars[idx++] = c;
//             }
//             else
//             {
//                 chars[idx++] = c;
//                 string s = to_string(count);
//                 for (char st : s)
//                 {
//                     chars[idx++] = st;
//                 }
//             }
//             i--;
//         }
//         chars.resize(idx);
//         return idx;
//     }
// };

void printVector(const vector<char> &chars, int len)
{
    for (int i = 0; i < len; ++i)
    {
        cout << chars[i] << " ";
    }
    cout << endl;
}

int main()
{
    Solution sol;

    // Test case 1
    vector<char> chars1 = {'a', 'a', 'b', 'b', 'c', 'c', 'c'};
    int len1 = sol.compress(chars1);
    cout << "Test 1 compressed length: " << len1 << endl;
    printVector(chars1, len1);

    // Test case 2
    vector<char> chars2 = {'a'};
    int len2 = sol.compress(chars2);
    cout << "Test 2 compressed length: " << len2 << endl;
    printVector(chars2, len2);

    return 0;
}