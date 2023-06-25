// brute forc
// tc- o(n2)

// sorting
// o(nlogn)

// hashing
// o(n)

class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        
        int n=nums.size();
        int x=n/3;
        vector<int>result;
        unordered_map<int, int>m;
        for(int i=0;i<n;i++)
        {
            m[nums[i]]++;
            if(m[nums[i]]==x+1) result.push_back(nums[i]);
        }
        return result;
        
    }
};