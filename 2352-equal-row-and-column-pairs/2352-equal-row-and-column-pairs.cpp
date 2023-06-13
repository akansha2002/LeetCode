class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        int n = grid.size(), m = grid[0].size(), ans = 0;
        unordered_map<string, int>mp;
        for(int i=0; i < n; i++){
            string s = "";
            for(int j=0; j<m; j++){
                s = s + to_string(grid[i][j])+"#";
            }
            
            mp[s]++;
        }
        cout<<endl;
        for(int j=0; j < m; j++){
            string s = "";
            for(int i=0; i <n; i++){
                s = s + to_string(grid[i][j])+"#";
            }
            
            if(mp[s] > 0) ans += mp[s];
        }
        return ans;
    }
};