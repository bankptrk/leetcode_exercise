class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int closest = nums[0]+nums[1]+nums[2];
        for(int i=0;i<nums.size();i++){
            int start = i+1, end = nums.size()-1;
            while(start<end){
                int curr = nums[i]+nums[start]+nums[end];
                if(abs(curr-target) < abs(closest-target)) closest = curr;
                else if(curr < target) start++;
                else end--;
            }
        }
        return closest;
    }
};