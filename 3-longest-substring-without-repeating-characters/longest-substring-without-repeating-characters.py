class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        i,n,maxi=0,len(s),0
        mapp=dict()
        for j in range(n):
            if s[j] in mapp:
                i=max(mapp.get(s[j],0)+1,i)
            maxi=max(maxi,j-i+1)
            mapp[s[j]]=j
        return maxi
            

      