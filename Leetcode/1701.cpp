// 1701. Average Waiting Time

#include <iostream>
#include <vector>
using namespace std;

double averageWaitingTime(vector<vector<int>> &customers)
{
    int n = customers.size();
    int num = customers[0][0] + customers[0][1];
    double sum = customers[0][1];
    for (int i = 1; i < n; i++)
    {
        int x = 0;
        if (num <= customers[i][0])
        {
            x = customers[i][1];
            num = customers[i][0];
        }
        num += customers[i][1];
        x = (num - customers[i][0]);
        sum += x;
    }

    return sum / n;
}

int main()
{
    // [[2,3],[6,3],[7,5],[11,3],[15,2],[18,1]]
    vector<vector<int>> x = {{2, 3}, {6, 3}, {7, 5}, {11, 3}, {15, 2}, {18, 1}};


    cout << averageWaitingTime(x) << endl;

    return 0;
}