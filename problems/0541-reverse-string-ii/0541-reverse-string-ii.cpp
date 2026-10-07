class Solution {
public:
    string revers(string s,int k)
    {
        int left=0;
        int right=k-1;
        if(k>s.size()) right=s.size()-1;
        while(left<right){
            char temp=s[left];
            s[left]=s[right];
            s[right]=temp;
            left++;
            right--;
        }
        return s;
    }
    string reverseStr(string s, int k) {
        int length=s.size();
        string sub_str=s.substr(0,k*2);
        string re="";
        for(int i=0;i<length;i++)
        {
            if(i%(2*k)==0) {
                sub_str=s.substr(i,k*2);
                sub_str=revers(sub_str,k);
                re+=sub_str;
            }       
        }
        return re;
    }
};