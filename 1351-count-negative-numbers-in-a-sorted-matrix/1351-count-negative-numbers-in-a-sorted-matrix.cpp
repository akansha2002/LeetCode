class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int m = grid.size(), n = grid[0].size(), cnt = 0;
        for(int i = 0; i < m; i++ ){
            int low = 0, high = n-1, mid;
            while(low <= high){
                mid = low + (high-low)/2;
                if(grid[i][mid] < 0){
                    cnt += high + 1 - mid;
                    high = mid - 1;
                }else{
                    low = mid+1;
                }
            }
        }
        return cnt;
    }
};