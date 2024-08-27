class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        int ic = true, dc = true;
        for(int i=0; i<nums.size()-1; i++){
            if(nums[i] < nums[i+1]) dc = false;
            else if(nums[i] > nums[i+1]) ic = false;
            else continue;
        }
        return ic || dc;
    }
};