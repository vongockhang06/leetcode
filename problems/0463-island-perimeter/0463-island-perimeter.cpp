class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int row=grid.size();
        int column=grid[0].size();
        int per=0;
        int per_one=4;
        for(int i=0;i<row;i++){
            for(int j=0;j<column;j++){
                per_one=4;
                if(grid[i][j]==1){
                    if((i-1)>-1 && grid[i-1][j]==1) per_one--;
                    if((i+1)<row && grid[i+1][j]==1) per_one--;
                    if((j+1)<column && grid[i][j+1]==1) per_one--;
                    if((j-1)>-1 && grid[i][j-1]==1) per_one--;
                    per+=per_one;
                }
            }
        }
        return per;
    }
};