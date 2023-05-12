
// initially i igot intution of dp (as we want most optimal soln)
// but we could also have used recursion, but after seeing the constraints i thought dp would be used

// wasnt able to find out a way

// so intution-  first solve recursively and then make it memoised or dp soln

// didnt solve this pattern of dp problem (1D DP problem) from a bit long

// variation of house robber

// simple recursive approach

// base case
// when index goes out of bound

// small calculation
// at ith index, either u can take or skip

// memoised soln
// we are storing our max ans at 0th index

class Solution {
public:
    
    long long dp[100002];
     long long helper(vector<vector<int>>& q, int i, int n){
       if(i>=n) return 0;
       if(dp[i]!=-1) return dp[i];
       long long ans1   = q[i][0] + helper(q ,i+1+q[i][1], n);
       long long ans2 = helper(q,i+1,n);
       return dp[i]= max(ans1,ans2);
}
    
    long long mostPoints(vector<vector<int>>& questions) {
        int n = questions.size();
         memset(dp,-1,sizeof(dp));
        return helper(questions, 0, n);
    }
};
