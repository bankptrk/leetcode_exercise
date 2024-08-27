class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size()-1;
        int index = -1;
        for(int i = n-1; i>=0 ; i--){
            if(nums[i] < nums[i+1]){
                index = i;
                break;
            }
        }
        for(int i = n; i>=0 && index >= 0 ; i--){
            if(nums[i] > nums[index]){
                swap(nums[i],nums[index]);
                break;
            }
        }
        reverse(nums.begin()+1+index,nums.end());
    }
};