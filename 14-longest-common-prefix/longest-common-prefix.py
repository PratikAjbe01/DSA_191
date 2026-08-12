class Solution:
    def longestCommonPrefix(self, strs: List[str]) -> str:
        strs.sort();
        if not strs:
            return ""
        s=strs[0]
        t=strs[len(strs)-1]
        for i,v in enumerate(s):
            if s[i]!=t[i] : return s[:i]
        return s