class Solution {
private:
    int maxDiff(vector<int>& nums, int l, int r){
        if(l == r) return nums[l];
        int leftscore = nums[l] - maxDiff(nums,l+1,r);
        int rightscore = nums[r] - maxDiff(nums,l,r-1);
        return max(leftscore,rightscore);
    }
public:
    bool PredictTheWinner(vector<int>& nums) {
        return maxDiff(nums,0,nums.size()-1) >= 0;
    }
};