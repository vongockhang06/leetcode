class Solution {
public:
    int titleToNumber(string columnTitle) {
       int length=columnTitle.size();
       int sum=0;
       int power=0;
       for(int i=length-1;i>=0;i--)
       {
            sum=sum+(columnTitle[i]-64)*pow(26,power);
            power++;
       } 
       return sum;
    }
};