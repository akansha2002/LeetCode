class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<vector<int>>ans;
        vector<int> a ;
        a.push_back(1);
        ans.push_back(a);
        for(int i=1; i <= rowIndex; i++){
            vector<int>temp;
            temp.push_back(1);
            for(int j=1;j<=ans[i-1].size()-1;j++){
                temp.push_back(ans[i-1][j-1] + ans[i-1][j]);
            }
            temp.push_back(1);
            ans.push_back(temp);
        }
        return ans.back();
    }
};