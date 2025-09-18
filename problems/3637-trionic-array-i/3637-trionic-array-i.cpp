class Solution {
public:
    bool isTrionic(vector<int>& nums) {
        int position1=0;
        int position2=0;
        for(int i=1;i<nums.size();i++){
            if(nums[i]<=nums[i-1]) {
                position1=i;
                break;
            }
        }
        if(position1==1||position1==0) return false;
        for(int i=position1;i<nums.size();i++){
            if(nums[i]>=nums[i-1]) {
                position2=i;
                break;
            }
        } 
        if(position2==0) return false;
        //if(position2==nums.size()-1) return false;
        for(int i=position2;i<nums.size();i++){
            if(nums[i]<=nums[i-1]) return false;
        }
        return true;
    }
};