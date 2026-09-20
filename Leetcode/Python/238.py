class Solution:
    def productExceptSelf(self, nums: list[int]) -> list[int]:
        res = []
        n = len(nums)
        pro = 1
        for i in range(n):
            res.append(pro)
            pro *= nums[i]
        pro = 1
        for i in range(n-1, -1, -1):
            x = nums[i]
            nums[i] = pro
            pro *= x
        for i in range(n):
            res[i] *= nums[i]
        return res


# Test cases
if __name__ == "__main__":
    sol = Solution()
    test_cases = [
        ([1, 2, 3, 4], [24, 12, 8, 6]),
        ([-1, 1, 0, -3, 3], [0, 0, 9, 0, 0]),
        ([2, 3, 4], [12, 8, 6]),
        ([1, 2, 3], [6, 3, 2]),
        ([0, 0, 0], [0, 0, 0]),
        ([5], [1]),
    ]

    for nums, expected in test_cases:
        result = sol.productExceptSelf(nums)
        assert result == expected, f"nums={nums}, expected={expected}, got={result}"

    print("All test cases passed.")
        