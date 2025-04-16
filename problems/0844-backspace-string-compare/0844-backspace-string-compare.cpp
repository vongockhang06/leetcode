class Solution {
public:
    bool backspaceCompare(string s, string t) {
        string s1="";
        string t1="";
        for(int i=0;i<s.size();i++)
        {
            if(s[i]!='#') s1+=s[i];
            else {
                if(s1.size()!=0)
                    s1.erase(s1.size()-1,1);
            }
        }
        for(int i=0;i<t.size();i++)
        {
            if(t[i]!='#') t1+=t[i];
            else {
                if(t1.size()!=0)
                    t1.erase(t1.size()-1,1);
            }
        }
        if(t1==s1) return true;
        else return false;
    }
};