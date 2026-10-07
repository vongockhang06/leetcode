class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        set <int> n(nums.begin(),nums.end());
        int max_cons=0;
        int count_cons=0;
        int temp=-INT_MAX;
        if(n.empty()) return 0;
        for(int x:n){
            if(x==(temp+1)) {
                count_cons++;
                if(count_cons>max_cons) max_cons=count_cons;
            }
            else count_cons=0;
            temp=x;
        }
        return max_cons+1;
    }
};