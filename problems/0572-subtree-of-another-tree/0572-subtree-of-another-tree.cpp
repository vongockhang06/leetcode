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
    void findsubRoot(TreeNode* root, TreeNode* subRoot,vector<TreeNode*>&res){
        if(!root) return;
        if(root->val==subRoot->val){
            res.push_back(root);
        }
        findsubRoot(root->left,subRoot,res);
        findsubRoot(root->right,subRoot,res);
        
    }
    bool helper(TreeNode*root,TreeNode* subRoot){
        if(!root && subRoot) return false;
        if(root && !subRoot) return false;
        if(!root && !subRoot) return true;
        if(root->val!=subRoot->val) return false;
        bool left=helper(root->left,subRoot->left);
        bool right=helper(root->right,subRoot->right);
        return left&&right;
    }
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        vector<TreeNode*> res;
        findsubRoot(root,subRoot,res);
        int size=res.size();
        for(int i=0;i<size;i++){
            if(helper(res[i],subRoot)) return true;
        }
        return false;
    }
};