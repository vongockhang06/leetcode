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
    int findMaxDepth(TreeNode*root){
        if(!root) return 0;
        int left=findMaxDepth(root->left);
        int right=findMaxDepth(root->right);
        return max(left,right)+1;
    }
    void helper(TreeNode*root,int&max){
        if(!root) return;
        int temp=findMaxDepth(root->left)+findMaxDepth(root->right);
        max=(max>temp)?max:temp;
        helper(root->left,max);
        helper(root->right,max);
    }
    int diameterOfBinaryTree(TreeNode* root) {
        int max=-1;
        helper(root,max);
        return max;
    }
};