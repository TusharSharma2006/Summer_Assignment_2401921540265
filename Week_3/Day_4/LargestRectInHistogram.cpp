class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {

        stack<int> mystack;
        
        int maxi = 0;
        int n = heights.size();

        for (int i = 0; i <= n; i++) {
        
            while (!mystack.empty() &&(i == n || heights[mystack.top()] >= heights[i])) {

                int h = heights[mystack.top()];
                mystack.pop();

                int width;
                if (mystack.empty()){
                    width = i;
                }else{
                    width = i - mystack.top() - 1;
                }
                maxi = max(maxi, h * width);

            }

            mystack.push(i);

        }

        return maxi;
    }
};