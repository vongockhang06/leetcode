class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        vector<vector<int>> result(r,vector<int>(c));
        vector<int> save;
        int old_row=mat.size();
        int old_col=mat[0].size();
        if(old_row*old_col!=r*c) return mat;
        for(int i=0;i<old_row;i++){
            for(int j=0;j<old_col;j++){
                save.push_back(mat[i][j]);
            }
        }
        int k=0;
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                result[i][j]=save[k++];
            }
        }
        return result;
    }
};