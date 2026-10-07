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
    void helper(vector<int> &res,TreeNode*root){
        if(!root) return;
        res.push_back(root->val);
        if(!root->left) return ;
        helper(res,root->right);
        helper(res,root->left);
    }
    int findSecondMinimumValue(TreeNode* root) {
        vector<int> res;
        helper(res,root);
        sort(res.begin(),res.end());
        int n=res[0];
        for(int i=1;i<res.size();i++){
            if(res[i]>n) return res[i];
        }
        return -1;
    }
};