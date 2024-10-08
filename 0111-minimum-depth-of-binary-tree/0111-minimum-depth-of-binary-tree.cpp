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
public:
    int minDepth(TreeNode* root) {
        if(!root) return 0;
        int ans = INT_MAX;
        help(root,0,ans);
        return ans;
    }
    void help(TreeNode* root,int depth,int &ans){
        if(!root) return;
        depth++;
        if(!root->left && !root->right)
        ans = min(ans,depth);
        help(root->left,depth,ans);
        help(root->right,depth,ans);
    }
};