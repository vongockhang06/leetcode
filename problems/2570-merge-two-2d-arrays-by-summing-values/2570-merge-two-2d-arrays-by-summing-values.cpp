class Solution {
public:
    vector<vector<int>> mergeArrays(vector<vector<int>>& nums1, vector<vector<int>>& nums2) {
        unordered_map <int,int> hash;
        int row_nums1=nums1.size();
        int row_nums2=nums2.size();
        vector<vector<int>>matrix;
        int ptr1=0;
        int ptr2=0;
        while(ptr1<row_nums1 && ptr2<row_nums2)
        {
            if(nums1[ptr1][0]<nums2[ptr2][0]){
                matrix.push_back(nums1[ptr1]);
                ptr1++;
            }
            else if(nums1[ptr1][0]>nums2[ptr2][0]){
                matrix.push_back(nums2[ptr2]);
                ptr2++;
            }
            else{
                matrix.push_back({nums1[ptr1][0],nums1[ptr1][1]+nums2[ptr2][1]});
                ptr1++;
                ptr2++;
            }
        }
        while(ptr1<row_nums1){
                matrix.push_back(nums1[ptr1]);
                ptr1++;
        }
        while(ptr2<row_nums2){
            matrix.push_back(nums2[ptr2]);
            ptr2++;
        }
        return matrix;
    }
};