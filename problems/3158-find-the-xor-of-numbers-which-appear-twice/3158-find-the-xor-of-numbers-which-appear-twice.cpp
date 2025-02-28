class Solution {
public:
    int duplicateNumbersXOR(vector<int>& nums) {
        unordered_map<int,int> hash;
        int Xor=0;
        for(int i=0;i<nums.size();i++)
        {
            if(hash.find(nums[i])==hash.end()) hash[nums[i]]=i;
            else Xor=Xor^nums[i]; 
        }
        return Xor;
    }
};