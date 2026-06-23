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
    TreeNode* helper(const vector<int>&nums, int begin, int end){
        if(begin>end) return NULL;
        TreeNode *root = new TreeNode();
        int mid=(begin+end)/2;
        root->val=nums[mid];
        root->left = helper(nums,begin,mid-1);
        root->right = helper(nums,mid+1,end);
        return root;
    }
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        TreeNode* root=helper(nums,0,nums.size()-1);
        return root;
    }
};