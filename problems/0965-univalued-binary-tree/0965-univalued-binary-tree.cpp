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
    bool helper(TreeNode*root, int check){
        if(!root) return true;
        if(root->val!=check) return false;
        return helper(root->left,check) && helper(root->right,check); 
    }
    bool isUnivalTree(TreeNode* root) {
        int value=root->val;
        return helper(root,value);
    }
};