class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n=nums.size();
        int i=0;
        while(i<n){
            if(nums[i]!=i+1){
                   int val=nums[i]-1;
                   if(nums[i]!=nums[val]){
                    swap(nums[i],nums[val]);
                   }else{
                    return nums[i];
                   }
            }else{
                i++;
            }
        }
        return -1;
    }
    
};