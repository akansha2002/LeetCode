class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>ans;
        vector<int>small;
        small.push_back(1);
        ans.push_back(small);
        int a = 1;

        for(int i=1; i < numRows; i++){
            vector<int>small;
            
            small.push_back(1);
            for(int j=1;j<a; j++){
                small.push_back(ans[i-1][j-1] + ans[i-1][j]);
            }
            a++;
            small.push_back(1);
            ans.push_back(small);
        }
        return ans;
    }
};