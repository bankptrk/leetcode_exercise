class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int count = 0;
        for(int i=0,j=1; i<nums.size() && j<nums.size();){
            if(nums[j] - nums[i] == k){
                count++;
                i++;
                j++;
                while(j<nums.size() && nums[j] == nums[j-1]) j++;
            }else if(nums[j] - nums[i] < k) j++;
            else{
                i++;
                if(i == j) j++;
            }
        }
        return count;
    }
};