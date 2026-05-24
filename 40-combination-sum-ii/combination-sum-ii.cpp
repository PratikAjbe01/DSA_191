class Solution {
public:
    void combset(vector<int>&arr,set<vector<int>>&ans,vector<int>&temp,int target,int i){
    int n=arr.size();
    if(target==0){
        ans.insert(temp);
        return;
    }
    for(int j=i;j<n;j++){
        if(j>i && arr[j]==arr[j-1])continue;
        if(arr[j]>target)break;
        temp.push_back(arr[j]);
        combset(arr,ans,temp,target-arr[j],j+1);
        temp.pop_back();
    }
    }
    vector<vector<int>> combinationSum2(vector<int>& arr, int target) {
    int n=arr.size();
    sort(arr.begin(),arr.end());
    set<vector<int>>ans;
    vector<vector<int>>ans1;
    vector<int>temp;
    combset(arr,ans,temp,target,0);
    for(auto it:ans){
        ans1.push_back(it);
    }
    return ans1;     
    }
};