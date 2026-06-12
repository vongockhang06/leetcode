class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        cost.push_back(0);//represent top; to store result
        int n=cost.size(); //simulate the climbing stairs
        vector<int> dp(n,0);
        //dp[0]=dp[1]==0 
        for(int i=2;i<n;i++){
            dp[i]=min(dp[i-1]+cost[i-1],dp[i-2]+cost[i-2]);
        }
        return dp[n-1];
    }
};