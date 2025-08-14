class Solution {
public:
    vector<int> deckRevealedIncreasing(vector<int>& deck) {
        sort(deck.begin(),deck.end(),greater<int>());
        if(deck.size()==1) return deck;
        vector<int> res;
        res.push_back(deck[1]);
        res.push_back(deck[0]);
        for(int i=2;i<deck.size();i++){
            int last=res.back();
            res.pop_back();
            res.insert(res.begin(),last);
            res.insert(res.begin(),deck[i]);
        }
        return res;
    }
};