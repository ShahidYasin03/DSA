#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
    void setZeroes(vector<vector<int>> &matrix)
    {
        int n = matrix.size(), m = matrix[0].size();
        bool flag = false;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (matrix[i][j] == 0)
                {
                    flag = true;
                    if (j + 1 < m)
                    {
                        for (int k = j + 1; k < m; k++)
                        {
                            if (matrix[i][k] != 0)
                            {
                                matrix[i][k] = -69;
                            }
                        }
                    }

                    if (j - 1 >= 0)
                    {
                        for (int k = j - 1; k >= 0; k--)
                        {
                            if (matrix[i][k] != 0)
                            {
                                matrix[i][k] = -69;
                            }
                        }
                    }

                    if (i + 1 < n)
                    {
                        for (int k = i + 1; k < n; k++)
                        {
                            if (matrix[k][j] != 0)
                            {
                                matrix[k][j] = -69;
                            }
                        }
                    }

                    if (i - 1 >= 0)
                    {
                        for (int k = i - 1; k >= 0; k--)
                        {
                            if (matrix[k][j] != 0)
                            {
                                matrix[k][j] = -69;
                            }
                        }
                    }
                }
            }
        }
        if (flag)
        {
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < m; j++)
                {
                    if (matrix[i][j] == -69)
                    {
                        matrix[i][j] = 0;
                    }
                }
            }
        }
    }
};

int main()
{
    vector<vector<int>> x{{1, 1, 1}, {1, 0, 1}, {1, 1, 1}};
    Solution sol;
    sol.setZeroes(x);
    for (int i = 0; i < x.size(); i++)
    {
        for (int j = 0; j < x[i].size(); j++)
        {
            cout << x[i][j] << "    ";
        }
        cout << endl;
    }
    return 0;
}