class Solution {
public:
    int integerBreak(int n) {
        vector<int> dp(59);
        dp[1] = 1;
        dp[2] = 1;
        dp[3] = 2;

        for(int i = 4; i <= n; i++){
            int num = i;
            for(int j=1; j<num; j++ ){
                int x = j;
                int y = num - j;
                dp[i] = max({ dp[i],dp[x] * dp[y], dp[x] * y, x * dp[y], x * y});
            }
        }
        return dp[n]; 
    }
};