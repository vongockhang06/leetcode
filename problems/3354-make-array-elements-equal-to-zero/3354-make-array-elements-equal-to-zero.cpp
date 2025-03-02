class Solution {
public:
    bool isValidSelection(vector<int>& nums, int start, bool moveRight) {
        vector<int> copy = nums;
        int j = start;
        bool left = false;
        bool right = moveRight;

        while (j >= 0 && j < nums.size()) {
            if (right) {
                j++;
                if (j >= nums.size()) break;
                if (copy[j] != 0) {
                    copy[j]--;
                    right = false;
                    left = true;
                }
            }
            if (left) {
                j--;
                if (j < 0) break;
                if (copy[j] != 0) {
                    copy[j]--;
                    right = true;
                    left = false;
                }
            }
        }

        // Check if all elements are zero
        for (int k = 0; k < nums.size(); k++) {
            if (copy[k] != 0) {
                return false;
            }
        }
        return true;
    }

    int countValidSelections(vector<int>& nums) {
        int count = 0;
        
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 0) {
                // Check for valid selection in both directions
                if (isValidSelection(nums, i, true)) count++;
                if (isValidSelection(nums, i, false)) count++;
            }
        }

        return count;
    }
};