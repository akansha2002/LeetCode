// approach - 1(hashing)
// tc - o(n)
// sc - o(n)



class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int lastCorrectNo = nums[0];
        int correctIndex = 1;
        
        for(int i=0; i < nums.size(); i++){
            if(nums[i] == lastCorrectNo) continue;
            nums[correctIndex++] = nums[i];
            lastCorrectNo = nums[i];
        }
        return correctIndex;
    }
};