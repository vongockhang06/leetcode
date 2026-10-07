class Solution {
public:
    vector<int> occurrencesOfElement(vector<int>& nums, vector<int>& queries, int x) {
        int s = nums.size();
        vector<int> st;
        for(int i=0;i<s;i++){
            //occure to index
            if(nums[i]==x) st.push_back(i);
        }
        int occur = st.size();
        int s2 = queries.size();
        vector<int> res(s2);
        for(int i=0;i<s2;i++){
            int key =queries[i];
            if(key>occur) res[i]=-1;
            else res[i] = st[key-1];
        }
        return res;
    }
};