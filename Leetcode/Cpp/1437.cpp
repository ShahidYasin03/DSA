#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool kLengthApart(vector<int> &nums, int k)
    {
        int count = 0;
        bool firstOneFound = false;

        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] == 0)
            {
                count++;
            }
            else
            {
                if (firstOneFound && count < k)
                    return false;

                firstOneFound = true;
                count = 0;
            }
        }
        return true;
    }
};

int main()
{
    Solution sol;

    vector<int> nums1 = {1, 0, 0, 0, 1, 0, 0, 1};
    int k1 = 2;
    cout << boolalpha << sol.kLengthApart(nums1, k1) << '\n';

    vector<int> nums2 = {1, 0, 0, 1, 0, 1};
    int k2 = 2;
    cout << boolalpha << sol.kLengthApart(nums2, k2) << '\n';

    return 0;
}