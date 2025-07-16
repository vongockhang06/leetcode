class Solution {
public:
    
    void helper(const string&digits,const string digitToLetters[10],vector<string>&res,string&temp,int start_first){
        if(temp.size()==digits.size()) {
            res.push_back(temp);
            return;
        }
        for(int i=start_first;i<digits.size();i++){
            int k=digits[i]-'0';
            for(int j=0;j<digitToLetters[k].size();j++){
                temp+=digitToLetters[k][j];
                helper(digits,digitToLetters,res,temp,i+1);
                temp.pop_back();
            }
        }
    }
    vector<string> letterCombinations(string digits) {
        string digitToLetters[10] = {
        "",     // 0
        "",     // 1
        "abc",  // 2
        "def",  // 3
        "ghi",  // 4
        "jkl",  // 5
        "mno",  // 6
        "pqrs", // 7
        "tuv",  // 8
        "wxyz"  // 9
        };
        vector<string> res;
        if(digits.size()==0) return res;
        string temp="";
        helper(digits,digitToLetters,res,temp,0);
        return res;
    }
};