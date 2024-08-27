class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int presum = 0, ans = INT_MAX, j = 0;
        for(int i=0; i<nums.size(); i++){
            presum += nums[i];
            while(presum >= target){
                presum -= nums[j];
                ans = min(i-j+1,ans);
                j++;
            }
        }
        return ans == INT_MAX ? 0 : ans;
    }
};