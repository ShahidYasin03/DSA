class Solution:
    def longestConsecutive(self, nums: list[int]) -> int:
        n = len(nums)
        if n == 0:
            return 0
        nums.sort()
        longest = 0
        curr = 1
        for i in range(n-1):
            if nums[i] == nums[i+1]:
                continue
            if nums[i] == nums[i+1] - 1:
                curr += 1
            else:
                longest = max(longest, curr)
                curr = 1
        
        longest = max(longest, curr)
        return longest


# Test cases
if __name__ == "__main__":
    sol = Solution()
    
    # Test 1: Standard case with consecutive numbers
    print(sol.longestConsecutive([100,4,200,1,3,2]))  # Expected: 4 (1, 2, 3, 4)
    
    # Test 2: Empty list
    print(sol.longestConsecutive([]))  # Expected: 0
    
    # Test 3: Single element
    print(sol.longestConsecutive([1]))  # Expected: 1
    
    # Test 4: All consecutive
    print(sol.longestConsecutive([1, 2, 3, 4, 5]))  # Expected: 5
    
    # Test 5: No consecutive numbers
    print(sol.longestConsecutive([1, 3, 5, 7]))  # Expected: 1
    
    # Test 6: Duplicate numbers
    print(sol.longestConsecutive([1, 1, 1, 2, 2, 3]))  # Expected: 3
    
    # Test 7: Negative numbers
    print(sol.longestConsecutive([-1, 0, 1, 2]))  # Expected: 4
    
    # Test 8: Unsorted with gaps
    print(sol.longestConsecutive([9, 1,4, 7, 3, 2, 8, 5, 6]))  # Expected: 9