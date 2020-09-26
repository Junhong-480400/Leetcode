class Solution(object):
    def twoSum(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: List[int]
        """
        d ={};
        for i in range(len(nums)):
            d[nums[i]]=i;
        for i in range(len(nums)):
            othernum =target-nums[i]
            if othernum in d and i!=nums.index(othernum):
                if nums.count(othernum)!=2 :
                    return [i,d[othernum]];
                ret =[]
                ret.append(i);
                nums[i]=target;
                ret.append(nums.index(othernum));
                return ret;
        return None;

