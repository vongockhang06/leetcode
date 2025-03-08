class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        int count=0;
        int min;
        int length=blocks.size();
        for(int i=0;i<k;i++){
            if(blocks[i]=='W') count++;
            min=count;
        }
        for(int i=k;i<length;i++){
            if(blocks[i]=='B'&&blocks[i-k]=='W') count--;
            else if(blocks[i]=='W'&&blocks[i-k]=='B') count++;
            if(count<min) min=count;
        }
        return min;
    }
};