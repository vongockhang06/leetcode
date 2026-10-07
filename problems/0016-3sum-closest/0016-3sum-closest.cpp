class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int closest=INT_MAX;
        int sum=0;
        int size=nums.size();
        sort(nums.begin(),nums.end());
        for(int i=0;i<size-2;i++){
            int x=nums[i];
            int left=i+1,right=size-1;
            while(left<right){
                int y=nums[left],z=nums[right];
                int total=x+y+z;
                if(abs(total-target)<closest){ 
                    sum=total;
                    closest=abs(total-target);
                }
                if(total<target) left++;
                else if(total>target) right--;
                else if(total==target) return total;
            }
        }
        return sum;
    }
};