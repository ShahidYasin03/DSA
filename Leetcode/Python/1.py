from typing import List


class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        my_map = {}
        n = len(nums)
        for i in range(n):
            my_map[nums[i]] = i

        for i in range(n):
            comp = target - nums[i]
            if comp in my_map and my_map[comp] != i:
                return [i, my_map[comp]]
        return []


if __name__ == "__main__":
    solver = Solution()

    test_cases = [
        ([2, 7, 11, 15], 9, [0, 1]),
        ([3, 2, 4], 6, [1, 2]),
        ([3, 3], 6, [0, 1]),
        ([1, 2, 3, 4, 5], 9, [3, 4]),
        ([10, 20, 30, 40], 50, [1, 3]),
        ([0, 0, 0], 0, [0, 1]),
        ([5, 5, 5], 10, [0, 1]),
        ([1, 3, 4, 2], 6, [2, 3]),
        ([-1, -2, -3, -4, -5], -8, [2, 4]),
        ([1, 2, 3], 7, []),
    ]

    for nums, target, expected in test_cases:
        result = solver.twoSum(nums, target)
        assert result == expected, f"nums={nums}, target={target}, expected={expected}, got={result}"

    print("All tests passed.")
    