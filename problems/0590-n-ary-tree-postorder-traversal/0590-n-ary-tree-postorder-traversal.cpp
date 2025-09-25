/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    void helper(Node*root,vector<int>& res){
        if(!root) return;
        if(root->children.size()==0){
            res.push_back(root->val);
            return;
        }
        for(int i=0;i<root->children.size();i++){
            helper(root->children[i],res);
        }
        res.push_back(root->val);
        return;
    }
    vector<int> postorder(Node* root) {
        //Way1: Stack;
        // vector <int> res;
        // stack<Node*> store;
        // store.push(root);
        // while(!store.empty()){
        //     Node *temp=store.top();
        //     store.pop();
        //     if(!temp) continue;
        //     res.push_back(temp->val);
        //     for(int i=0;i<temp->children.size();i++){
        //         store.push(temp->children[i]);
        //     }
        // }
        // reverse(res.begin(),res.end()); 
        // return res;

        //Way 2
        vector <int> res;
        helper(root,res);
        return res;
    }
};