class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        
        stack<int> mystack;

        vector<int> ans(temperatures.size());

        for(int i = 0; i < temperatures.size(); i++){

            while(!mystack.empty() && temperatures[i] > temperatures[mystack.top()]){
                
                ans[mystack.top()] = i - mystack.top();
                
                mystack.pop();

            }
        
            mystack.push(i);
        
        }

        return ans; 

    }
};