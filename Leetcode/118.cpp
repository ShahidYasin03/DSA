#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> generate(int numRows)
{
    vector<vector<int>> result;
    for (int i = 0; i < numRows; i++)
    {
        vector<int> row(i + 1, 1);
        for (int j = 1; j < i; j++)
        {
            row[j] = result[i - 1][j - 1] + result[i - 1][j];
        }
        result.push_back(row);
    }
    return result;
}

int main()
{

    vector<vector<int>> x = generate(5);

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