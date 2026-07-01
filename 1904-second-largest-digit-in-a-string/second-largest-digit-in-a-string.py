class Solution:
    def secondHighest(self, s: str) -> int:
        maxi = -1
        sl = -1 
        
        for i in s:
            if i.isdigit():
               
                val = int(i)
                if val > maxi:
                    sl = maxi
                    maxi = val
                elif val > sl and val < maxi:
                    sl = val
       
        return sl
