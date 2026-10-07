class Solution {
public:
    int maxDifference(string s) {
        unordered_map<char,int> hash;
        vector<char> save;
        for(int i=0;i<s.size();i++){
            if(hash.find(s[i])==hash.end()){
                hash[s[i]]=1;
                save.push_back(s[i]);
            }
            else hash[s[i]]++;
        }
        int max_odd=INT_MIN;
        int min_even=INT_MAX;
        for(int i=0;i<save.size();i++){
            if(hash[save[i]]%2==1 && hash[save[i]]>max_odd )max_odd=hash[save[i]];
            else if(hash[save[i]]%2==0 && hash[save[i]]<min_even )min_even=hash[save[i]];
        }
        return max_odd-min_even;     
    }
};