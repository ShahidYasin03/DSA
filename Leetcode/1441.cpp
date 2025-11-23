#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    vector<string> buildArray(vector<int> &target, int n)
    {
        vector<string> ans;
        int idx = 0;
        int count = 0;
        for (int i = 1; i <= n; i++)
        {
            if (target[idx] != i)
            {
                ans.push_back("Push");
                count++;
            }
            else if (target[idx] == i)
            {
                while (count)
                {
                    ans.push_back("Pop");
                    count--;
                }
                ans.push_back("Push");
                idx++;
            }
            if (idx >= target.size())
                break;
        }
        return ans;
    }
};

int main()
{
    Solution sol;

    // Test case 1
    vector<int> target1 = {1, 3};
    int n1 = 3;
    vector<string> result1 = sol.buildArray(target1, n1);
    cout << "Test case 1: ";
    for (const string &s : result1)
        cout << s << " ";
    cout << endl;

    // Test case 2
    vector<int> target2 = {1, 2, 3};
    int n2 = 3;
    vector<string> result2 = sol.buildArray(target2, n2);
    cout << "Test case 2: ";
    for (const string &s : result2)
        cout << s << " ";
    cout << endl;

    return 0;
}