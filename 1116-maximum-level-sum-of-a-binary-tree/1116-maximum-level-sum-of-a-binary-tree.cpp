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
    int maxLevelSum(TreeNode* root) {
        queue<TreeNode*> q;
        q.push(root);
        int maxi = INT_MIN;
        int level = 1;
        int maxlevel = 1;
        while(!q.empty()){
            int n = q.size(),sum = 0;
            for(int i=0; i<n; i++){
                TreeNode* curr = q.front();
                sum += curr->val;
                q.pop();
                if(curr->left) q.push(curr->left);
                if(curr->right) q.push(curr->right);
            }
            if(sum > maxi){
                maxi = sum;
                maxlevel = level;
            }
            level++;
        }
        return maxlevel;
    }
};