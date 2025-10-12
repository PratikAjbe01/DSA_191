class Solution {
public:
    int pivotIndex(vector<int>& arr) {
        int suffSum=0;
        for(auto it:arr){
            suffSum+=it;
        }
        int preSum=0;
        for(int i=0;i<arr.size();i++){
            suffSum-=arr[i];
            if(preSum==suffSum){
                return i;
            }
            preSum+=arr[i];
        }
        return -1;
    }
};