class Solution {
public:
    bool check_symmetric(int n){
        string number=to_string(n);
        if(number.size()%2!=0) return false;
        int left_ptr=0;
        int right_ptr=number.size()-1;
        int left_sum=0;
        int right_sum=0;
        while(left_ptr<=right_ptr){
            left_sum+=number[left_ptr]-48;//minus for '0' to change back into digit from 0 to 9
            right_sum += number[right_ptr] -48;
            left_ptr++;
            right_ptr--;
        }
        if(right_sum==left_sum) return true;
        return false;
    }
    int countSymmetricIntegers(int low, int high) {
        int count=0;
        string number;
        for(int i=low;i<=high;i++){
            number=to_string(i);
            if(number.size()%2==0 && check_symmetric(i))count++;
        }
        return count;
    }
};