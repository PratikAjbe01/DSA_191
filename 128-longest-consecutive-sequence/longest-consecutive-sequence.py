class Solution:
    def longestConsecutive(self, nums: List[int]) -> int:
        sett=set(nums)
        maxi=0
        for n in sett:
            if n-1 not in sett:
                cnt=0
                while n+cnt in sett:
                    cnt+=1
                maxi=max(maxi,cnt)

        return maxi