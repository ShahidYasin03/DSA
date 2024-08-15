#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

auto init = []() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 'c';
}();

class Solution
{
public:
    vector<vector<int>> threeSum(vector<int> &nums)
    {
        int n = nums.size();
        vector<vector<int>> x;
        sort(nums.begin(), nums.end());

        for (int i = 0; i < n; i++)
        {
            // Skip duplicate elements for the first element of the triplet
            if (i > 0 && nums[i] == nums[i - 1])
                continue;

            int tar = -nums[i];
            int l = i + 1, r = n - 1;
            while (l < r)
            {
                int sum = nums[l] + nums[r];
                if (sum > tar)
                {
                    r--;
                }
                else if (sum < tar)
                {
                    l++;
                }
                else
                {
                    x.push_back({nums[i], nums[l], nums[r]});

                    // Skip duplicate elements for the second element of the triplet
                    while (l < r && nums[l] == nums[l + 1])
                        l++;
                    // Skip duplicate elements for the third element of the triplet
                    while (l < r && nums[r] == nums[r - 1])
                        r--;

                    l++;
                    r--;
                }
            }
        }
        return x;
    }
};

int main()
{
    Solution sol;

    vector<int> x{-1, 0, 1, 2, -1, -4};
    vector<vector<int>> ans = sol.threeSum(x);
    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[0].size(); j++)  // Corrected to increment j instead of i
        {
            cout << ans[i][j] << "  ";
        }
        cout << endl;
    }
    return 0;
}
