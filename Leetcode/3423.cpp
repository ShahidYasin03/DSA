#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

    int maxAdjacentDistance(vector<int>& nums) {
        int mx = INT_MIN;
        int n = nums.size();
        for(int i = 0; i < n-1; i++)
        {
            mx = max(mx, abs(nums[i]-nums[i+1]));
        }
        mx = max(mx, abs(nums[n-1] - nums[0]));
        return mx;
    }

int main()
{
    vector<int> x = {-5,-10,-5};
    cout << maxAdjacentDistance(x);
    return 0;
}
