class Solution
{
public:
    int minMoves2(vector<int> &nums)
    {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int mad = nums[n / 2];
        long moves = 0;
        for (int i : nums)
        {
            moves += abs(i - mad);
        }
        return moves;
    }
};