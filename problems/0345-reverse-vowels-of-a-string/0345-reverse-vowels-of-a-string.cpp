class Solution {
public:
    string reverseVowels(string s) {
       string vowel="aeiouAEIOU";
       int left=0;
       int right=s.size()-1;
       while(left<right)
       {
            if(vowel.find(s[left])!=-1 && vowel.find(s[right])!=-1)
            {
                char temp=s[left];
                s[left]=s[right];
                s[right]=temp;
                left++;
                right--;
            }
            else if(vowel.find(s[left])!=-1 && vowel.find(s[right])==-1) right--;
            else if(vowel.find(s[left])==-1 && vowel.find(s[right])!=-1) left++;
            else if(vowel.find(s[left])==-1 && vowel.find(s[right])==-1) 
            {
                right--;
                left++;
            }
       } 
         return s;
    }

};