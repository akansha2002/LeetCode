// Approach - 1 (Greedy Approach)

// class Solution {
// public:
//     int maxProfit(vector<int>& prices) {
        
//         int sum=0;
//         for(int i=1;i<prices.size();i++)
//         {
//             if(prices[i-1]<prices[i])
//             {
//                 sum+=prices[i]-prices[i-1];
//             }
//         }
//         return sum;
        
//     }
// };

// Approach - 2 ( DP Approach )
// either you can buy stock on some day or sell the stock on that day

// if (buy) profit += -prices[index]
// else (sell) profit += prices[index]

// but you need to maintain another variable buy
// so that u can keep track of either u can buy on that day or not

// here we have 2 changing parameters, index, buy

class Solution {
public:
    int helper(int index, int buy, vector<int>& prices, int n, vector<vector<int>> &dp){
        if(index == n) return 0;

        if(dp[index][buy] != -1) return dp[index][buy];

        long profit = 0;
        if(buy){
            dp[index][buy] = max(-prices[index] + helper(index + 1, 0, prices, n,dp),
                            helper(index+1, 1, prices, n,dp));
        } else{
            dp[index][buy] = max(prices[index] + helper(index + 1, 1, prices, n,dp),
                            helper(index+1, 0, prices, n,dp));
        }
        return dp[index][buy];
    }

    int maxProfit(vector<int>& prices) {
        
        int n = prices.size();
        vector<vector<int>>dp(n, vector<int>(2, -1));

        return helper(0, 1, prices, n, dp);
     
    }
};








