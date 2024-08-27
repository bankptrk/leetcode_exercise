class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int sum = 0;
        for(int i:nums) sum += i;
        int l = 0,r = nums.size()-1, leftsum = 0, rightsum = sum;
        while(l<=r){
            rightsum -= nums[l];
            if(rightsum == leftsum) return l;
            leftsum += nums[l++];
        }
        return -1;
    }
};