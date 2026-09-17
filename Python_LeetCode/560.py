class Solution:
    def subarraySum(self, nums: List[int], k: int) -> int:
        count = 0
        n = len(nums)
        prefixSum = []
        sumMap = {}
        s = 0
        for i in range(n):
            s += nums[i]
            prefixSum.append(s)
        for i in range(n):
            if(prefixSum[i] == k):
                count += 1
            
            val = prefixSum[i] - k
            if val in sumMap:
                count += sumMap[val]
            if prefixSum[i] not in sumMap:
                sumMap[prefixSum[i]] = 0
            sumMap[prefixSum[i]] += 1
        return count