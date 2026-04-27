class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
    int n=nums.size();
    vector<int>suff(n,0);
    int sufsum=1;
    for(int i=n-1;i>=0;i--){
        suff[i]=sufsum;
        sufsum*=nums[i];
    } 
    int preSum=1;
    for(int i=0;i<n;i++){
        suff[i]*=preSum;
        preSum*=nums[i];
    }
    return suff;
    }
};