class Solution {
public:
    int helper(int m,int n,vector<vector<int>>&table){
        if(table[m][n]>=0) {
            if(n<table.size() && m<table[0].size()){
                table[n][m]=table[m][n];
            }
            return table[m][n];
        }
        else return table[m][n]=helper(m-1,n,table)+helper(m,n-1,table);
    }
    int uniquePaths(int m, int n) {
        vector<vector<int>> table(m+1, vector<int>(n+1, -1));
        for(int j=0;j<n+1;j++){
            table[0][j]=0;
            table[1][j]=1;
        }
        for(int j=0;j<m+1;j++){
            table[j][0]=0;
            table[j][1]=1;
        }
        return helper(m,n,table);
    }
};