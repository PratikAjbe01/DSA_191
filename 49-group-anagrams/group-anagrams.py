class Solution:
     def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        mapp=defaultdict(list)
        ans=[]
        for s in strs:
            key="".join(sorted(s))
            mapp[key].append(s)
    
        return list(mapp.values())
        