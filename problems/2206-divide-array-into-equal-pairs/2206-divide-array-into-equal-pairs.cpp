class Solution {
public:
    bool divideArray(vector<int>& nums) {
        unordered_map <int,int> hash;
        int length=nums.size();
        for(int i=0;i<length;i++){
            if(hash.find(nums[i])==hash.end()) hash[nums[i]]=1;
            else hash[nums[i]]++;
        }
        for(unordered_map<int, int>::iterator i=hash.begin();i!=hash.end();i++){
            if(i->second%2!=0) return false;
        }
        return true;
    }
};