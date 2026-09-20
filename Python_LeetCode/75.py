class Solution:
    def sortColors(self, nums: list[int]) -> None:
        """
        Do not return anything, modify nums in-place instead.
        """
class Solution:
    def sortColors(self, nums: list[int]) -> None:
        """
        Do not return anything, modify nums in-place instead.
        """
        # zero, one = 0, 0
        # for i in nums:
        #     if i == 0:
        #         zero += 1
        #     elif i == 1:
        #         one += 1
        # indx = 0
        # while zero:
        #     nums[indx] = 0
        #     indx += 1
        #     zero -= 1
        # while one:
        #     nums[indx] = 1
        #     indx += 1
        #     one -= 1
        # while indx < len(nums):
        #     nums[indx] = 2
        #     indx += 1

        low = mid = 0 
        hi = len(nums)-1
        while mid <= hi:
            if nums[mid] == 0:
                nums[low], nums[mid] = nums[mid], nums[low]
                low += 1
                mid += 1
            elif nums[mid] == 1:
                mid +=1
            else:
                nums[mid], nums[hi] = nums[hi], nums[mid]
                hi -= 1