# Given an array of integers `nums` and `target`, return the indices of the two numbers such that they add up to the target

# Assume that each input would only have one solution

# Answer can be returned in any order


class Solution:
    def twoSum(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: List[int]
        """

        num_dict = {}
        for i, num in enumerate(nums):
            complement = target - num
            if complement in num_dict:
                return [num_dict[complement], i]
            num_dict[num] = i
        return []
