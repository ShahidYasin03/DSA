#include <iostream>
#include <algorithm>
using namespace std;

class Solution
{
public:
    bool canBeEqual(string s1, string s2)
    {
        string even1 = {s1[0], s1[2]};
        string even2 = {s2[0], s2[2]};
        string odd1 = {s1[1], s1[3]};
        string odd2 = {s2[1], s2[3]};

        sort(even1.begin(), even1.end());
        sort(even2.begin(), even2.end());
        sort(odd1.begin(), odd1.end());
        sort(odd2.begin(), odd2.end());

        return (even1 == even2) && (odd1 == odd2);
    }
};

int main()
{
    Solution solution;

    // Test case 1
    string s1 = "aaaa", s2 = "bbbb";
    cout << (solution.canBeEqual(s1, s2) ? "true" : "false") << endl;

    // Test case 2
    string s3 = "abab", s4 = "baba";
    cout << (solution.canBeEqual(s3, s4) ? "true" : "false") << endl;

    return 0;
}