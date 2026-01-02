class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        int low=0;
        int high=nums.size()-1;
        mergeSort(nums,low,high);
        return nums;
    }

private: 
void mergeSort(vector<int>& nums, int left, int right) {
        if (left >= right) {
            return;
        }
        
        
        int mid = left + (right - left) / 2;
        
      
        mergeSort(nums, left, mid);
        mergeSort(nums, mid + 1, right);
        merge(nums, left, mid, right);
    }
    void merge(vector<int>& nums, int left, int mid, int right) {
        int n=right-left+1;
        int b[n];
        int k=0;
        int i=left;
        int j=mid+1;
         while (i <= mid && j <= right) {
            if (nums[i] <= nums[j]) {
            b[k] = nums[i];
                i++;
                k++;
            } else {
                b[k] = nums[j];
                j++;
                k++;
            }
          
        }
         while (i <= mid) {
            b[k] = nums[i];
            i++;
            k++;
        }
          while (j <= right) {
            b[k] = nums[j];
            j++;
            k++;
        }
for(int i=0;i<n;i++){
    nums[left+i]=b[i];
}
    }


};