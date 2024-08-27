class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int cnt = 0;
        unordered_map<int,int> mpp;
        for(int i:nums) mpp[i]++;
        for(pair<int,int> j: mpp){
            int n = j.second-1;
            cnt = cnt+(n*(n+1)/2);
        }
        return cnt;
    }
};