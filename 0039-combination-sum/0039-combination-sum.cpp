class Solution {
public:
    void solve(vector<vector<int>>& ans, vector<int>buffer, int target, 
               int index, int n, vector<int> candidates)
    {
        // base case
        
        if(index == n)
        {
            if(target == 0){
                ans.push_back(buffer);
            }
            return;
        }
        
        // pick
        if(candidates[index] <= target){
        buffer.push_back(candidates[index]);
        
        solve(ans, buffer, target-candidates[index], index, n, candidates);
        buffer.pop_back();
        }
        
        // not pick
        solve(ans, buffer, target, index+1, n, candidates);
        
    }
    
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> buffer;
        int  index=0, n = candidates.size(), sum = 0;
        
        solve(ans, buffer, target, index, n, candidates);
        
        return ans;
    }
};