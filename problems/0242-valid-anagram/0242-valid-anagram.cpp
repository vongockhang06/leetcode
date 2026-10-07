class Solution {
public:
    // bool isAnagram(string s, string t) {
    //     vector <int> alphabet(26);
    //     for(int i=0;i<s.size();i++){
    //         alphabet[s[i]-97]++;
    //     }
    //     for(int i=0;i<t.size();i++){
    //         alphabet[t[i]-97]--;
    //     }
    //     for(int i=0;i<26;i++){
    //         if(alphabet[i]!=0) return false;
    //     }
    //     return true;
    // }
    bool isAnagram(string s, string t) {
        unordered_map <char,int> hash;
        if(s.size()!=t.size()) return false;
        for(int i=0;i<s.size();i++){
            if(hash.find(s[i])==hash.end()) hash[s[i]]=1;
            else hash[s[i]]++;
            if(hash.find(t[i])==hash.end()) hash[t[i]]=-1;
            else hash[t[i]]--;
        }
        for(int i=0;i<s.size();i++){
            if(hash[s[i]]!=0) return false;
        }
        return true;
    }
};