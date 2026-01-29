#include <vector>
#include <string>
#include <iostream>
using namespace std;

class Solution
{
public:
    int minDeletionSize(vector<string> &strs)
    {
        int count = 0;
        for (int i = 0; i < strs[0].length(); i++)
        {
            for (int j = 1; j < strs.size(); j++)
            {
                if (strs[j][i] < strs[j - 1][i])
                {
                    count++;
                    break;
                }
            }
        }
        return count;
    }
};

int main()
{
    Solution sol;

    // Test case 1
    vector<string> strs1 = {"ca", "bb", "ac"};
    cout << "Test case 1: " << sol.minDeletionSize(strs1) << endl;

    // Test case 2
    vector<string> strs2 = {"xc", "yb", "za"};
    cout << "Test case 2: " << sol.minDeletionSize(strs2) << endl;

    return 0;
}