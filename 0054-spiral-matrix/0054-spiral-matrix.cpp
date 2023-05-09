
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        vector<int>output;

        int top=0, bottom=m-1,left=0, right=n-1;

        while(top <= bottom && left <= right)
        {
            if(top <= bottom && left <= right){
                for(int j=left; j<=right; j++){
                    output.push_back(matrix[top][j]);
                }
                top++;
            }
            
            if(top <= bottom && left <= right){
                for(int i=top;i<=bottom;i++){
                    output.push_back(matrix[i][right]);
                }
                right--;
            }
            if(top <= bottom && left <= right){
                for(int j=right; j>=left; j--){
                    output.push_back(matrix[bottom][j]);
                }
                bottom--;
            }
            if(top <= bottom && left <= right){
                for(int i=bottom; i>=top; i--){
                    output.push_back(matrix[i][left]);
                }
                left++;
            }
        }
        return output;
    }
};

