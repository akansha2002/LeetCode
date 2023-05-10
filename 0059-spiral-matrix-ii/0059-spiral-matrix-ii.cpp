class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        
        vector<vector<int>>m(n, vector<int>(n,0));
        int top=0, bottom=n-1,left=0, right=n-1;
        int count=1;

        while(top <= bottom && left <= right)
        {
            if(top <= bottom && left <= right){
                for(int j=left; j<=right; j++){
                    m[top][j] = count++;
                }
                top++;
            }
            
            if(top <= bottom && left <= right){
                for(int i=top;i<=bottom;i++){
                    m[i][right] = count++;
                }
                right--;
            }
            if(top <= bottom && left <= right){
                for(int j=right; j>=left; j--){
                    m[bottom][j] = count++;
                }
                bottom--;
            }
            if(top <= bottom && left <= right){
                for(int i=bottom; i>=top; i--){
                    m[i][left] = count++;
                }
                left++;
            }
        }
        return m;
    }
};

