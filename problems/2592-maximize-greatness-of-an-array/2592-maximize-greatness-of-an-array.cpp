class Solution {
public:
//1 1 1 2 3 3 5
    int maximizeGreatness(vector<int>& nums) {
        int count=0;
        int size=nums.size();
        vector <int>perm=nums;
        sort(perm.begin(),perm.end());
        int left=0;
        int right=1;
        while(right<size){
            if(perm[left]<perm[right]){
                count++;
                left++;
            }
            right++;
        }
        return count;
    }
};