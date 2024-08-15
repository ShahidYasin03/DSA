#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        vector<pair<int, int>> m;
        int n = nums.size();
        for (int i = 0; i < n; i++)
        {
            m.push_back({nums[i], i}); 
        }

       
        sort(m.begin(), m.end());

        int i = 0, j = n - 1;
        while (i < j) 
        {
            int sum = m[i].first + m[j].first;
            if (sum == target)
            {
                return {m[i].second, m[j].second};
            }
            else if (sum > target)
            {
                j--;
            }
            else
            {
                i++;
            }
        }
        return {};
    }
};

int main()
{
    vector<int> x {3, 2, 4};

    Solution sol;
    vector<int> ans = sol.twoSum(x, 6);

    cout << ans[0] << ", " << ans[1] << endl;

    return 0;
}
