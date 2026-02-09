class Solution {
public:
    int maxProfit(vector<int>& prices) {
       int n=prices.size();
       if(n==1)return 0;
       int low=prices[0];
       int profit=0;
       for(int i=1;i<n;i++){
         if(prices[i]>low){
            profit=max(profit,prices[i]-low);
         }
         low=min(low,prices[i]);
       }
       return profit;
    }
};