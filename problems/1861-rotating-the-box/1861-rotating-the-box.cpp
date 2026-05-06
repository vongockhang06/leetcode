class Solution {
public:
    vector<vector<char>> rotateTheBox(vector<vector<char>>& grid) {
        int row=grid.size();
        int col=grid[0].size();
        vector<vector<char>> res(col,vector<char>(row));
        // for(int i=0;i<row;i++){
        //     for(int j=col-1;j>=0;j--){
        //         if(grid[i][j]=='#'){
        //             int mark=j;
        //             while(j+1<col &&grid[i][j+1]=='.'){
        //                 grid[i][j]='.';
        //                 grid[i][++j]='#';
        //             }
        //             j=mark;
        //         }
        //     }
        // }
        for(int i=0;i<row;i++){
            int most_right = col-1;
            for(int j=col-1;j>=0;j--){
                if(grid[i][j]=='*'){
                    most_right=j-1;
                }
                else if(grid[i][j]=='#'){
                    grid[i][j]='.';
                    grid[i][most_right]='#';
                    most_right--;
                }
            }
        }




        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                res[j][row-1-i]=grid[i][j];
            }
        }  
        return res;
    }
};