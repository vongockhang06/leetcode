class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        int row=trust.size();
        vector<vector<int>> str(2,vector<int>(n+1));
        //row 0 is for trust someone
        //row 1 is for being someone trust;
        for(int i=0;i<row;i++){
            for(int j=0;j<2;j++){
                int person=trust[i][j];
                if(j==0) str[0][person]++;
                else str[1][person]++;
            }
        }
        for(int i=1;i<=n;i++){
            if(str[0][i]==0 && str[1][i]==(n-1)) return i;
        }
        return -1;
    }
};