class Solution(object):
    def twoSum(self, nums, target):

        l=[]
        for i in range(len(nums)-1):
            # print(i)
            for j in range(i+1,len(nums)):
                # print(j)
                if nums[i] + nums[j] == target:
                    l.append(i)
                    l.append(j)
                    return l
    

        