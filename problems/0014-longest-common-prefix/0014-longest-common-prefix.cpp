class Solution {
public:
    string findCommonPrefix(string& x, string& y){
        int ptrx=0;
        int ptry=0;
        string prefix="";
        while(ptrx<x.size() && ptry<y.size() && x[ptrx]==y[ptry]){
            prefix+=x[ptrx];
            ptrx++;
            ptry++;
        }
        return prefix;
    }
    string longestCommonPrefix(vector<string>& strs) {
        int size = strs.size();
        if (size==1) return strs[0];
        string res = findCommonPrefix(strs[0],strs[1]);
        for(int i=2;i<size;i++){
            res = findCommonPrefix(res,strs[i]);
        }
        return res;
    }
};