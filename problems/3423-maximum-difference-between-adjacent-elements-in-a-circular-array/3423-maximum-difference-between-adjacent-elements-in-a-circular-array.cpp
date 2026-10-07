class Solution {
public:
    int maxAdjacentDistance(vector<int>& nums) {
        int difference=abs(nums[nums.size()-1]-nums[0]);
        for(int i=0;i<nums.size()-1;i++){
            if(abs(nums[i+1]-nums[i])>difference) difference=abs(nums[i+1]-nums[i]);
        }
        return difference;
    }
};