class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        int r=edges.size();
        int c=edges[0].size();
        int n1 = edges[0][0], n2 = edges[0][1];
        if(n1 == edges[1][0] || n1 == edges[1][1]) return n1;
        else return n2;
    }
};