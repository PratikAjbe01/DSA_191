class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>ans;
        map<int,int>mp;
      
        for(int i=0;i<nums.size();i++){
            int newT=target-nums[i];
            if(mp.find(newT)!=mp.end()){
                ans.push_back(mp[newT]);
                ans.push_back(i);
                break;
            }
           mp[nums[i]]=i;
        }
        return ans;
    }
};