class Solution:
    def isValidSudoku(self, board: List[List[str]]) -> bool:
        row=len(board)
        col=len(board[0])
        for i in range(0,row):
            for j in range(0,col):
                if board[i][j]==".": continue
                value=board[i][j]
                if not self.isValid(board,i,j,value) :
                    return False
        return True
    def isValid(self,board: List[List[str]],row,col,value)->bool:
        n=len(board)
        for  i in  range(0,n):
            if i==col : continue
            elif board[row][i]==value:
               return False

        for  i in  range(0,n):
            if i==row : continue
            elif board[i][col]==value:
                return False

        sr=(row//3)*3
        sc=(col//3)*3
        for i in range(sr,sr+3):
            for j in range(sc,sc+3):
                if i==row and j==col : continue
                if board[i][j]==value:
                    return False
        return True
        
