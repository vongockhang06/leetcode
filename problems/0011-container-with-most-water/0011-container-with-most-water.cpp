class Solution {
public:
    int maxArea(vector<int>& h) {
        int l=0;
        int r=h.size()-1;
        int d=r-l;
        int m= d*min(h[l],h[r]);
        while(l<r){
            d=r-l;
            m=max(m,d*min(h[l],h[r]));
            if(h[l]<h[r]) l++;
            else r--;
        }
        return m;
    }
};