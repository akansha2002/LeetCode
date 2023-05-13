// // 1d dp problem
// // we have to find all the possible solutions - recursion
// // we dont have to return the actual string, we just have to find the possible combinations
// // recursion -> memooization 

class Solution {
public:
    int mod = 1000000007;

    int solve(int len, int zero, int one, vector<int>& dp)
    {
        // base case
        if(len == 0) return 1;
        if(len < 0) return 0;

        // checking if dp[len] already exists
        if(dp[len] !=-1) return dp[len];

        // recursion 
        int ans1 = solve(len-zero, zero, one, dp);
        int ans2 = solve(len-one, zero, one, dp);

        // small calculation
        dp[len] = (ans1 +ans2) % mod;
        return dp[len];
    }

    int countGoodStrings(int low, int high, int zero, int one) {
        int ans = 0;
        vector<int>dp(high+1, -1);
        for(int i=low; i<= high; i++){
            ans = (ans + solve(i, zero, one, dp)) % mod;
        }
        return ans;
    }
};
