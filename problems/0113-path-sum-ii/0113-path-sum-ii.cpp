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
    void dfs(TreeNode*root, int targetSum, vector<int>& temp, vector<vector<int>>& res){
        if(!root) return;
        temp.push_back(root->val);
        if(targetSum==root->val && !root->left && !root->right ){
            res.push_back(temp);
        }
        //do
        else{
        dfs(root->left,targetSum-root->val,temp,res);
        dfs(root->right,targetSum-root->val,temp,res);
        }
        //undo
        temp.pop_back();

    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<vector<int>> res;
        vector<int> temp;
        dfs(root,targetSum, temp,res);
        return res;
    }
};