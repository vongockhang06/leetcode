class Solution {
public:
    int longestNiceSubarray(vector<int>& nums) {
        int length=1;
        int max=length;
        int size=nums.size();
        int left=0;
        int right=1;
        bool condition=true;
        while(right<size){
            condition = true;
            for(int i=right-1;i>=left;i--){
                if((nums[right]&nums[i])!=0){
                    condition=false;
                    left=i+1;
                    break;
                }
            }
            if(condition){
                length++;
                right++;
                if(length>max) max=length;
            }
            else{
                right=right+1;
                length=right-left;
            }
        }
        return max;
    }
};