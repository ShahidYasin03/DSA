#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
public:
    int rangeSum(vector<int> &nums, int n, int left, int right)
    {
        vector<long long> arr;
        for (int i = 0; i < n; i++)
        {
            long long sum = 0;
            for (int j = i; j < n; j++)
            {
                sum += nums[j];
                arr.push_back(sum);
            }
        }

        sort(arr.begin(), arr.end());
        long long sum = 0;
        left--;
        right--;
        for (int i = left; i <= right; i++)
        {
            sum += arr[i];
        }
        return sum %  1000000007;
    }
};

auto init = []() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 'c';
}();

int main()
{
    Solution sol;
    vector<int> x{1, 2, 3, 4};

    int sum = sol.rangeSum(x, x.size(), 1, 5);
    cout << sum << endl;
    return 0;
}
