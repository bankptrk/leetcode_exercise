class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int zcnt = 0 , ans = 0, j = 0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i] == 0) zcnt++;
            while(zcnt > 1){
                if(nums[j] == 0) zcnt--;
                j++;
            }
            ans = max(ans,i-j);
        }
        return ans;
    }
};