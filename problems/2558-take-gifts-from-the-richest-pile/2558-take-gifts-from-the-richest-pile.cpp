class Solution {
public:
    int find_index_max(vector<int>&arr){
        int max=arr[0];
        int index_max=0;
        for(int i=0;i<arr.size();i++){
            if(arr[i]>max){
                max=arr[i];
                index_max=i;
            }
        }
        return index_max;
    }
    long long pickGifts(vector<int>& gifts, int k) {
        int index_max=0;
        for(int i=0;i<k;i++){
            index_max=find_index_max(gifts);
            gifts[index_max]=sqrt(gifts[index_max]);
        }
        long long int sum=0;
        for(int i=0;i<gifts.size();i++){
            sum+=gifts[i];
        }
        return sum;
    }
};