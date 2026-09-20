#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
public:
    double findMedianSortedArrays(vector<int> &nums1, vector<int> &nums2)
    {
        vector<int> x;
        int i = 0, j = 0, n1 = nums1.size(), n2 = nums2.size();
        while (i < n1 && j < n2)
        {
            if (nums1[i] < nums2[j])
            {
                x.push_back(nums1[i++]);
            }
            else
            {
                x.push_back(nums2[j++]);
            }
        }
        while (i < n1)
        {
            x.push_back(nums1[i++]);
        }
        while (j < n2)
        {
            x.push_back(nums2[j++]);
        }
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