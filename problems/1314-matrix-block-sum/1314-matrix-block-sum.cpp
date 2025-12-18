class Solution {
public:
    vector<vector<int>> matrixBlockSum(vector<vector<int>>& mat, int k) {
        int row = mat.size();
        int col = mat[0].size();
        //calculate prefix sum for each row
        for(int i=0;i<row;i++){
            for(int j=1; j<col;j++){
                mat[i][j]+=mat[i][j-1];
            }
        }

        //main part
        vector<vector<int>> res(row,vector<int>(col,0));
        int rmin = -1;
        int rmax = k-1;
        int cmin = -1;
        int cmax =k-1;
        for(int i=0;i<row;i++){
            rmin=i-k;
            if(rmin<0) rmin=0;
            rmax=i+k;
            if(rmax >= row) rmax =row-1;
            for(int j=0; j<col;j++){
                cmin=j-k;
                if(cmin<0) cmin=0;
                cmax=j+k;
                if(cmax>=col) cmax=col-1;
                long long sum=0;
                for(int u=rmin;u<=rmax;u++){
                    sum+=mat[u][cmax];
                    if(cmin>=1) sum=sum - mat[u][cmin-1];
                }
                res[i][j]=sum;
            }
        }
        return res;
    }
};