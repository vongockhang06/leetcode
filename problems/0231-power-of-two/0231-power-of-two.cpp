class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n==0 || n<0) return false;
        if(n==1) return true;
        //WAY 1
        /*while(n%2==0){
            n=n/2;
        }
        if(n==1) return true;
        return false;
        */

        //WAY 2 bit manipulation
        /*int temp=n&(n-1);
        if(temp==0) return true;
        return false;
        */

        //Way 3 Recursion
        if(n%2!=0) return false;
        return isPowerOfTwo(n/2);      

    }
};