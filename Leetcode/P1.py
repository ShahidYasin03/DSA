class Solution(object):
    def twoSum(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: List[int]
        """
        mp = {}
        for i in range(len(nums)):
            if nums[i] not in mp:
                mp[nums[i]] = i

        for i in range(len(nums)):
            remain = target - nums[i]
            if remain in mp and mp[remain] != i:
                return [mp[remain], i]
        return [-1, -1]