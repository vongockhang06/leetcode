class Solution {
public:
    int tupleSameProduct(vector<int>& nums) {
        int count=0;
        unordered_map<int,int> res;
        int size=nums.size();
        if(size<4) return 0;
        for(int i=0;i<nums.size()-1;i++){
            for(int j=i+1;j<nums.size();j++){
                int temp=nums[i]*nums[j];
                if(res.find(temp)==res.end()){
                    res[temp]=1;
                }
                else {
                    count+=8*res[temp];
                    res[temp]++;
                }
            }
        }
        return count;
    }
};