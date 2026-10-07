class Solution {
public:
    bool isZeroArray(vector<int>& nums, vector<vector<int>>& queries) {
        int size=nums.size();
        vector <int> diff(size,0);
        diff[0]=nums[0];
        for(int i=1;i<size;i++){
            diff[i]=nums[i]-nums[i-1];
        }
        for(auto x: queries){
            diff[x[0]]-=1;
            if(x[1]<(size-1)) diff[x[1]+1]+=1;
        }
        if(diff[0]>0) return false;
        for(int i=1;i<size;i++){
            diff[i]+=diff[i-1];
            if(diff[i]>0) return false;
        }
        return true;
    }
};