class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        long long count=0;
        long long ans =0;

        for(int i=0; i < nums.size();)
        {
           
                count=0;
            while(i<nums.size() && nums[i]==0){
                count++;
                i++;
            }
            i++;
            long long x = count;
            x = x * (x+1);
            x = x/2;
            
            ans += x;
        }
        return ans;
    }
};