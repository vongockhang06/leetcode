class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
        unordered_map <int,vector<int>> st;
        vector<vector<int>> res;
        int size=groupSizes.size();
        for(int i=0;i<size;i++){
            int x =groupSizes[i];
            st[x].push_back(i);
            if(st[x].size()==x) {
                res.push_back(st[x]);
                st[x].clear();
            }
        }
        return res;
    }
};