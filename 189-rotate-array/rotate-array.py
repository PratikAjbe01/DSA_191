class Solution:
    def reverseL(self,nums,left,right):
        while left < right:
            nums[left],nums[right] = nums[right],nums[left]
            left+=1
            right-=1
    def rotate(self, nums: List[int], k: int) -> None:
        n=len(nums)
        k=k%n
        split = n-k
        self.reverseL(nums,0, split-1)
        self.reverseL(nums,split, n-1)
        self.reverseL(nums,0, n-1)

      
        