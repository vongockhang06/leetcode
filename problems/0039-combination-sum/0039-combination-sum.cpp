class Solution {
public:
    int calSumVector(const vector<int>&temp){
        int sum=0;
        for(int i=0;i<temp.size();i++){
            sum+=temp[i];
        }
        return sum;
    }
    void combinationSum_helper(vector<int>&candidates, int target,vector<vector<int>>&res,vector<int>&temp,int start){
        int size=candidates.size();
        if(0==target){
            res.push_back(temp);
            return;
        }
        if(target<0){
            return;
        }
        for(int i=start;i<size;i++){
            temp.push_back(candidates[i]);
            combinationSum_helper(candidates,target-candidates[i],res,temp,i);
            temp.pop_back();
        }
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>res;
        vector<int>temp;
        combinationSum_helper(candidates,target,res,temp,0);
        return res;
    }
};