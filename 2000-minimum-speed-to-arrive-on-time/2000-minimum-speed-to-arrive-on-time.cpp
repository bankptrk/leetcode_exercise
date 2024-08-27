class Solution {
public:
    bool condition(int speed, vector<int>& dist, double hour){
        double time = 0;
        for(int i=0; i<dist.size()-1; i++){
            time += ceil(static_cast<double>(dist[i])/speed);
        }
        time += static_cast<double>(dist[dist.size()-1])/speed;
        return time <= hour;
    }
    int minSpeedOnTime(vector<int>& dist, double hour) {
        if(dist.size()-1 >= hour) return -1;
        int l = 1, r = 1e7;
        int ans = -1;
        while(l <= r){
            int mid = l+(r-l)/2;
            if(condition(mid,dist,hour)){
                ans = mid;
                r = mid-1;
            }else l = mid+1;
        }
        return ans;
    }
};