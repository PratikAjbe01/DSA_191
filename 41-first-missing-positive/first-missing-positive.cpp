class Solution {
public:
    int firstMissingPositive(vector<int>& arr) {
        int n=arr.size();
        int i=0;
        
        while(i<n){
                while(arr[i]>0&&arr[i]<=n&&arr[arr[i]-1]!=arr[i]){
                    int ind=arr[i];
                   swap(arr[ind-1],arr[i]);
                }
            i++;
        }
        for(int i=0;i<n;i++){
            if(arr[i]!=i+1){
                return i+1;
            }
        }
        return n+1;
    }
};