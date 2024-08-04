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
        // for (int i = 0; i < arr.size(); i++)
        // {
        //     cout << arr[i] << ",  ";
        // }
        // cout << endl;
        return sum %  1000000007;
    }
};

// Expected output: 1, 3, 6, 10, 2, 5, 9, 3, 7, 4.
// Expected output: 1,  2,  3,  3,  4,  5,  6,  7,  9,  10,

int main()
{
    Solution sol;
    vector<int> x{1, 2, 3, 4};

    int sum = sol.rangeSum(x, x.size(), 1, 5);
    cout << sum << endl;
    return 0;
}
