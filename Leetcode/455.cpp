#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
public:
    int findContentChildren(vector<int> &g, vector<int> &s)
    {
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());
        int i = 0, j = 0, count = 0;
        while (i < g.size() && j < s.size())
        {
            if (s[j] >= g[i])
            {
                count++;
                i++;
            }
            j++;
        }
        return count;
    }
};

int main()
{
    Solution sol;
    vector<int> g1 = {1, 2, 3};
    vector<int> s1 = {1, 1};
    cout << "Test case 1: " << sol.findContentChildren(g1, s1) << endl;

    vector<int> g2 = {1, 2};
    vector<int> s2 = {1, 2, 3};
    cout << "Test case 2: " << sol.findContentChildren(g2, s2) << endl;

    return 0;
}