class Solution {
public:
    long long maxTotalValue(vector<int>& nums, int k) {
        long long int max=-1;
        long long int min=INT_MAX;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<min) min=nums[i];
            if(nums[i]>max) max=nums[i];
        }
        long long int res;
        return (max-min)*k;
    }
};