class Solution {
public:
    string longestPalindrome(string s) {
        string n = "#";
        for(int i=0;i<s.size();i++){
            n += s[i];
            n += '#';
        }
        int size = n.size();
        int c=0;
        int r=0;
        int pos=0;
        int len=0;
        vector<int>p(size,0);
        for(int center=0;center<size;center++){
            if(center<r){
                int mirror = c-(center-c);
                p[center]=min(p[mirror],r-center);
            }
            while(p[center]+center+1<size && center-p[center]-1>=0 &&
                    n[p[center]+center+1]==n[center-p[center]-1]){
                p[center]++;
            }
            if(center+p[center]>r){
                c=center;
                r=center+p[center];
            }
            if(p[center]>len){
                len=p[center];
                pos=center;
            }
        }

        int start = (pos - len) / 2;
        string res = s.substr(start, len);
        return res;
    }
};