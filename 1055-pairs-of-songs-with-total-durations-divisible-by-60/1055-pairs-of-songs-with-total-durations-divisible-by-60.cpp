class Solution {
public:
    int numPairsDivisibleBy60(vector<int>& time) {
        vector<int> v(60,0);
        int ans = 0;
        for(auto &ith: time){
            int x = ith % 60;
            int y = (60-x)%60;
            ans += v[y];
            v[x]++;
        }
        return ans;
    }
};