class Solution {
public:
    bool check(vector<int>& nums) {
        int l=nums.size();
        int x=0;
        for(int i=0;i<l-1;i++){
            if(nums[i]>nums[i+1]){
                x=i+1;
                break;
            }
        }
        vector <int> A(l);
        for(int i=0;i<l;i++){
            A[i]=nums[(i+x)%l];
        }
        for(int i=0;i<l-1;i++){
            if(A[i]>A[i+1]) return false;
        }
        return true;
    }
};