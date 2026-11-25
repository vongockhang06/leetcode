class Solution {
public:
    bool is_valid(vector<bool>&cols, vector<bool>&diagonal, vector<bool>&antidiagonal,int row, int col, int n){
        if(cols[col]) return false;
        if (diagonal[row-col+n-1]) return false;
        if (antidiagonal[row+col]) return false;
        return true;
    }
    void backtrack(int row, vector<vector<string>>& res, vector<string>& temp, int n,vector<bool>&cols, vector<bool>&diagonal, vector<bool>&antidiagonal){
        if(row==n){
            res.push_back(temp);
            return;
        }
        for(int c=0;c<n;c++){
            if (is_valid(cols,diagonal,antidiagonal,row,c,n)){
                temp[row][c]='Q';
                cols[c]=true;
                diagonal[row-c+n-1]=true;
                antidiagonal[row+c]=true;
                backtrack(row+1,res,temp,n,cols,diagonal,antidiagonal);
                temp[row][c]='.';
                cols[c]=false;
                diagonal[row-c+n-1]=false;
                antidiagonal[row+c]=false;
            }
        }
    }
    vector<vector<string>> solveNQueens(int n) { 
        vector<vector<string>> res;
        vector<string> temp(n,string(n,'.'));
        vector<bool> cols(n,false);
        vector<bool> diagonal(2*n-1,false);
        vector<bool> antidiagonal(2*n-1,false);
        backtrack(0,res,temp,n,cols,diagonal,antidiagonal);
        return res;
    }
};