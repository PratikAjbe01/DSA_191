class Solution {
public:
int mergeCount(vector<int>& nums, int low, int mid, int high) {
    int cnt = 0;
    int j = mid + 1;

    // Count reverse pairs before merging
    for (int i = low; i <= mid; i++) {
        while (j <= high && (long long)nums[i] > 2LL * nums[j]) {
            j++;
        }
        cnt += (j - (mid + 1));
    }

    // Now merge two sorted halves
    vector<int> temp;
    int left = low, right = mid + 1;
    while (left <= mid && right <= high) {
        if (nums[left] <= nums[right]) temp.push_back(nums[left++]);
        else temp.push_back(nums[right++]);
    }
    while (left <= mid) temp.push_back(nums[left++]);
    while (right <= high) temp.push_back(nums[right++]);

    for (int i = low; i <= high; i++) {
        nums[i] = temp[i - low];
    }

    return cnt;
}

int mergeSort(vector<int>& nums, int low, int high) {
    if (low >= high) return 0;
    int mid = (low + high) / 2;
    int cnt = 0;
    cnt += mergeSort(nums, low, mid);
    cnt += mergeSort(nums, mid + 1, high);
    cnt += mergeCount(nums, low, mid, high);
    return cnt;
}
    int reversePairs(vector<int>& nums) {
        int n=nums.size();
        return mergeSort(nums,0,n-1);
    }
};