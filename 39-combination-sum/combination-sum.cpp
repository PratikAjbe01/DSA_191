class Solution {
public:
    void combset(vector<int>&arr,vector<vector<int>>&ans,vector<int>&temp,int target,int i){
    int n=arr.size();
    if(target==0){
        ans.push_back(temp);
        return;
    }
    if(target<0 || i==n)return;
    combset(arr,ans,temp,target,i+1);
    temp.push_back(arr[i]); 
    combset(arr,ans,temp,target-arr[i],i);
    temp.pop_back();
    }
    vector<vector<int>> combinationSum(vector<int>& arr, int target) {
    int n=arr.size();
    vector<vector<int>>ans;
    vector<int>temp;
    combset(arr,ans,temp,target,0);
    return ans;    
    }
};