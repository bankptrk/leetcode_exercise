class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> ans(nums.size());
        int posnum = 0, negnum = posnum+1;
        for(int i=0; i<nums.size(); i++){
            if(nums[i] > 0){
                ans[posnum] = nums[i];
                posnum += 2;
            }else{
                ans[negnum] = nums[i];
                negnum += 2;
            }
        }
        return ans;
    }
};