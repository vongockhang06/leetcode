class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<int> n = nums;
        sort(n.begin(), n.end());
        int size = n.size();
        vector<vector<int>> res;
        for (int i = 0; i < size; i++) {
            if (i > 0 && n[i] == n[i - 1])
                continue;
            int j = i + 1;
            int k = size - 1;
            while (j < k) {
                int sum = n[i] + n[j] + n[k];
                if (sum == 0) {
                    res.push_back({n[i], n[j], n[k]});
                    j++;
                    k--;
                    while (j < k && n[j] == n[j - 1])
                        j++;
                    while (j < k && n[k] == n[k + 1])
                        k--;
                } else if (sum < 0) {
                    j++;
                }
                else k--;
            }
        }
        return res;
    }
};