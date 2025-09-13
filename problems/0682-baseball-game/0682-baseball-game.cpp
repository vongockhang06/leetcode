class Solution {
public:
    bool checkInteger(const string& temp){
        int size=temp.size();
        for(int i=size-1;i>=0;i--){
            if(size>1 && temp[0]=='-') continue;
            if(!isdigit(temp[i])) return false;
        }
        return true;
    }
    int calPoints(vector<string>& operations) {
       //ARRay:
       vector<int> records;
       int size=operations.size();
       for(int i=0;i<size;i++){
        string temp=operations[i];
        if(checkInteger(temp)) records.push_back(stoi(temp));
        else if(temp=="+") records.push_back(records.back()+records[records.size()-2]);
        else if(temp=="D") records.push_back(records.back()*2);
        else if(temp=="C") records.pop_back();
       }
       int sum=0;
       for(int i=0;i<records.size();i++){
        sum+=records[i];
       }
       return sum; 
    }
};