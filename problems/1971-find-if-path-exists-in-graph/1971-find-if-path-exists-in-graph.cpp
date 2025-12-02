class Solution {
public:
    void dfs(const vector<vector<int>>& arr , vector<bool>& visit,int s){
        if(visit[s]) return;
        visit[s]=true;
        for(auto x:arr[s]){
            dfs(arr,visit,x);
        } 
    }
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination){
        vector<vector<int>> arr(n);
        vector<bool> visit (n,false);
        vector<bool> visit2 (n,false);
        for(auto x: edges){
            arr[x[0]].push_back(x[1]);
            arr[x[1]].push_back(x[0]);
        }
        dfs(arr,visit,source);
        if(visit[destination]) return true;
        return false;
    }
};