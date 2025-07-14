class Solution {
public:
    bool isValid(string s) {
       stack <char> checker;
       int size=s.size();
       if(size%2==1) return false;
       if(s[0]==')'||s[0]==']'||s[0]=='}') return false; 
       checker.push(s[0]);
       for(int i=1;i<size;i++){
            if(s[i]=='('||s[i]=='['||s[i]=='{') checker.push(s[i]);
            else if(s[i]==')'&&!checker.empty()&&checker.top()=='(') checker.pop();
            else if(s[i]==']'&&!checker.empty()&&checker.top()=='[') checker.pop();
            else if(s[i]=='}'&&!checker.empty()&&checker.top()=='{') checker.pop();
            else return false;
       }
       if(checker.empty()) return true;
       else return false;
    }
};