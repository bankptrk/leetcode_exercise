class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int curmax = nums[0], maxvalue = nums[0];
        for(int i=1; i<nums.size(); i++){
            curmax = max(nums[i],nums[i]+curmax);
            maxvalue = max(maxvalue,curmax);
        }
        return maxvalue;
    }
};