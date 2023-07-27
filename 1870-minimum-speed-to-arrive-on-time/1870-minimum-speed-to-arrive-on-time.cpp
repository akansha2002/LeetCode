

class Solution {
public:
    double solve(vector<int>& dist, int speed) {
        double time = 0.0;
        for (int i = 0 ; i < dist.size()-1; i++) {
            double x = (double) dist[i] / (double) speed;

            time +=  ceil(x);
        }
        time += (double) dist[dist.size()-1] / (double) speed;
        return time;
    }
    
    int minSpeedOnTime(vector<int>& dist, double hour) {
        int s = 1;
        int e = 1e7+5;
        int minSpeed = -1;
        
        while (s <= e) {
            int mid = s+(e-s)/2;
            if (solve(dist, mid) <= hour) {
                minSpeed = mid;
                e = mid - 1;
            } else {
                s = mid + 1;
            }
        }
        return minSpeed;
    }
};
