class MinStack {
public:
    stack<int> stacky;
    stack<int> minStack;

    MinStack() {
        
    }
    
    void push(int val) {
        stacky.push(val);

        if(minStack.empty() || val <= minStack.top())
            minStack.push(val);
    }
    
    void pop() {
        if(stacky.top() == minStacky.top())
            minStacky.pop();

        stacky.pop();
    }
    
    int top() {
        return stacky.top();
    }
    
    int getMin() {
        return minStack.top();
    }
};