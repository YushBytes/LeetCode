class Solution(object):
    def buildArray(self, nums):
        ans=[]
        for i in range(0,len(nums),1):
            ans.append(nums[nums[i]])
        return ans
        