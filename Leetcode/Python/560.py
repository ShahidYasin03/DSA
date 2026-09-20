from typing import List

class Solution:
    def subarraySum(self, nums: List[int], k: int) -> int:
        count = 0
        n = len(nums)
        prefix = []
        s = 0
        for i in nums:
            s += nums[i]
            prefix.append(s)
        
        numMap = {0: 1}
        for i in prefix:
            if i == k:
                count += 1
            
            remain = i - k

            if i in numMap:
                count += numMap[i]
            if i not in numMap:
                numMap[i] = 1
            numMap[i] += 1
        
        return count


# Test cases
if __name__ == "__main__":
    sol = Solution()
    
    # Test case 1: Basic case with positive numbers
    assert sol.subarraySum([1, 1, 1], 2) == 2, "Test 1 failed"
    
    # Test case 2: Single element equal to k
    assert sol.subarraySum([1], 1) == 1, "Test 2 failed"
    
    # Test case 3: No subarrays sum to k
    assert sol.subarraySum([1, 2, 3], 10) == 0, "Test 3 failed"
    
    # Test case 4: With negative numbers
    assert sol.subarraySum([1, -1, 1, 1], 1) == 3, "Test 4 failed"
    
    # Test case 5: All elements sum to k
    assert sol.subarraySum([1, 2, 3], 6) == 1, "Test 5 failed"
    
    # Test case 6: Multiple subarrays with same sum
    assert sol.subarraySum([1, 2, 1, 2, 1], 3) == 4, "Test 6 failed"
    
    # Test case 7: Zero in array
    assert sol.subarraySum([0, 0, 0], 0) == 6, "Test 7 failed"
    
    # Test case 8: Negative k value
    assert sol.subarraySum([1, -1, 1], -1) == 1, "Test 8 failed"
    
    print("All test cases passed!")
