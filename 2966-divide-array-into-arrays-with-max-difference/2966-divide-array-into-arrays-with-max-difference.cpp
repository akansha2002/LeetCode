class Solution {
public:
    vector<vector<int>> divideArray(vector<int>& nums, int k) {
        vector<vector<int>>ans;
        if(nums.size() % 3 != 0) return ans;
        
        sort(nums.begin(), nums.end());
        
        for(int i=0; i < nums.size(); i++){
            if((i+1) % 3 == 0){
                if(nums[i] - nums[i-2] > k) return ans;
            }
        }
        
        for(int i=0 ; i < nums.size(); i+3){
            vector<int>small;
            int a = 3;
            while(a--){
                small.push_back(nums[i++]);
            }
            ans.push_back(small);
        }
        return ans;
    }
};