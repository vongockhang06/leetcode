class Solution {
public:
    int possibleStringCount(string word) {
        int output=1;
        int size=word.size();
        for(int i=0;i<size-1;i++){
            if(word[i]==word[i+1]) output++;
        }
        return output;
    }
};