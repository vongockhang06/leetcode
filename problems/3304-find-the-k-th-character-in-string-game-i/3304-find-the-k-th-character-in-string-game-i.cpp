class Solution {
public:
    char kthCharacter(int k) {
        string word="a";
        while(word.size()<k){
            string temp=word;
            for(auto&x:temp){
                x=x+1;
                if(x=='z') x='a';
            }
            word+=temp;
        }
        return word[k-1];
    }
};