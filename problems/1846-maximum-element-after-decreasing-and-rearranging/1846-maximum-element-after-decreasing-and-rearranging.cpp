class Solution {
public:
    int maximumElementAfterDecrementingAndRearranging(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        int count=0;
        if(arr[0]!=1) {
            count++;
            arr[0]=1;
        }
        int size=arr.size();
        for(int i=1;i<size;i++){
            if(abs(arr[i]-arr[i-1])>=2) {
                arr[i]=arr[i-1]+1;
                count++;
            }
        }
        return arr[size-1];
    }
};