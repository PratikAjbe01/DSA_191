class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int>ans;
        int right=numbers.size()-1;
        int left=0;
        while(left<=right){
            int sum=numbers[left]+numbers[right];
            if(target==sum){
                return {left+1,right+1};
            }else if(target<sum) right--;
            else left++;
        }
        return {-1,-1};
    }
};