class Solution {
public:
    void nextPermutation(vector<int>& nums) {
    int n=nums.size();
    int bp=-1;
    for(int i=n-1;i>=1;i--){
      if(nums[i-1]<nums[i]){
        bp=i-1;
        break;
      }
    }
    if(bp==-1)reverse(nums.begin(),nums.end());
    else{
       for(int i=n-1;i>bp;i--){
        if(nums[i]>nums[bp]){
            swap(nums[i],nums[bp]);
            break;
        }
       }
       reverse(nums.begin()+bp+1,nums.end());
    }
    }
};