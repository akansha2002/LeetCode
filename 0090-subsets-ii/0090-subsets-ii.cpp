class Solution {
public:
    void solve(set<vector<int>> &s, vector<int> buffer, int index, 
               vector<int> nums, int n)
    {
    
        // base case
        if(index == n)
        {
            sort(buffer.begin(), buffer.end());
            s.insert(buffer);
            return;
        }
    
        // pick
        buffer.push_back(nums[index]);
        solve(s, buffer, index+1,nums,n);
        buffer.pop_back();


        // not pick
        solve(s, buffer, index+1,nums, n);
    }
   
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
      
        vector<int>buffer;
        set<vector<int>>s;
        int n = nums.size();
        
         solve(s, buffer, 0, nums, n);
        
        return vector<vector<int>> (s.begin(), s.end());
        
    }
};