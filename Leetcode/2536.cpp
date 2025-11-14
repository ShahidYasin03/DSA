#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    vector<vector<int>> rangeAddQueries(int n, vector<vector<int>> &queries)
    {
        vector<vector<int>> v(n, vector<int>(n, 0));
        for (int i = 0; i < queries.size(); i++)
        {
            int r1 = queries[i][0], c1 = queries[i][1], r2 = queries[i][2], c2 = queries[i][3];
            for (int j = r1; j <= r2; j++)
            {
                for (int k = c1; k <= c2; k++)
                {
                    v[j][k]++;
                }
            }
        }
        return v;
    }
};

int main()
{
    Solution sol;

    // Test case 1
    int n1 = 3;
    vector<vector<int>> queries1 = {{1, 1, 2, 2}, {0, 0, 1, 1}};
    vector<vector<int>> result1 = sol.rangeAddQueries(n1, queries1);
    cout << "Test case 1:\n";
    for (auto &row : result1)
    {
        for (int val : row)
            cout << val << " ";
        cout << "\n";
    }

    // Test case 2
    int n2 = 2;
    vector<vector<int>> queries2 = {{0, 0, 1, 1}};
    vector<vector<int>> result2 = sol.rangeAddQueries(n2, queries2);
    cout << "\nTest case 2:\n";
    for (auto &row : result2)
    {
        for (int val : row)
            cout << val << " ";
        cout << "\n";
    }

    return 0;
}