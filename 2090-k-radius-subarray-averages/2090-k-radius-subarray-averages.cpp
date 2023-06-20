class Solution {
public:
    vector<int> getAverages(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> ans;
        vector<long long>arr;
        
        arr.push_back((long long)nums[0]);
        for(int i=1; i < n; i++) {
            long long c = (long long)nums[i] + arr[i-1];
            arr.push_back(c);
        }

        for(int i=0; i < n; i++){
            if(i < k || n-1 - i < k) ans.push_back(-1);
            else{
                if(i == k) {
                    long long x = (arr[i+k]/(long long)(2*k+1));
                    int y = (int)x;
                    ans.push_back(y);
                }
                else {
                    long long x = (arr[i+k] - arr[i-k-1])/(long long)(2*k+1) ;
                    int y = (int)x;
                    ans.push_back(y);
                }
            }
        }
        return ans;
    }
};