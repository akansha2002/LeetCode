// to select max elements (k) from nums1
// to select max elements (k) from nums2

// we will make the pair of {nums2[i], nums1[i]}
                             // |           |
                            // min         sum
// then we will sort it in decreasing order
// then we will make a priority queue and add nums1[i] in it, -> sum part
// for sum we will use the priority queue and for min -> we will use sorted vector






class Solution {
public:
    long long maxScore(vector<int>& nums1, vector<int>& nums2, int k) {
        long long ans = 0, sum = 0;
        vector<pair<int, int>>v;
        priority_queue<int, vector<int>, greater<int>>pq;

        for(int i=0; i < nums1.size(); i++) v.push_back({nums2[i], nums1[i]});
        sort(v.rbegin(), v.rend());

        for(int i=0; i < k-1; i++){
            pq.push(v[i].second);
            sum += v[i].second;
        }
        for(int i=k-1; i <nums1.size(); i++){
            pq.push(v[i].second);
            sum += v[i].second;
            ans = max(ans, sum * v[i].first);
            sum -= pq.top();
            pq.pop();
        }
        return ans;



    }
};