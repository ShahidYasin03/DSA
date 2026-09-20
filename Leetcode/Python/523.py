class Solution:
    def checkSubarraySum(self, nums: list[int], k: int) -> bool:
        prefixSum = 0
        prefixCount = {0: -1}

        for i in range(len(nums)):
            prefixSum += nums[i]
            remain = prefixSum % k

            if remain in prefixCount:
                if i - prefixCount[remain] >= 2:
                    return True
            else:
                prefixCount[remain] = i

        return False