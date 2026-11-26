class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0) return false;
        long long res=0;
        int temp=x;
        while(temp!=0){
            res=temp%10+res*10;
            temp=temp/10;
        }
        return res==x;
    }
};