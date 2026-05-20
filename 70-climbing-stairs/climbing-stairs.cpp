class Solution {
public:
    int countW(int &n,int i,vector<int>&dp){
        if(i==n){
            return 1;
        }
        if(i>n)return 0;
        if(dp[i]!=-1)return dp[i];
        int pick=countW(n,i+1,dp);
        int notpick=countW(n,i+2,dp);
       dp[i] =pick+notpick;
       return dp[i];
        
    }
    int climbStairs(int n) {
        vector<int>dp(n+1,-1);

        return countW(n,0,dp);
    }
};