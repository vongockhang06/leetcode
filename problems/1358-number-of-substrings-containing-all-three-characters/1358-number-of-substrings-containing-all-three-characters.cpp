class Solution {
public:
    int numberOfSubstrings(string s) {
        int left=0;
        int count=0;
        int size=s.size();  
        unordered_map <char,int> freq;
        freq['a']=0;
        freq['b']=0;
        freq['c']=0;
        for(int right=0;right<size;right++){
            char c=s[right];
            freq[c]++;
            while(freq['a'] && freq['b'] &&freq['c']){
                count += (size-right);
                freq[s[left]]--;
                left++;
            }
        }
        

        return count;
    }
};