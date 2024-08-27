class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n,1);
        int product = 1;
        for(int i=0;i<n;i++){
            ans[i] = product;
            product *= nums[i];
        }
        product = 1;
        for(int j=n-1;j>=0;j--){
            ans[j] *= product;
            product *= nums[j];
        }
        return ans;
    }
};