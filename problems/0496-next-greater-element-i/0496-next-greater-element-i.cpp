class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> res;
        int s1=nums1.size();
        int s2=nums2.size();
        for(int i=0;i<s1;i++){
            for(int j=0;j<s2;j++){
                if(nums1[i]==nums2[j]){
                    while(j<s2){
                        if(nums2[j]>nums1[i]){
                            res.push_back(nums2[j]);
                            break;
                        }
                        if(j==(s2-1)) res.push_back(-1);
                        j++;
                    }
                }
            }
        }
        return res;
    }
};