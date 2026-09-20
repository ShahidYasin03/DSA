class Solution:
    def topKFrequent(self, nums: list[int], k: int) -> list[int]:
        frequency = {}
        n = len(nums)
        for i in range(n):
            if nums[i] not in frequency:
                frequency[nums[i]] = 1
            else:
                frequency[nums[i]] += 1
        sorted_frequency = dict(sorted(frequency.items(), key=lambda item: item[1], reverse=True))
        res = list(sorted_frequency.keys())[0:k]
        return res