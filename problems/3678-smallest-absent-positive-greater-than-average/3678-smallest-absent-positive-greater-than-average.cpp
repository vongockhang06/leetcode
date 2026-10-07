class Solution {
public:
    int smallestAbsent(vector<int>& nums) {
        unordered_map<int,int> record;
        int sum=0;
        int average=0;
        int size=nums.size();
        for(int i=0;i<size;i++){
            sum+=nums[i];
            record[nums[i]]=1;
        }
        average=sum/size;
        int res=average+1;
        if(average<0) res=1;
        while(true){
            for(int i=0;i<size;i++){
                if(nums[i]==res){
                    res++;
                    break;
                }
                if(i==(size-1)) return res;
            }
        }
        return res;
    }
};