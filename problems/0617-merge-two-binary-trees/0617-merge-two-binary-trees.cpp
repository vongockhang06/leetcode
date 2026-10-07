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
//Way 1:Recursion
    // TreeNode* helper(TreeNode* root1, TreeNode* root2){
    //     TreeNode*temp=new TreeNode;
    //     if(!root1&&!root2) return NULL;
    //     else if(!root1&&root2){
    //         temp->val=root2->val;
    //         temp->left=helper(NULL,root2->left);
    //         temp->right=helper(NULL,root2->right);
    //     }
    //     else if(root1&&!root2){
    //         temp->val=root1->val;
    //         temp->left=helper(root1->left,NULL);
    //         temp->right=helper(root1->right,NULL);
    //     }
    //     else if(root1&&root2){
    //         temp->val=root1->val+root2->val;
    //         temp->left=helper(root1->left,root2->left);
    //         temp->right=helper(root1->right,root2->right);
    //     }
    //     return temp;
    // }


    TreeNode* mergeTrees(TreeNode* root1, TreeNode* root2) {
        //Way 1: recursion
        // if(!root1) return root2;
        // if(!root2) return root1; 
        // return helper(root1,root2);

        //Way 2:
        
    }
};