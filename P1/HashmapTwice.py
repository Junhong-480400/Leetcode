class Solution(object):
    def twoSum(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: List[int]
        """
        for i in range(len(nums)):
            if ((target-nums[i]) in nums) and (nums.index(target-nums[i]) != i):
                return [i, nums.index(target-nums[i])];
        return [0, 0]
