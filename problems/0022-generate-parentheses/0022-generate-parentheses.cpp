class Solution {
public:
    // bool isValid(string s) {
    //    stack <char> checker;
    //    int size=s.size();
    //    if(size%2==1) return false;
    //    if(s[0]==')'||s[0]==']'||s[0]=='}') return false; 
    //    checker.push(s[0]);
    //    for(int i=1;i<size;i++){
    //         if(s[i]=='('||s[i]=='['||s[i]=='{') checker.push(s[i]);
    //         else if(s[i]==')'&&!checker.empty()&&checker.top()=='(') checker.pop();
    //         else if(s[i]==']'&&!checker.empty()&&checker.top()=='[') checker.pop();
    //         else if(s[i]=='}'&&!checker.empty()&&checker.top()=='{') checker.pop();
    //         else return false;
    //    }
    //    if(checker.empty()) return true;
    //    else return false;
    // }

    // void helper(vector<string>&res,int n,string& temp,const string& parentheses,int start){
    //     if(temp.size()==(2*n)){
    //         if(isValid(temp)) res.push_back(temp);
    //         return;
    //     }
    //     for(int i=0;i<2;i++){//have only ( and ), parantheses.size()
    //         temp+=parentheses[i];
    //         helper(res,n,temp,parentheses,i);
    //         temp.pop_back();
    //     }
    // }

    void helper(vector<string>& res,int open,int close,string temp,int n){
        if(open==close && (open+close)==2*n){
            res.push_back(temp);
            return;
        }
        if(open<n) helper(res,open+1,close,temp+'(',n);
        if(close<open) helper(res,open,close+1,temp+')',n);
    }
    vector<string> generateParenthesis(int n) {
        vector<string>res;
        string temp="";
        //string parentheses="()";
        helper(res,0,0,temp,n);
        return res;
    }
};