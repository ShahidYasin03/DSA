#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

class Solution
{
public:
    double largestTriangleArea(vector<vector<int>> &points)
    {
        double area = 0;
        int n = points.size();
        if (n < 3)
            return 0;

        for (int i = 0; i < n - 2; i++)
        {
            for (int j = i + 1; j < n - 1; j++)
            {
                for (int k = j + 1; k < n; k++)
                {
                    double curr = 0.5 * fabs(
                                            points[i][0] * (points[j][1] - points[k][1]) +
                                            points[j][0] * (points[k][1] - points[i][1]) +
                                            points[k][0] * (points[i][1] - points[j][1]));
                    area = max(area, curr);
                }
            }
        }
        return area;
    }
};

int main()
{
    Solution sol;

    vector<vector<int>> points1 = {{0, 0}, {0, 1}, {1, 0}, {0, 2}, {2, 0}};
    cout << "Largest Triangle Area (Test 1): " << sol.largestTriangleArea(points1) << endl;

    vector<vector<int>> points2 = {{1, 0}, {0, 0}, {0, 1}};
    cout << "Largest Triangle Area (Test 2): " << sol.largestTriangleArea(points2) << endl;

    return 0;
}