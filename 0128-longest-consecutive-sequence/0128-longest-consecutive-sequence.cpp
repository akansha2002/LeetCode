// Approach - 1 (Brute force)
// traverse through array and for nums[i], find if nums[i+1] exist , 
// increment the count and update x = nums[i+1]
// O(N^3)

// Approach - 2 (Sorting)
// TC - O(N * logN)

// Approach - 3 (Unordered Set)
// store the elemets in unordered set
// traverse over unordered_set , x-1 exist, then move on to next element
// else find x+1 and keep on incrementing the counter
// TC - O(3 * N)

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int>s;
        int ans = 0;

        for(int i=0; i <nums.size(); i++){
            s.insert(nums[i]);
        }

        for(auto it : s){
            int x = it;
            if(s.find(x-1) != s.end()){
                continue;
            } else{
                int temp=1;
                while(s.find(x+1) != s.end()){
                    temp++;
                    x++;
                }
                ans = max(ans, temp);
            }
        }
        return ans;
    }
};