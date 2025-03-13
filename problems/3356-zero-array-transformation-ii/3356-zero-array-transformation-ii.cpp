class Solution {
public:
    bool check(vector<int>& nums, vector<vector<int>>& queries,int k){
         int n = nums.size(), sum = 0;
        vector<int> differenceArray(n + 1);
        for(int queryIndex=0;queryIndex<k;queryIndex++){
            int start = queries[queryIndex][0], end = queries[queryIndex][1],
                val = queries[queryIndex][2];
            differenceArray[start]+=val;
            differenceArray[end+1]-=val;
        }
        for(int numIndex=0;numIndex<n;numIndex++){
            sum+=differenceArray[numIndex];
            if(sum<nums[numIndex]) return false;
        }
        return true;
    }
    int minZeroArray(vector<int>& nums, vector<vector<int>>& queries) {
        int n=nums.size();
        int left=0;
        int right=queries.size();
        if(!check(nums,queries,right)) return -1;
        while(left<=right){
            int middle=left+(right-left)/2;
            if(check(nums,queries,middle)) right=middle-1;
            else left=middle+1;
        } 
        return left;
    }
};