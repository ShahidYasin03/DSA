class Solution:
    def majorityElement(self, nums: list[int]) -> list[int]:
        mapCount = {}
        for i in nums:
            if i not in mapCount:
                mapCount[i] = 0
            mapCount[i] += 1
        n = len(nums)
        ans = []
        for key, value in mapCount.items():
            if value > (n / 3):
                ans.append(key)
        return ans