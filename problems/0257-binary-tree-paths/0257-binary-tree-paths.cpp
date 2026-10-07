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
    void helper(TreeNode* root,string temp,vector<string>&res){
        if(!root) return;
        if(!root->left && !root->right){
            temp=temp+to_string(root->val);
            res.push_back(temp);
            return;
        }
        temp=temp+ to_string(root->val) +"->";
        helper(root->left,temp,res);
        helper(root->right,temp,res);
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        if(!root->left && !root->right) return {to_string(root->val)};
        string temp="";
        vector<string> res;
        helper(root,temp,res);
        return res;
    }
};