class Solution {
public:
    int countW(vector<int>& coins, int amount, int n,vector<vector<int>>&dp){
    if(amount==0)return 0;
    if(n==0) return 1e9;
    
    int pick=1e9;
    if (dp[n][amount] != -1)
            return dp[n][amount];
    if(coins[n-1]<=amount){
        pick =1 + countW(coins,amount-coins[n-1],n,dp);
    }
    int notpick=countW(coins,amount,n-1,dp);
    return dp[n][amount] =min(pick,notpick);

    }
    int coinChange(vector<int>& coins, int amount) {
      int n=coins.size();
      vector<vector<int>>dp(n+1,vector<int>(amount+1,-1));
      int ans= countW(coins,amount,n,dp);
      return (ans>=1e9)?-1:ans;
    }
};