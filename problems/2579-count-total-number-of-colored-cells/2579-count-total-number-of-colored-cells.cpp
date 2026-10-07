class Solution {
public:
    long long coloredCells(int n) {
        long long int sum=1;
        for(int i=1;i<=n;i++){
            sum=sum+4*(i-1);
        }
        return sum;
    }
};