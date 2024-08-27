class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int presum = 0 , cnt = 0;
        vector<int> groups(k);
        groups[0]++;
        for(int num : nums){
            presum = (presum + num % k + k) % k;
            cnt += groups[presum];
            groups[presum]++;
        }
        return cnt;
    }
};