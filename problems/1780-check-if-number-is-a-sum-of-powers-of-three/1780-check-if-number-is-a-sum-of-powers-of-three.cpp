class Solution {
public:
    bool checkPowersOfThree(int n) {
        while(true){
            if(n%3==1) n--;
            while(n%3==0) {
                n=n/3;
                if(n==0) return true;
            }
            if(n%3!=1 && n%3!=0) return false;
        }

    }
};