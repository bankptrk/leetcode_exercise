class Solution {
public:
    void helper(int n,int k,int index,vector<int>& subset, vector<vector<int>>& ans){
        if(k == 0){
            ans.push_back(subset);
            return;
        }
        if(index > n) return;
        subset.push_back(index);
        helper(n,k-1,index+1,subset,ans);
        subset.pop_back();
        helper(n,k,index+1,subset,ans);
    }
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> ans;
        vector<int> subset;
        helper(n,k,1,subset,ans);
        return ans;
    }
};