class Solution {
private:
    int lower_bound(vector<int>&nums, int l, int r, int target){
        while(l <= r){
            int mid = l+(r-l)/2;
            if(nums[mid] < target) l = mid+1;
            else r = mid-1;
        }
        return l;
    }
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int start = lower_bound(nums,0,nums.size()-1,target);
        int end = lower_bound(nums,0,nums.size()-1,target+1)-1;
        if(start < nums.size() && nums[start] == target) return {start,end};
        return {-1,-1};
    }
};