class Solution {
public:
    bool satisfiesConditions(vector<vector<int>>& grid) {
        //grid[i][j] == grid[i + 1][j]
        //grid[i][j] != grid[i][j + 1]
        int r=grid.size();
        int c=grid[0].size();
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if((i+1)==r&&(j+1)==c) return true;
                else if((i+1)==r){
                    if(grid[i][j] == grid[i][j + 1]) return false;
                }
                else if((j+1)==c){
                    if(grid[i][j] != grid[i + 1][j]) return false;
                }
                else{
                    if(grid[i][j] == grid[i][j + 1] ||grid[i][j] != grid[i + 1][j]) return false;
                }
            }
        }
        return true;
    }
};