class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> Um;
        for (int i = 0; i < nums.size(); i++) {
            int complement = target - nums[i];
            if (Um.count(complement)) {
                return {Um[complement], i};
            }
            Um[nums[i]] = i;
        }
        return {};
    }
};