class Solution {
public:
    void helper(vector<int>& nums,int i,vector<int>& subset,vector<vector<int>>& ans){
        if(i == nums.size()){
            ans.push_back(subset);
            return;
        }
        subset.push_back(nums[i]);
        helper(nums,i+1,subset,ans);
        subset.pop_back();
        while(i+1 < nums.size() && nums[i] == nums[i+1]) i++;
        helper(nums,i+1,subset,ans);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> ans;
        vector<int> subset;
        helper(nums,0,subset,ans);
        return ans;
    }
};