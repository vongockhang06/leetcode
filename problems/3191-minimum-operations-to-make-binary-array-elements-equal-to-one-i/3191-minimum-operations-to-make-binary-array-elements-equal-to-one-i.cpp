class Solution {
public:
    int minOperations(vector<int>& nums) {
        int length=nums.size();
        int count=0;
        for(int i=0;i<length;i++){
            if(nums[i]==0){
                for(int j=i;j<i+3;j++){
                    if(i+2>=length) {
                        //for(int k=j-1;k>=i;k--) nums[k]=nums[k] ^ 1;
                        break;
                    }
                    nums[j]=nums[j] ^ 1;
                }
                count++;
            }
        }
        return (nums[length - 2] == 1 && nums[length - 1] == 1) ? count : -1;
    }
};