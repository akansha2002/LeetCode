class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int ans = 0;
        int length = 0;
        
        for(int i=0; i < nums.size(); i++){
            if(nums[i] == 1) 
            {
                length++;
                ans = max(ans, length);
            }
            else length=0;
        }
        return ans;
    }
};