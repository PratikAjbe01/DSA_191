
#include <bits/stdc++.h>
using namespace std;
 int merge(vector<int>&arr,int low,int mid,int high){
    int n=high-low+1;
    int cnt=0;
    vector<int>ans(n);
    int k=0;
    int i=low;
    int j=mid+1;
    while(i<=mid&&j<=high){
        if(arr[i]>arr[j]){
            ans[k++]=arr[j++];
            cnt+=mid-i+1;
        }else{
            ans[k++]=arr[i++];
        }
    }
    while(i<=mid){
        ans[k++]=arr[i++];
    }
    while(j<=high){
        ans[k++]=arr[j++];
    }
    for(int i=0;i<ans.size();i++){
        arr[low+i]=ans[i];
    }
    return cnt;
    }
    int mergeSort(vector<int>&arr ,int low,int high){
        int cnt=0;
        if(low<high){
           int mid=low+(high-low)/2; 
           cnt+= mergeSort(arr,low,mid);
           cnt+= mergeSort(arr,mid+1,high);
           cnt+= merge(arr,low,mid,high);
        }
        return cnt;
    }
    int inversionCount(vector<int> &arr) {
    int n=arr.size();
    int inversionCnt= mergeSort(arr,0,n-1);
    return inversionCnt;
    }
int main() {
   vector<int>arr={5, 4, 3, 2, 1};
   int n=arr.size();
   for(int i=0;i<n;i++){
      cout<<arr[i];
   }
   cout<<endl;
  int ans= inversionCount(arr);
   cout<<"now see the modified one "<<ans<<endl;
   for(int i=0;i<n;i++){
       cout<<arr[i];
   }
    return 0;
}
