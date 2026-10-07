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
    int findBottomLeftValue(TreeNode* root) {
        queue <TreeNode*> visit;
        visit.push(root);
        int res=root->val;
        while(!visit.empty()){
            bool first_detect=true;
            int size=visit.size();
            for(int i=0;i<size;i++){
                TreeNode*temp=visit.front();
                visit.pop();
                if(!temp) continue;
                if(first_detect) {
                    res=temp->val;
                    first_detect=false;
                }
                visit.push(temp->left);
                visit.push(temp->right);
            }
        }
        return res;
    }
};