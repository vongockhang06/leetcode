class Solution {
public:
    string addBinary(string a, string b) {
        int sizea=a.size();
        int sizeb=b.size();
        string res(sizea>=sizeb ? sizea+1:sizeb+1,'0');
        int ptra=sizea-1;
        int ptrb= sizeb -1;
        int carry=false;
        int ptrres=res.size()-1;
        while(ptra>=0 && ptrb>=0){
            char digita=a[ptra];
            char digitb=b[ptrb];
            if(digita=='0' && digitb=='0'){
                if (!carry) res[ptrres]='0';
                else{
                    res[ptrres]='1';
                    carry=false;
                }
            }
            else if(digita!=digitb){
                if(!carry) res[ptrres]='1';
                else{
                    res[ptrres]='0';
                    carry=true;
                }
            }
            else if(digita=='1' && digitb=='1'){
                if(!carry){
                    res[ptrres]='0';
                    carry=true;
                }
                else{
                    res[ptrres]='1';
                    carry=true;
                }
            }
            ptra-=1;
            ptrb-=1;
            ptrres-=1;
        }

        while(ptra>=0){
            char digit=a[ptra];
            if(!carry){
                res[ptrres]=digit;
            }
            else{
                if (digit=='0') {
                    res[ptrres]='1';
                    carry=false;
                }
                else if (digit=='1') {
                    res[ptrres]='0';
                    carry=true;
                }

            }
            ptra-=1;
            ptrres-=1;
        }
        while(ptrb>=0){
            char digit=b[ptrb];
            if(!carry){
                res[ptrres]=digit;
            }
            else{
                if (digit=='0') {
                    res[ptrres]='1';
                    carry=false;
                }
                else if (digit=='1') {
                    res[ptrres]='0';
                    carry=true;
                }

            }
            ptrb-=1;
            ptrres-=1;
        }
        if(carry) {
            res[0]='1';
            return res;
        }
        return res.substr(1);
    }
};