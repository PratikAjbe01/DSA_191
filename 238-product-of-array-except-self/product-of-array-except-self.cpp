class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
    vector<int>suf(n,0);
    
    int suffix=1;
   for(int i=n-1;i>=0;i--){
    suf[i]=suffix;
    suffix=suffix*nums[i];
   }
   vector<int>ans(n,0);
   int prefix=1;
   for(int i=0;i<n;i++){
   ans[i]=prefix*suf[i];
   prefix=prefix*nums[i];
   }
   return ans;
    }
};