class Solution {
public:
    bool canAliceWin(int n) {
        int alice = 10;
        int bob = alice-1;
        int temp=n;
        bool alice_turn=true;
        if (n<10) return false;
        while (true){
            if (alice_turn){
                temp=temp-alice;
                if(temp<0) return false;
                bob=alice-1;
                alice_turn=false;
            }
            else{
                temp=temp-bob;
                if(temp<0) return true;
                alice=bob-1;
                alice_turn=true;
            }
        }
    }
};