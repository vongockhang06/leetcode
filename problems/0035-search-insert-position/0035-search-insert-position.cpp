class Solution {
public:
    int binary_search(vector<int>& nums, int target,int left,int right){
        if(left>right) return left;
        int mid=(left+right)/2;
       if (target == nums[mid]) return mid;
        else if (target > nums[mid])
            return binary_search(nums, target, mid + 1, right);
        else
            return binary_search(nums, target, left, mid - 1);
    }
    int searchInsert(vector<int>& nums, int target) {
        return binary_search(nums,target,0,nums.size()-1);
    }
};