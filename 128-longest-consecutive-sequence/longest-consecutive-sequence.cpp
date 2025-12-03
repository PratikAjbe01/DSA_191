class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
    int n=nums.size();
    sort(nums.begin(),nums.end());
    if(n==0) return 0;
    int cnt=1;
    int maxC=1;
    for(int i=0;i<n-1;i++){
        if(nums[i]+1==nums[i+1]){
            cnt++;
            maxC=max(maxC,cnt);
        }else if(nums[i]==nums[i+1]){
            continue;
        }else{
            cnt=1;
        }
    }
    return maxC;
    }
};