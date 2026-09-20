#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
    int maxArea(vector<int> &height)
    {
        int mxArea = 0;
        int right = height.size() - 1;
        int left = 0;
        while (left < right)
        {
            int m = min(height[left], height[right]);
            mxArea = max(mxArea, m * (right - left));
            if (m == height[left])
            {
                left++;
            }
            else
            {
                right--;
            }
        }
        return mxArea;
    }
};

int main()
{
    Solution sol;

    // Test case 1
    vector<int> heights1 = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    cout << "Test 1: " << sol.maxArea(heights1) << " (Expected: 49)" << endl;

    // Test case 2
    vector<int> heights2 = {1, 1};
    cout << "Test 2: " << sol.maxArea(heights2) << " (Expected: 1)" << endl;

    return 0;
}