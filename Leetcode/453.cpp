class Solution
{
public:
    int minMoves(vector<int> &nums)
    {
        int n = nums.size();
        int sum = 0;
        for (auto i : nums)
        {
            sum += i;
        }
        int m = nums[0];
        for (int i = 0; i < n; i++)
        {
            if (nums[i] < m)
            {
                m = nums[i];
            }
        }
        return sum - (n * m);
    }
};