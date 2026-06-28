class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
       
        deque<int> dQ;

        vector<int> ans;

        for (int i = 0; i < nums.size(); i++) {

            while (!dQ.empty() && dQ.front() <= i - k){
                dQ.pop_front();
            }

            while (!dQ.empty() && nums[dQ.back()] < nums[i]){
                dQ.pop_back();
            }

            dQ.push_back(i);

            if (i >= k - 1){
                result.push_back(nums[dQ.front()]);
            }
            
        }

        return result;
    }
};