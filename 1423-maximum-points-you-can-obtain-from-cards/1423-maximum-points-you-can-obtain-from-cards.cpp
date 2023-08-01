// class Solution {
// public:
//     int solve(vector<int>& cardPoints, int k, int index, int n){
//         if(index >= n || index < 0 || k < 1){
//             return 0;
//         }

//         int a = cardPoints[index]+solve(cardPoints,k-1,index+1,n-1);
//         int b=cardPoints[n-index-1]+solve(cardPoints,k-1,index,n-1);

//         return max(a,b);
//     }

//     int maxScore(vector<int>& cardPoints, int k) {
//         int sum=0;
//         int n = cardPoints.size();
//         int index=0;
//         return solve(cardPoints, k, index, n);
//     }
// };

class Solution {
public:
    
    int maxScore(vector<int>& cardPoints, int k) {
        int sum=0;
        int maxSum=0;
        int n = cardPoints.size();
        int x = k-1;
        
        for(int i=0; i < k; i++){
            sum += cardPoints[i];
        }
        maxSum = sum;
        for(int i=n-1; i>=n-k; i--){
            sum = sum - cardPoints[x--] + cardPoints[i];
            maxSum = max(maxSum, sum);
        }
        return maxSum;
    }
};