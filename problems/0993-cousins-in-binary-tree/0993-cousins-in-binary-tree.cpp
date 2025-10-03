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
    bool isCousins(TreeNode* root, int x, int y) {
       queue <TreeNode*> st;
       st.push(root);
       int level1,level2;
       int level=0;
       while(!st.empty()){
            int s=st.size();
            for(int i=0;i<s;i++){
                TreeNode* temp=st.front();
                st.pop();
                if(!temp) continue;
                if(temp->left&&temp->right){
                    int l=temp->left->val;
                    int r=temp->right->val;
                    if(l==x && r==y) return false;
                    else if(l==y && r==x) return false;
                }
                if(temp->val==x) level1=level;
                if(temp->val==y) level2=level;
                st.push(temp->left);
                st.push(temp->right);
            }
            level++;
       }
       if(level1==level2) return true;
       else return false; 
    }
};