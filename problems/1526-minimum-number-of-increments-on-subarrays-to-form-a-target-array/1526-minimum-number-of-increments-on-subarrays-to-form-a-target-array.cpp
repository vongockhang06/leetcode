class Solution {
public:
    int minNumberOperations(vector<int>& target) {
        int size=target.size();
        int res=target[0];
        for(int i=0;i<size;i++){
            if(i==0) continue;
            res+= max(0,target[i]-target[i-1]);
        }
        return res;
    }
};