class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n=nums.size();
        int high=n-1;
        int low=0;
        int i=0;
        while(i<=high){
            if(nums[i]==0){
            swap(nums[low],nums[i]);
            low++;
            i++;
            }
            else if(nums[i]==2){
            swap(nums[high],nums[i]);
            high--;
            }
            else i++;
        }
    }
};