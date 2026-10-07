class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        unordered_map<int,int> hash;
        for(int i=0;i<arr.size();i++)
            hash[arr[i]]=i;
        for(int i=0;i<arr.size();i++)
        {
            if(hash.find(arr[i]*2)!=hash.end()&&i!=hash[arr[i]*2]) return true;
        }
        return false;
    }
};