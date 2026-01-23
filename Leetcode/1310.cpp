#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    vector<int> xorQueries(vector<int> &arr, vector<vector<int>> &q)
    {
        vector<int> prefixXor;
        int x = 0;
        for (int i = 0; i < arr.size(); i++)
        {
            x = x ^ arr[i];
            prefixXor.push_back(x);
        }
        vector<int> ans;
        for (int i = 0; i < q.size(); i++)
        {
            if (q[i][0] == 0)
            {
                ans.push_back(prefixXor[q[i][1]]);
            }
            else
            {
                ans.push_back(prefixXor[q[i][1]] ^ prefixXor[q[i][0] - 1]);
            }
        }
        return ans;
    }
};

int main()
{
    Solution sol;

    // Test case 1
    vector<int> arr1 = {1, 3, 4, 2, 7};
    vector<vector<int>> q1 = {{0, 1}, {1, 2}, {0, 3}, {3, 4}, {2, 4}};
    vector<int> result1 = sol.xorQueries(arr1, q1);
    cout << "Test case 1: ";
    for (int num : result1)
    {
        cout << num << " ";
    }
    cout << endl;

    // Test case 2
    vector<int> arr2 = {8, 10, 2};
    vector<vector<int>> q2 = {{2, 2}, {0, 0}, {0, 2}};
    vector<int> result2 = sol.xorQueries(arr2, q2);
    cout << "Test case 2: ";
    for (int num : result2)
    {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}