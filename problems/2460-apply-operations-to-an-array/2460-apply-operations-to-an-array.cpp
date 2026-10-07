class Solution {
public:
    vector<int> applyOperations(vector<int>& nums) {
        int lenght=nums.size();
        for(int i=0;i<lenght-1;i++)
        {
            if(nums[i]==nums[i+1])
            {
                nums[i] =nums[i]*2;
                nums[i+1]=0;
            }
        }
        int slow=0;
        for(int fast=1;fast<lenght;fast++)
        {
            if(nums[slow]==0 &&nums[fast]!=0){
                nums[slow]=nums[fast];
                nums[fast]=0;
                slow++;
            }
            else if (nums[slow]==0 &&nums[fast]==0) continue;
            else if (nums[slow]!=0) slow++;
        }
        return nums;
    }
};