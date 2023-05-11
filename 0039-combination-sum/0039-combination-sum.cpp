class Solution {
public:
    void solve(vector<int> candidates, int target, vector<int>output, 
                vector<vector<int>> &ans, int index)
    {
        if(index == candidates.size())
        {
            if(target == 0){
                ans.push_back(output);
            }
            return;
        }
        //pick
        if(candidates[index] <= target){
        output.push_back(candidates[index]);
        solve(candidates, target-candidates[index], output,ans, index );
        output.pop_back();
        }

        //not pick
        solve(candidates, target, output,ans, index+1 );

    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int>output;
        vector<vector<int>>ans;
        solve(candidates, target, output, ans, 0);
        return ans;
    }
};