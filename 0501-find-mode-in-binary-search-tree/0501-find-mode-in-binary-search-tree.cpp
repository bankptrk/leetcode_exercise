/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
private:
    void dfs(TreeNode* root, unordered_map<int, int>& mpp){
        if(!root) return;
        dfs(root->left,mpp);
        mpp[root->val]++;
        dfs(root->right,mpp);
    }
public:
    vector<int> findMode(TreeNode* root) {
        unordered_map<int, int> mpp;
        int freq = 0;
        dfs(root,mpp);
        for(auto it : mpp) freq = max(freq,it.second);
        vector<int> ans;
        for(auto it : mpp){
            if(it.second == freq) ans.push_back(it.first);
        }
        return ans;
    }
};