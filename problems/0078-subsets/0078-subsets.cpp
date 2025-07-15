class Solution {
public:
    void helper(vector<vector<int>> &res, const vector<int>&nums,vector<int>&temp,int start,int size){
        if(temp.size()==size){
            res.push_back(temp);
            return;
        }
        for(int i=start;i<nums.size();i++){
            temp.push_back(nums[i]);
            helper(res,nums,temp,i+1,size);
            temp.pop_back();
        }
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> res;
        vector <int> temp;
        for(int i=0;i<=nums.size();i++){
            helper(res,nums,temp,0,i);
        }
        return res;
    }
};