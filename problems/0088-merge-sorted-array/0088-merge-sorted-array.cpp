class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        if(n==0) return;
        else if(m==0){
            nums1=nums2;
            return;
        }
        int ptr1=0, ptr2=0;
        vector<int> temp=nums1;
        while(ptr1 <m && ptr2<n){
            if(temp[ptr1]<=nums2[ptr2]){
                nums1[ptr1+ptr2] =temp[ptr1];
                ptr1++;
            }
            else if(temp[ptr1]>nums2[ptr2]){
                nums1[ptr1+ptr2] =nums2[ptr2];
                ptr2++;
            }
        }
        while(ptr1<m){
            nums1[ptr1+ptr2]=temp[ptr1];
            ptr1++;
        }
        while(ptr2<n){
            nums1[ptr1+ptr2]=nums2[ptr2];
            ptr2++;
        }
    }
};