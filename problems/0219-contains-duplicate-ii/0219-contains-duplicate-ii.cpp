class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        //Brute force
        // int i=0;
        // int size=nums.size();
        // while(i<(size-1)){
        //     for(int j=1;j<=k;j++){
        //         if(i+j>=size) break;
        //         if(nums[i]==nums[i+j]) return true;
        //     }
        //     i++;
        // }
        // return false;

        //Sliding windows
        unordered_map <int,int> record;
        int size=nums.size();
        for(int i=0;i<size;i++){
            if(record.find(nums[i])!=record.end()){
                if((i-record[nums[i]])<=k) return true;
                else record[nums[i]]=i;
            }
            else record[nums[i]]=i;
        }
        return false;
    }
};