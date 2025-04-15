class Solution {
public:
    int deleteGreatestValue(vector<vector<int>>& grid) {
        int r=grid.size();
        int c=grid[0].size();
        int operation=c;
        int max=-1;
        int max_to_answer=0;
        int answer=0;
        int index=0;
        while(operation>0){
            for(int i=0;i<r;i++){
                max=grid[i][0];
                for(int j=0;j<c;j++){
                    if(grid[i][j]>=max) {
                        max=grid[i][j];
                        index=j;
                    }
                }
                grid[i][index]=0;
                if(max>max_to_answer) max_to_answer=max;
            }
            answer+=max_to_answer;
            max_to_answer=0;
            operation--;
        }
        return answer;
    }
};