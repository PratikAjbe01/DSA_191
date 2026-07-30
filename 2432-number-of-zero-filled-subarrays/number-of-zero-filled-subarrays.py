class Solution:
    def zeroFilledSubarray(self, nums: List[int]) -> int:
        ans=0
        maxi=0
        i=0
        while i<len(nums):
            if nums[i]==0:
                ans+=1
                maxi+=ans
            else : 
                ans=0
            i+=1
        return maxi
              
