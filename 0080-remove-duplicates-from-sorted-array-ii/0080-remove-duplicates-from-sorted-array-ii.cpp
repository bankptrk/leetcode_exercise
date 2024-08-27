class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i,j;
        for(i=0, j=0; j<nums.size(); j++){
            if(i==0 || i==1 || nums[j]!=nums[i-2]) nums[i++] = nums[j];
        }
        return i;
    }
};