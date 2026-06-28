class MyQueue {
public:

    stack<int> inSt;

    stack<int> outSt;

    //yo empty na se mitr yo constructor k liye se
    MyQueue() {
        
    }

    void push(int x) {
        inSt.push(x);
    }

    int pop() {
        moveElements();
        int front = outSt.top();
        outSt.pop();
        return front;
    }

    int peek() {
        moveElements();
        return outSt.top();
    }

    bool empty() {
        return inSt.empty() && outSt.empty();
    }

private:
    void moveElements() {
        if (outSt.empty()) {
            while (!inSt.empty()) {
                outSt.push(inSt.top());
                inSt.pop();
            }
        }
    }
};