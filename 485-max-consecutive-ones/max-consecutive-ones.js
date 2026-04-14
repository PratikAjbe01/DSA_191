/**
 * @param {number[]} nums
 * @return {number}
 */
var findMaxConsecutiveOnes = function(nums) {
    let c=0;
    let maxi=0;
    for(let i=0;i<nums.length;i++){
        if(nums[i]==1){
            c++;
            maxi=Math.max(maxi,c);
        }else{
            c=0;
        }
    }
    return maxi;
};