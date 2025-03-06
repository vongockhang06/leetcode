class Solution {
public:
    int sumOfGoodNumbers(vector<int>& nums, int k) {
        bool condition=true;
        int sum=0;
        int j;
        for(int i=0;i<nums.size();i++){
            condition=true;
            j=i-k;
            if(j>=0 && nums[j]>=nums[i]) condition=false;
            j=i+k;
            if(j<=nums.size()-1 && nums[j]>=nums[i]) condition=false;
            if(condition) sum+=nums[i];
        } 
        return sum;
    }
};