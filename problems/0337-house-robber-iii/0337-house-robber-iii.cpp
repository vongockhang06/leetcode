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
    vector<int> dp(TreeNode*root){
        if(!root) return {0,0};
        vector<int> left= dp(root->left);
        vector<int> right=dp(root->right);
        int skip= max(left[0],left[1]) + max(right[0],right[1]);
        int rob= root->val + left[0] + right[0];
        return {skip,rob}; 
    }
    int rob(TreeNode* root) {
        vector<int>ans=dp(root);
        int rob_root=ans[0];
        int skip_root=ans[1];
        return max(rob_root,skip_root);
    }
};