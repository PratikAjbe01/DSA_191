class Solution:
    def convert(self, s: str, numRows: int) -> str:
        if numRows == 1 or numRows >= len(s):
            return s
        col=len(s)
        row=numRows
        matrix=[[0 for _ in range(col)]for _ in range(row)]
        dir=False
        row=0;col=0
        for i in range(len(s)):
            matrix[row][col]=s[i]
            if row==0 or row==numRows-1 :
                dir=not dir
            
            if dir:
                row += 1 
            else:
                row -= 1  
                col += 1  
        ans=""
        for i in range(numRows):
            for j in range(len(s)):
                if matrix[i][j]!=0:
                   ans+=matrix[i][j]
        return ans
