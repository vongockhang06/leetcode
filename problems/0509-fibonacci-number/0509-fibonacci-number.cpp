class Solution {
public:
//Way3
    // int helper(int n, unordered_map<int,int>& table){
    //     if(table.find(n)!=table.end()) return table[n];
    //     else table[n]=helper(n-1,table)+helper(n-2,table);
    //     return table[n];
    // }
//Way1
    int helper(int n,vector<int>& record){
        if(n<record.size()) return record[n];
        else{
            record.push_back(helper(n-1,record)+helper(n-2,record));
        }
        return record[n];
    }
    int fib(int n) {
        //Way1:Array
        vector <int> res={0,1};
        return helper(n,res);

        //Way2: recursion
        // if(n==1) return 1;
        // if(n==0) return 0;
        // return (fib(n-1) +fib(n-2));

        //Way3: DP
        // unordered_map <int,int> table;
        // table[0]=0;
        // table[1]=1;
        // return helper(n,table);
    }
};