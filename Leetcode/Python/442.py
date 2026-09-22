class Solution:
    def findDuplicates(self, nums: list[int]) -> list[int]:
        ans = []
        n = len(nums)
        for i in range(n):
            x = abs(nums[i])
            if nums[x-1] < 0:
                ans.append(x)
            nums[x-1] *= -1
        return ans