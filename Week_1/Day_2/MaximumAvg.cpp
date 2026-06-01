class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        long long MaxSum = INT_MIN;
        long long Sum = 0;

        for(int i=0;i<k;i++){
            Sum = Sum+nums[i];
        }
        MaxSum = max(MaxSum,Sum);
        for(int i = 0;i+k<nums.size();i++){
            Sum = Sum+nums[i+k]-nums[i];
            MaxSum=max(Sum,MaxSum);
        }
        double ans = MaxSum/(double)k;
        return ans;
    }
};