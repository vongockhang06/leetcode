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
    void helper(TreeNode*root,unordered_map<int,int>&freq){
        if(!root) return;
        if(freq.find(root->val)==freq.end()) freq[root->val]=1;
        else freq[root->val]++;
        helper(root->left,freq);
        helper(root->right,freq);
    }
    vector<int> findMode(TreeNode* root) {
        unordered_map<int,int> freq;
        vector<int> res;
        helper(root,freq);
        int max=-1;
        for(auto x:freq){
            if(x.second>max){
                res.clear();
                max=x.second;
                res.push_back(x.first);
            }
            else if(x.second==max) res.push_back(x.first);
        }
        return res;
    }
};