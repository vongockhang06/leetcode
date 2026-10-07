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
    void helper(TreeNode*root,vector <int> & st){
        if(!root) return;
        st.push_back(root->val);
        helper(root->left,st);
        helper(root->right,st);
        return;
    }
    bool findTarget(TreeNode* root, int k) {
        vector<int> st;
        helper(root,st);
        unordered_map <int,int> check;
        for(int i=0;i<st.size();i++){
            if(check.find(k-st[i])!=check.end()) return true;
            else {
                check[st[i]]=i;
            }
        }
        return false;
    }
};