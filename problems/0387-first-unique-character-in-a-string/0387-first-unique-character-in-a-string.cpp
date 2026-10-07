class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map <char,vector<int>> count;
        for(int i=0;i<s.size();i++){
            count[s[i]].push_back(i);
        }
        int ans=s.size();
        for(auto x: count){
            if(x.second.size()==1) ans=min(ans,x.second[0]);
        }
        if(ans<s.size()) return ans;
        return -1;
    }
};