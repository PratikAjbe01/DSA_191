class Solution {
public:
    int maxProfit(vector<int>& prices) {
       int n=prices.size();
       if(n<=1)return 0;
       int profit=0;
       int mini=prices[0];
       for(int i=1;i<n;i++){
        if(prices[i]>mini){
            profit=max(profit,prices[i]-mini);
        }
        else mini=min(mini,prices[i]);
       }
       return profit; 
    }
};