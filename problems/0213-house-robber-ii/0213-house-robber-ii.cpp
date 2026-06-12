class Solution {
public:
    int original_rob(vector<int>&nums){
        int size=nums.size();
        vector<int> dp(size,0);
        //===================================
        dp[0]=nums[0];
        dp[1]=max(nums[0],nums[1]);
        for(int i=2;i<size;i++){
            int rob=nums[i]+dp[i-2];
            int skip=dp[i-1];
            dp[i]=max(rob,skip);
        }
        return dp[size-1];
    }
    int rob(vector<int>& nums) {
        int size=nums.size();
        if(size==1) return nums[0];
        else if (size==2) return max(nums[0],nums[1]);

        vector<int>exclude_first(nums.begin()+1,nums.end());
        vector<int>exclude_last(nums.begin(),nums.end()-1);
        return max(original_rob(exclude_first),original_rob(exclude_last));
    }
};