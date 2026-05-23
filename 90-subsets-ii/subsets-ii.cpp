class Solution {
public:
    void powerSet(vector<int>&nums,set<vector<int>>&ans, vector<int>&temp,int n){
    if(n==0){
        ans.insert(temp);
        return;
    }
    powerSet(nums,ans,temp,n-1);
    temp.push_back(nums[n-1]);
    powerSet(nums,ans,temp,n-1);
    temp.pop_back();
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
    int n=nums.size();
    sort(nums.begin(),nums.end());
    set<vector<int>>ans;
    vector<vector<int>>ans1;
    vector<int>temp;
    powerSet(nums,ans,temp,n);
    for(auto it: ans){
        ans1.push_back(it);
    }
    return ans1;
    }
};