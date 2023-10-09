class Solution {
public:
    int firstOccurence(vector<int>& nums, int target, int ans){
        int s = 0, e = nums.size()-1;
        while(s <= e){
            int mid = s + (e-s)/2;
            if(nums[mid] == target) {
                ans = mid;
                e = mid-1;
            }
            else if(nums[mid] > target) e = mid-1;
            else  s = mid+1;
        }
        return ans;
    }

    int lastOccurence(vector<int>&nums, int target, int ans){
        int s = 0, e = nums.size()-1;
        while(s <= e){
            int mid = s + (e-s)/2;
            if(nums[mid] == target) {
                ans = mid;
                s = mid+1;
            }
            else if(nums[mid] > target)e = mid-1;
            else s = mid+1;
        }
        return ans;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
         vector<int> ans(2,-1);
         int x = -1;
         ans[0] = firstOccurence(nums, target, x);
         ans[1] = lastOccurence(nums, target, x);
        return ans;
    }
};