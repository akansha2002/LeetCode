// tracking the max element from right at each ith index
// and finding maxDiffernce at each ith index by doing 
// maxDifference = max(maxDifference, mx - prices[i]);

class Solution {
public:
    int maxProfit(vector<int>& prices) {

       int mx_no = 0;
       int ans = 0;
       for(int i=prices.size() -1; i>=0; i--){
           mx_no = max(prices[i], mx_no);
           if(prices[i] == mx_no) continue;
           else ans = max(ans, mx_no - prices[i]);
       }
       return ans;
    }
};