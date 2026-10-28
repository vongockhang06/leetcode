class Solution {
public:
    int minSteps(int n) {
        if(n==1) return 0;
        int count=2;//copy first A + add second A
        int cur_size=2;
        int step=1;
        while(true){
            if (cur_size==n) return count;
            if (n%cur_size==0){
                step=cur_size;
                count+=1;//copy 
            }
            cur_size+=step;
            count+=1;//paste
        }
    }
};