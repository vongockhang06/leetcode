class Solution {
public:
    void helper(const vector<int>&nums,vector<vector<int>> &res,int size,vector<int>&temp,int start){
        if(temp.size()==size){
            res.push_back(temp);
            return;
        }
        int pop=-15;
        for(int i=start;i<nums.size();i++){
            if(i>0 && nums[i]==pop) continue;
            temp.push_back(nums[i]);
            helper(nums,res,size,temp,i+1);
            pop=temp.back();
            temp.pop_back();
        }
    } 
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> res;
        vector<int>temp;
        sort(nums.begin(),nums.end());
        for(int i=0;i<=nums.size();i++){
            helper(nums,res,i,temp,0);
        }
        return res;
    }
};