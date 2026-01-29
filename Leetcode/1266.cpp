#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

class Solution
{
public:
    int minTimeToVisitAllPoints(vector<vector<int>> &points)
    {
        pair<int, int> curr = {points[0][0], points[0][1]};
        int count = 0;
        for (int i = 1; i < points.size(); i++)
        {
            pair<int, int> next = {points[i][0], points[i][1]};
            count += max(abs(curr.first - next.first), abs(curr.second - next.second));
            curr = next;
        }
        return count;
    }
};

int main()
{
    Solution sol;

    // Test case 1
    vector<vector<int>> points1 = {{1, 2}, {3, 4}, {2, 3}};
    cout << "Test case 1: " << sol.minTimeToVisitAllPoints(points1) << endl;

    // Test case 2
    vector<vector<int>> points2 = {{1, 1}, {3, 4}, {-1, 0}};
    cout << "Test case 2: " << sol.minTimeToVisitAllPoints(points2) << endl;

    return 0;
}