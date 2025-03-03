class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int> array;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<pivot) array.push_back(nums[i]);
        }
        for(int i=0;i<nums.size();i++){
            if(nums[i]==pivot) array.push_back(nums[i]);
        }
        for(int i=0;i<nums.size();i++){
            if(nums[i]>pivot) array.push_back(nums[i]);
        }
        return array;
    }
};