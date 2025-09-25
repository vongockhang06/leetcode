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
    vector<double> averageOfLevels(TreeNode* root) {
        if(!root) return {0.0};
        vector <double> res;
        queue <TreeNode*> st;
        st.push(root);
        int level=0;
        while(!st.empty()){
            double sum=0;
            int count=0;
            int s=st.size();
            for(int i=0;i<s;i++){
                TreeNode*temp=NULL;
                temp=st.front();
                st.pop();
                if(!temp) continue;
                if(temp->left) st.push(temp->left);
                if(temp->right) st.push(temp->right);
                count++;
                sum+=temp->val;
            }  
            level++;
            res.push_back(sum/count);
        }
        return res;
    }
};