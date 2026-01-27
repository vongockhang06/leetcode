class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int res = 0;
        int temp =0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1) temp++;
            else{
                res=max(res,temp);
                temp=0;
            }
        } 
        //update last element;
        res=max(res,temp);

        return res;
    }
};