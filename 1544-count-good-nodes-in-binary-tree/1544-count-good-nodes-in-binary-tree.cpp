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
    int count = 0;
    int goodNodes(TreeNode* root) {
        if(!root) return 0;
        helpergoodNodes(root,root->val);
        return count;
    }
    void helpergoodNodes(TreeNode* root,int curr){
        if(!root) return;
        if(root->val >= curr){
            curr = root->val;
            count++;
        }
        helpergoodNodes(root->left,curr);
        helpergoodNodes(root->right,curr);
    }
};