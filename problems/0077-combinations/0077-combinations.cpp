class Solution {
public:
    void combine_helper(const vector<int> &nums, vector<int>& temp,vector<vector<int>> &res,int left,int k){
        if(temp.size()==k){
            res.push_back(temp);
            return;
        }
        for(int i=left;i<nums.size();i++){
            temp.push_back(nums[i]);
            combine_helper(nums,temp,res,i+1,k);
            temp.pop_back();
        }
    }
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> res;
        vector<int> nums (n,0);
        for(int i=0;i<n;i++){
            nums[i]=i+1;
        }
        vector<int> temp;
        combine_helper(nums,temp,res,0,k);
        return res;
    }
};