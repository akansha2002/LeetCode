class Solution {
public:
    int maxDotProduct(vector<int>& nums1, vector<int>& nums2) {
        vector<vector<int>> dp(nums1.size(), vector<int>(nums2.size(), INT_MIN));
        
         dp[0][0] = nums1[0] * nums2[0];
        int mx = dp[0][0];
        
        for(int j = 1; j < nums2.size(); j++){
            mx = max(mx, dp[0][j] = max(dp[0][j-1], nums1[0]*nums2[j]));
        }
        
        for(int i = 1; i < nums1.size(); i++){
            mx = max(mx, dp[i][0] = max(dp[i-1][0], nums1[i] * nums2[0]));
        }
        
        for(int i=1; i < nums1.size(); i++){
            for(int j=1; j < nums2.size() ; j++){
                mx = max(mx, dp[i][j] = max({dp[i-1][j-1], dp[i][j-1], dp[i-1][j], 
                    dp[i-1][j-1] + nums1[i] * nums2[j], nums1[i] * nums2[j]}));
            }
        }
        return mx;
    }
};