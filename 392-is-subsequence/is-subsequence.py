class Solution:
    def isSubsequence(self, s: str, t: str) -> bool:
        i=0;j=0;
        while j < len(t):
            if i==len(s):
                return True
            if s[i]==t[j]:
                i+=1
            j+=1
        return True if i==len(s) else False
     
