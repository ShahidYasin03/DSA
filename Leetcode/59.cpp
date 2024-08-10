#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    vector<vector<int>> generateMatrix(int n)
    {
        int count = 1;
        vector<vector<int>> x(n, vector<int>(n));
        int l = 0, r = n - 1, t = 0, b = n - 1;
        int direction = 0;
        while (count <= (n * n))
        {
            if (direction == 0)
            {
                for (int i = l; i <= r; i++)
                {
                    x[t][i] = count++;
                }
                t++;
            }
            else if (direction == 1)
            {
                for (int i = t; i <= b; i++)
                {
                    x[i][r] = count++;
                }
                r--;
            }
            else if (direction == 2)
            {
                for (int i = r; i >= l; i--)
                {
                    x[b][i] = count++;
                }
                b--;
            }
            else if (direction == 3)
            {
                for (int i = b; i >= t; i--)
                {
                    x[i][l] = count++;
                }
                l++;
            }
            direction++;
            direction = direction % 4;
        }

        return x;
    }
};

int main()
{

    // Input: n = 3
    // Output: [[1,2,3],[8,9,4],[7,6,5]]
    Solution sol;
    vector<vector<int>> x = sol.generateMatrix(3);

    for (int i = 0; i < x.size(); i++)
    {
        for (int j = 0; j < x[0].size(); j++)
        {
            cout << x[i][j] << "    ";
        }
        cout << endl;
    }
    return 0;
}