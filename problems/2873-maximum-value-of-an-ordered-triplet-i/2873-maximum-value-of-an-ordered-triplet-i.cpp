class Solution {
public:
    long long maximumTripletValue(vector<int>& nums) {
        vector<int> triplet;
        int length = nums.size();
        long long int max = -1;
        for (int i = 0; i < length - 2; i++) {
            if (nums[i] < 0)
                continue;
            for (int j = i + 1; j < length - 1; j++) {
                if (nums[j] < 0)
                    continue;
                for (int k = j + 1; k < length; k++) {
                    if (nums[k] < 0)
                        continue;
                    long long int cal=(long long)(nums[i] - nums[j]) * nums[k];
                    if (max < cal) {
                        max = cal;
                    }
                }
            }
        }
        return (max == -1) ? 0 : max;
    }
};