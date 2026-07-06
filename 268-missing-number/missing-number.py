class Solution:
    def missingNumber(self, nums: List[int]) -> int:
        n=len(nums)
        s1=n*(n+1)//2
        s2=0
        for i in range(0,n):
            s2+=nums[i]
        return s1-s2