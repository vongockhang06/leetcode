class Solution {
public:
    bool wordPattern(string pattern, string s) {
        unordered_map <char,string> hash;
        unordered_map<string, char> reverse_hash;
        string sub;
        int start=0;
        int i=0;
        int count_word=0;
        for(int j=0;j<s.size();j++){
            if(s[j]==' '||j==(s.size()-1)){
                count_word++;
                if(j==s.size()-1) j++;
                sub=s.substr(start,j-start);
                start=j+1;
                if(hash.find(pattern[i])==hash.end()){
                    hash[pattern[i]]=sub;
                    if(reverse_hash.find(sub)!=reverse_hash.end()) return false;
                    reverse_hash[sub]=pattern[i];
                }
                else if(hash[pattern[i]]!=sub) return false;
                i++;
            }
        }
        if(count_word!=pattern.size()) return false;
        return true;
    }
};