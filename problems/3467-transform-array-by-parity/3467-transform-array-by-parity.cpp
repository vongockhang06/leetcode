class Solution {
public:
    vector<int> transformArray(vector<int>& nums) {
        int length=nums.size();
        int count_even=0;
        int count_odd=0;
        for(int i=0;i<length;i++){
            if(nums[i]%2==0) count_even++;
            else count_odd++;
        }
        for(int i=0;i<length;i++){
            if(count_even!=0){
                nums[i]=0;
                count_even--;
            }
            else{
                nums[i]=1;
            }
        }
        return nums;
    }
};