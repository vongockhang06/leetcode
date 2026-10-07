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
    int minDepth(TreeNode* root) {
        // if (!root) return 0;
        // int l=0,r=0;
        // if(!root->left && !root->right) return 1;
        // if(!root->left) return minDepth(root->right)+1;
        // if(!root->right) return minDepth(root->left)+1;
        // return min(minDepth(root->left), minDepth(root->right)) + 1;
        if(!root) return 0;
        queue <TreeNode*> q;
        q.push(root);
        int depth=1;
        while(!q.empty()){
            int size=q.size();
            for(int i=0;i<size;i++){
                TreeNode* curr = q.front();
                q.pop();
                if(!curr) continue;
                if(!curr->left && !curr->right) return depth;
                q.push(curr->right);
                q.push(curr->left);
            }
            depth++;
        }
        return depth;
    }
};