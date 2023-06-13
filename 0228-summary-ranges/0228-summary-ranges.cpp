// Approach
// we will start the loop from first index
// if we find nums[i] == nums[i-1], then, end = i;
// but if nums[i] != nums[i-1], then we will push the prev string to output & start = i & end= i

class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {

        vector<string>output;
        int start = 0, end = 0;
        string temp;
        
        if(nums.size() == 0) return output;

        for(int i=1 ; i < nums.size(); i++){

            if(nums[i] == nums[i-1] + 1)end = i;
            else{
                if(nums[start] == nums[end]) temp = to_string(nums[start]); 
                else temp = to_string(nums[start]) + "->" + to_string(nums[end]);

                output.push_back(temp);
                start = i, end = i;
            }
        }

        // for last element
        if(start == end) temp = to_string(nums[start]); 
        else temp = to_string(nums[start]) + "->" + to_string(nums[end]);
        output.push_back(temp);

        return output;
    }
};