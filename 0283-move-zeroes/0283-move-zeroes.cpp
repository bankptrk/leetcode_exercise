class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        for(int i=0,p=0;i<nums.size();i++){
            if(nums[i])
            swap(nums[i],nums[p++]);
        }
    }
};