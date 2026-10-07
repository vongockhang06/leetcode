class Solution {
public:
    void swap(int &a,int &b){
        int temp=a;
        a=b;
        b=temp;
    }

    void permute(vector<int>&nums,int left,set<vector<int>>& res){
        int size=nums.size();
        if(left>=size){
            if(res.find(nums)==res.end()) res.insert(nums);
            return;
        }
        for(int i=left;i<size;i++){
            swap(nums[i],nums[left]);
            permute(nums,left+1,res);
            swap(nums[i],nums[left]);
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        set<vector<int>>res;
        permute(nums,0,res);
        vector<vector<int>> result(res.begin(), res.end());
        return result;
    }
};