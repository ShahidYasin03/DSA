class Solution:
    def maxArea(self, height: list[int]) -> int:
        i = 0
        n = len(height)
        j = n-1
        maxWater = 0
        while i < j:
            if height[i] < height[j]:
                currentWater = height[i] * (j - i)
                i += 1
            else:
                currentWater = height[j] * (j - i)
                j -= 1
            maxWater = max(maxWater, currentWater)
        return maxWater
