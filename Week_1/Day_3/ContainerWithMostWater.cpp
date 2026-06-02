class Solution {
public:
    int area(int a,int b,vector<int>&nums){
        return (b-a)*min(nums[a],nums[b]);
    }
    int maxArea(vector<int>& height) {
        int i = 0;
        int j = height.size()-1;
        int maxi = 0;
        
        while(i<=j){
            int currArea = area(i,j,height);
            maxi = max(currArea,maxi);
            if(height[i]<=height[j]){
                i++;
            }else{
                j--;
            }
        }
        return maxi;
    }
};