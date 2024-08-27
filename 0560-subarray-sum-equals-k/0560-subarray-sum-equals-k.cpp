class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int> mpp;
        mpp[0] = 1;
        int presum = 0, cnt = 0;
        for(auto it:nums){
            presum += it;
            int dis = presum - k;
            if(mpp.find(dis) != mpp.end()) cnt += mpp[dis];
            mpp[presum]++;
        }
        return cnt;
    }
};