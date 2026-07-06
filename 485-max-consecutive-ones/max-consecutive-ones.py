class Solution:
    def findMaxConsecutiveOnes(self, nums: List[int]) -> int:
        cnt = maxi = 0
        for n in nums:
            if n==1 : 
               cnt+=1
               maxi=max(cnt,maxi) 
            else : cnt=0
        return maxi
     