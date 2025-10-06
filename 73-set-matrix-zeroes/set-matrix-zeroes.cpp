class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int row=matrix.size();
        int col=matrix[0].size();
        vector<int>cols,rows;
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                if(matrix[i][j]==0){
                    cols.push_back(j);
                    rows.push_back(i);
                }
            }
        }
        int n1=cols.size();
        int n2=rows.size();
        for(int i=0;i<n1;i++){
            int ind=cols[i];
            for(int j=0;j<row;j++){
                matrix[j][ind]=0;
            }
        }
        for(int i=0;i<n2;i++){
            int ind=rows[i];
            for(int j=0;j<col;j++){
                matrix[ind][j]=0;
            }
        }
    }
};