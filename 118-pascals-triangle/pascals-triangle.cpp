class Solution {
public:
    vector<vector<int>> generate(int numRows) {
    vector<vector<int>>ans;
    int pyramidHeight=numRows;
    for(int i=0;i<pyramidHeight;i++){
        int width=i+1;
        vector<int>temp(width,1);
        for(int i=0;i<width;i++){
            if(i==0||i==width-1){
                temp[i]=1;
            }
            else{
                temp[i]=ans.back()[i-1]+ans.back()[i];
            }
        }
        ans.push_back(temp);
        temp.clear();
    }
    return ans;
    }
};