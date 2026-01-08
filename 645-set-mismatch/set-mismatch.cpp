class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
     int n=nums.size();
     long long  dS=n*(n+1)/2;
     long long  aS=accumulate(nums.begin(),nums.end(),0);
     long long  dSS=1LL*n*(n+1)*(2*n+1)/6;
     long long aSS=0;
     for(int i=0;i<n;i++){
         long long  p=nums[i]*nums[i];
         aSS+=p;
     }  
    long long  xMiny=dS-aS;
    long long  xSqMinySq=dSS-aSS;
    long long  xPlusy=xSqMinySq/xMiny;
    int x=(xMiny+xPlusy)/2;
    int y=(xPlusy-x);
    return {y,x};

    }
};