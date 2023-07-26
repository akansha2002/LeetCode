class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end());
        int a=intervals[0][0], b = intervals[0][1], count = 0;
      // for(int i=0; i < intervals.size(); i++){
      //     cout<<intervals[i][0]<<" "<<intervals[i][1]<<endl;
      // }

        for(int i=1; i < intervals.size(); i++){
            
            // overlapping interval
            if(intervals[i][0] >= a && intervals[i][0] < b ){
                if( intervals[i][1] <= b) {
                    a=intervals[i][0];
                    b = intervals[i][1];   
                }
                count++;
            }
            // non overlapping interval
            else{
                a=intervals[i][0];
                b = intervals[i][1]; 
            }
              
            cout<<a<<" "<<b<<endl;
        }
        return count;
    }
};