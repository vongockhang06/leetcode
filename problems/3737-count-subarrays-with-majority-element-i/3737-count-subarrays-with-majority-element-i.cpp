class Solution {
public:
    int countMajoritySubarrays(vector<int>& nums, int target) {
        int count=0;
        int size = nums.size();
        for(int i=0;i<size;i++){
            int temp=0;
            for(int j=i;j<size;j++){
                if(nums[j]==target) temp++;
                if(temp>(j-i+1)/2) count++;
            }
        }
        return count;
    }
};