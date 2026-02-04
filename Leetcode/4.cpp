#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
public:
    double findMedianSortedArrays(vector<int> &nums1, vector<int> &nums2)
    {
        vector<int> x = nums1;
        for (int i = 0; i < nums2.size(); i++)
        {
            x.push_back(nums2[i]);
        }
        sort(x.begin(), x.end());
        int n = x.size();
        if (n % 2 == 0)
        {
            int m = x.size() / 2;
            return (x[m] + x[m - 1]) / 2.0;
        }
        else
        {
            int m = x.size() / 2;
            return x[m];
        }
    }
};

int main()
{
    Solution sol;

    // Test case 1
    vector<int> nums1_1 = {1, 3};
    vector<int> nums2_1 = {2};
    cout << "Test case 1: " << sol.findMedianSortedArrays(nums1_1, nums2_1) << endl;

    // Test case 2
    vector<int> nums1_2 = {1, 2};
    vector<int> nums2_2 = {3, 4};
    cout << "Test case 2: " << sol.findMedianSortedArrays(nums1_2, nums2_2) << endl;

    return 0;
}