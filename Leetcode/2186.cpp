#include <iostream>
#include <vector>
#include <string>
#include <cmath>
using namespace std;

class Solution
{
public:
    int minSteps(string s, string t)
    {
        int count = 0;
        vector<int> vec1(26, 0);
        vector<int> vec2(26, 0);
        for (int i = 0; i < s.length(); i++)
        {
            vec1[s[i] - 'a']++;
        }
        for (int i = 0; i < t.length(); i++)
        {
            vec2[t[i] - 'a']++;
        }
        for (int i = 0; i < 26; i++)
        {
            if (vec2[i] != vec1[i])
            {
                count += abs(vec1[i] - vec2[i]);
            }
        }
        return count;
    }
};

int main()
{
    Solution sol;

    // Test case 1
    string s1 = "leetcode";
    string t1 = "coats";
    cout << "Test 1 - s: " << s1 << ", t: " << t1 << " => " << sol.minSteps(s1, t1) << endl;

    // Test case 2
    string s2 = "hello";
    string t2 = "world";
    cout << "Test 2 - s: " << s2 << ", t: " << t2 << " => " << sol.minSteps(s2, t2) << endl;

    return 0;
}