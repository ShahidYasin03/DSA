#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
public:
    int minSteps(string s, string t)
    {
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        int count = 0;
        vector<int> vec1(26, 0);
        vector<int> vec2(26, 0);
        for (int i = 0; i < s.length(); i++)
        {
            vec1[s[i] - 'a']++;
            vec2[t[i] - 'a']++;
        }
        for (int i = 0; i < 26; i++)
        {
            if (vec2[i] < vec1[i])
            {
                count += vec1[i] - vec2[i];
            }
        }
        return count;
    }
};

int main()
{
    Solution sol;

    // Test case 1
    string s1 = "bab", t1 = "aaab";
    cout << "Test 1: " << sol.minSteps(s1, t1) << endl;

    // Test case 2
    string s2 = "leetcode", t2 = "practice";
    cout << "Test 2: " << sol.minSteps(s2, t2) << endl;

    return 0;
}