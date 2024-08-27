class Solution {
public:
    void perm(vector<int>& nums,int index, vector<vector<int>>& ans){
        if(nums.size() == index){
            ans.push_back(nums);
            return;
        }
        unordered_set<int> s;
        for(int i=index; i<nums.size(); i++){
            if(s.find(nums[i]) != s.end()) continue;
            s.insert(nums[i]);
            swap(nums[i],nums[index]);
            perm(nums,index+1,ans);
            swap(nums[i],nums[index]);
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>> ans;
        perm(nums,0,ans);
        return ans;
    }
};