class Solution {
public:
    void combinationSum2_helper(vector<int>& candidates, int target,vector<int>&temp,int start,vector<vector<int>>&res) {
        if(target==0){
            res.push_back(temp);
            return;
        }
        if(target<0) return;
        for(int i=start;i<candidates.size();i++){
            if (i > start && candidates[i] == candidates[i-1]) {
                continue;
            }
            temp.push_back(candidates[i]);
            combinationSum2_helper(candidates,target-candidates[i],temp,i+1,res);
            temp.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<vector<int>>res;
        vector<int>temp;
        combinationSum2_helper(candidates,target,temp,0,res);
        return res;
    }
};