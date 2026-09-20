#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> topKFrequent(vector<int> &nums, int k)
    {
        unordered_map<int, int> mp;
        for (int i = 0; i < nums.size(); i++)
        {
            mp[nums[i]]++;
        }

        vector<pair<int, int>> vec(mp.begin(), mp.end());

        sort(vec.begin(), vec.end(), [](const auto &a, const auto &b)
             { return a.second < b.second; });

        vector<int> ans;
        int x = vec.size() - 1;
        for (int i = 0; i < k; i++)
        {
            ans.push_back(vec[x].first);
            x--;
        }
        return ans;
    }
};

int main()
{
    Solution sol;

    // Test case 1
    vector<int> nums1 = {1, 1, 1, 2, 2, 3};
    int k1 = 2;
    vector<int> res1 = sol.topKFrequent(nums1, k1);
    cout << "Test 1: ";
    for (int v : res1)
        cout << v << ' ';
    cout << '\n';

    // Test case 2
    vector<int> nums2 = {4, 4, 4, 4, 6, 6, 7, 7, 7, 7, 7, 8};
    int k2 = 3;
    vector<int> res2 = sol.topKFrequent(nums2, k2);
    cout << "Test 2: ";
    for (int v : res2)
        cout << v << ' ';
    cout << '\n';

    return 0;
}