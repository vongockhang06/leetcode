class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int size=s.size();
        if(size<=1) return size; 
        int ptr1=0;
        int ptr2=0;
        int len=1;
        unordered_map<char, int> dict;
        while(ptr2<size && ptr1<=ptr2){
            while(dict[s[ptr2]]==0 && ptr2<size){
                dict[s[ptr2]]+=1;
                len=max(len,ptr2-ptr1+1);
                ptr2++;
            }
            dict[s[ptr1]]--;
            ptr1++;
        }
        return len;
    }
};