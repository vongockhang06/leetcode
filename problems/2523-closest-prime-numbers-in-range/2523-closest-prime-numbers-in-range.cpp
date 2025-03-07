class Solution {
public:

    vector<int> closestPrimes(int left, int right) {
        if (left <= 2 && right >= 3)
            return { 2, 3 };
        vector<bool>prime(right+1,true);
        prime[0]=false;
        prime[1]=false;
        for(int i=2;i*i<=right;i++){
            if(prime[i]==true){
                for(int j=i*i;j<=right;j+=i){
                    prime[j]=false;
                }
            }
        }
        vector<int> subprime;
        for(int i=left;i<=right;i++){
            if(prime[i]==true) subprime.push_back(i);
        }
        vector<int>result={-1,-1};
        if(subprime.size()==0||subprime.size()==1) return result;
        int small=subprime[0];
        int large=subprime[1];
        int diff=large-small;
        for(int i=0;i<subprime.size()-1;i++){
            if((subprime[i+1]-subprime[i])<diff){
                small=subprime[i];
                large=subprime[i+1];
                diff=large-small;
            }
        }
        result[0]=small;
        result[1]=large;
        return result;
    }
};