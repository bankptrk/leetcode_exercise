class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int,int> mpp;
        for(int num:nums) mpp[num]++;
        for(pair<int,int> m:mpp){
            if(m.second == 1) return m.first;
        }
        return -1;
    }
};