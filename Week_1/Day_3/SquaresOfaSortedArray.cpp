class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int i = 0, j = 0;
        vector<int> result = {};

        while (i < nums.size() && nums[i] < 0) {
            i++;
        }

        j = i;
        i = 0;
        while (i < nums.size()) {
            nums[i] = nums[i] * nums[i];
            i++;
        }
        i = 0;

        i = j - 1;
        while (i >= 0 && j < nums.size()) {
            if (nums[i] <= nums[j]) {
                result.push_back(nums[i--]);
            } else {
                result.push_back(nums[j++]);
            }
        }
        while (i >= 0) {
            result.push_back(nums[i--]);
        }
        while (j < nums.size()) {
            result.push_back(nums[j++]);
        }
        return result;
    }
};