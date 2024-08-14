#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
    int findMaxConsecutiveOnes(vector<int> &nums)
    {
        int streak = 0, max = 0, n = nums.size();
        for (int i = 0; i < n; i++)
        {
            if (nums[i] != 1)
            {
                max = (streak > max) ? streak : max;
                streak = 0;
            }
            else
            {
                streak++;
            }
        }
        max = (streak > max) ? streak : max;

        return max;
    }
};
int main()
{
    Solution sol;
    vector<int> x{1,1,0,1,1,1};

    cout << sol.findMaxConsecutiveOnes(x) << endl;

    return 0;
}