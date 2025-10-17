class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
    vector<vector<int>>ans;
    int n=intervals.size();
    sort(intervals.begin(),intervals.end());
    for(int i=0;i<n;i++){
        if(ans.empty()){
            ans.push_back(intervals[i]);
        }
        else{
            int backEnd=ans.back()[1];
            if(intervals[i][0]<=backEnd){
                ans.back()[0]=min(ans.back()[0],intervals[i][0]);
                ans.back()[1]=max(ans.back()[1],intervals[i][1]);
            }else{
                ans.push_back(intervals[i]);
            }
        }
    }
    return ans;    
    }
};