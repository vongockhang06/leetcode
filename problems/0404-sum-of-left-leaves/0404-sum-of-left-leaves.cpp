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
    void helper(TreeNode*root, int &sum,bool left_ok){
        if(!root) return;
        if(!root->left && !root->right && left_ok){
            sum+=root->val;
            return;
        }
        helper(root->left,sum,true);
        helper(root->right,sum,false);
    }
    int sumOfLeftLeaves(TreeNode* root) {
        int sum=0;
        if(!root->left &&!root->right) return sum;
        helper(root->left,sum,true);
        helper(root->right,sum,false);
        return sum;
    }
};