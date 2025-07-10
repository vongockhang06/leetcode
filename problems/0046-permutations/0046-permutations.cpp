class Solution {
public:
    void swap(int& a, int& b) {
        int temp = a;
        a = b;
        b = temp;
    }
    void permutation(vector<int>& nums, int left, vector<vector<int>>& result) {
        if (left == nums.size()) {
            result.push_back(nums);
            return;
        }
        for (int i = left; i < nums.size(); i++) {
            swap(nums[left], nums[i]);
            permutation(nums, left + 1, result);
            swap(nums[left], nums[i]);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> result;

        permutation(nums, 0, result);
        return result;
    }
};