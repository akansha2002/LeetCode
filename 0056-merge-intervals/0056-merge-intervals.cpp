// tc - o(nlogn)
// sc - o(n)

class Solution {
public:

    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>>output;
        

        sort(intervals.begin(), intervals.end());
        output.push_back(intervals[0]);

        for(int i=1; i < intervals.size(); i++){
            if(intervals[i][0] <= output.back()[1]){
                output.back()[1] = max(output.back()[1], intervals[i][1]);
            }else{
                output.push_back(intervals[i]);
            }
        }
        return output;
    }
};