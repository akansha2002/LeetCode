// Approach - 1 ( 4 for loops )
// O(n^4)

// Approach - 2(Sorting)
// O(n3 * logn)

// Approach - 2(2 for loops, and 2 pointer approach)
// O(N^3)

// Approach - 3(Hashmaps)
// O(n^3)
// O(n)



class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        set<vector<int>>s;
        
        sort(nums.begin(), nums.end());

        for(int i=0; i < nums.size(); i++){
            for(int j=i+1; j < nums.size();j++){
                int k = j+1, l = nums.size()-1;
                while(k<l){
                    long long sum=nums[i];
                    sum+=nums[j];
                    sum+=nums[k];
                    sum+=nums[l];
                    if(sum>target){
                        l--;
                    }else if(sum<target){
                        k++;
                    }else{
                        s.insert({nums[i], nums[j], nums[k], nums[l]});
                        k++;
                        l--;
                        while(k<l && nums[k]==nums[k-1]){
                            k++;
                        }
                        while(k<l && nums[l]==nums[l+1]){
                            l--;
                        }
                    }
                }
            }
        }
        vector<vector<int>>ans (s.begin(), s.end());
        
        return ans;
    }
};