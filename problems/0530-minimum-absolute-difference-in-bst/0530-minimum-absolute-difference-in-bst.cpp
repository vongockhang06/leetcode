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
    void inorder(TreeNode*root,vector<int>& res){
        if(!root) return;
        inorder(root->left,res);
        res.push_back(root->val);
        inorder(root->right,res);
    }
    int getMinimumDifference(TreeNode* root) {
        int difference=INT_MAX;
        vector<int> nums;
        inorder(root,nums);
        int size=nums.size();
        for(int i=0;i<size-1;i++){
            int temp=abs(nums[i]-nums[i+1]);
            if(temp<difference) difference=temp;
        }
        return difference;
    }
};