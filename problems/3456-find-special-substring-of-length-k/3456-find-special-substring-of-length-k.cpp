class Solution {
public:
    bool hasSpecialSubstring(string s, int k) {
        int size=1;
        for(int i=1;i<s.size();i++){
            if(s[i]==s[i-1]) {
                size++;
            }
            else{
                if(size==k) return true;
                size=1;
            }
        }
        if(size!=k) return false;
        return true;


    }
};