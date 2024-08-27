class Solution {
public:
    void helper(vector<int>& nums, int i,vector<int>& subset ,vector<vector<int>>& ans){
        if(i == nums.size()){
            ans.push_back(subset);
            return;
        }
        // include
        subset.push_back(nums[i]);
        helper(nums,i+1,subset,ans);
        // not include
        subset.pop_back();
        helper(nums,i+1,subset,ans);

    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> subset;
        helper(nums,0,subset,ans);
        return ans;
    }
};