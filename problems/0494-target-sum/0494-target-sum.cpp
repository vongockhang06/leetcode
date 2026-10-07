class Solution {
public:
//Way 1:Traditional Backtracking
    // void helper(const vector<int>&nums,int target,int explore,int&res,int position){
    //     if(target==explore && position>=(nums.size())){//because when target=explore, position will be plus 1 equal to nums.size()
    //         res++;
    //         return;
    //     }
    //     if(position==(nums.size())) return;
    //     explore+=nums[position];
    //     helper(nums,target,explore,res,position+1);
    //     explore-=nums[position];//undo
    //     explore-=nums[position];//for the negative;
    //     helper(nums,target,explore,res,position+1);
    // }
//Way 2: Applying DP
    void helper(const vector<int>&nums,int target,int explore,int&res,int position){
        if(target==explore && position>=(nums.size())){//because when target=explore, position will be plus 1 equal to nums.size()
            res++;
            return;
        }
        if(position==(nums.size())) return;
        explore+=nums[position];
        helper(nums,target,explore,res,position+1);
        explore-=nums[position];//undo
        explore-=nums[position];//for the negative;
        helper(nums,target,explore,res,position+1);
    }
    int findTargetSumWays(vector<int>& nums, int target) {  
        //Way 1:
        // int explore=0;
        // int res=0;
        // helper(nums,target,explore,res,0);
        // return res;

        ///Way2:
        int explore=0;
        int res=0;
        helper(nums,target,explore,res,0);
        return res;
    }
};