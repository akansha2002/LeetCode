class Solution {
public:

    int helper(int index, int buy, vector<int>& prices, int n, int fee, 
                    vector<vector<int>>& dp)
    {
        if(index == n) return 0;

        if(dp[index][buy] != -1) return dp[index][buy];

        if(buy){
            dp[index][buy] = max(-prices[index] + helper(index+1, 0, prices, n, fee, dp),
                                    helper(index+1, 1, prices, n, fee, dp));
        } else{
            dp[index][buy] = max(prices[index] - fee + helper(index+1,1,prices,n,fee,dp),
                                    helper(index+1, 0, prices, n, fee, dp));
        }
        return dp[index][buy];
    }

    int maxProfit(vector<int>& prices, int fee) {
        int n = prices.size();
        vector<vector<int>>dp(n, vector<int>(2, -1));

        return helper(0, 1, prices, n, fee, dp);
    }
};