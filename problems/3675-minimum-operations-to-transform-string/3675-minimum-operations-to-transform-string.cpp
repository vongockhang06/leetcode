class Solution {
public://97-122: a-z
    int minOperations(string s) {
        string compare="";
        int count=0;
        int min=999;
        int pos=0;
        int size=s.size();
        for(int i=0;i<size;i++){
            compare+='a';
        }
        while(s!=compare){
            min=999;
            //Find largest character
            for(int i=0;i<size;i++){
                if(s[i]<min&&s[i]!='a'){
                    min=s[i];
                    pos=i;
                }
            }
            //
            if(min=='z') return count+1;
            for(int i=0;i<size;i++){
                if(s[i]==min){
                    s[i]=s[i]+1;
                }
            }
            count++;
        }
        return count;
    }
};