class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int>m;
        priority_queue<pair<int, int>>pq;
        vector<int>ans;

        for(int i=0; i<nums.size();i++) m[nums[i]]++;
        for(auto it : m) pq.push({it.second, it.first});
        while(k--){
            int x = pq.top().second;
            ans.push_back(x);
            pq.pop();
        }
        return ans;
    }
};