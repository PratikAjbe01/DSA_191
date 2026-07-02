class Solution:
    def check(self, nums: List[int]) -> bool:
        flag=-1
        for i in range(len(nums)-1):
            curr=nums[i]
            next=nums[i+1]
            if next<curr :
                flag=i+1
                break
        if flag==-1:return True
        if nums[0]<nums[len(nums)-1] : return False
        for i in range(flag,len(nums)-1):
            curr=nums[i]
            next=nums[i+1]
            if next<curr :
                return False
        return True

