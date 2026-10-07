class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        // int row=grid.size();
        // int column=row;
        // vector<int>arr(row*column,0);
        // vector<int> result;
        // for(int i=0;i<row;i++){
        //     for(int j=0;j<column;j++ ){
        //         arr[grid[i][j]-1]++;
        //     }
        // }
        // for(int i=0;i<row*column;i++){
        //     if(arr[i]==2) result.push_back(i+1);
        // }
        // for(int i=0;i<row*column;i++){
        //     if(arr[i]==0) result.push_back(i+1);
        // }
        // return result;
        vector<int>result;
        int n=grid.size();
        int row=n;
        int column=n;
        n=n*n;
        long int sum=n*(n+1)/2;
        long long int sumsquare=n*(n+1)*(2*n+1)/6;
        int realsum=0;
        int realsumsquare=0;
        for(int i=0;i<row;i++){
            for(int j=0;j<column;j++){
                realsum+=grid[i][j];
                realsumsquare+=pow(grid[i][j],2);
            }
        }
        int diffsum=realsum-sum;
        int diffsqsum=realsumsquare-sumsquare;
        int sum2number=diffsqsum/diffsum;
        int x=(sum2number+diffsum)/2;
        int y=x-diffsum;
        result.push_back(x);
        result.push_back(y);
        return result;
    }
};