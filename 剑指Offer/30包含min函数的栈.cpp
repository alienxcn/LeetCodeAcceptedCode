class MinStack {
public:
    /** initialize your data structure here. */
    stack<int> A;
    stack<int> B;
    MinStack() {

    }
    
    void push(int x) {
        A.push(x);
        if(B.empty()){
            B.push(x);
        } else {
            if(x >= B.top())
                B.push(B.top());
            else
                B.push(x);
        }
    }
    
    void pop() {
        A.pop();
        B.pop();
    }
    
    int top() {
        return A.top();
    }
    
    int min() {
        return B.top();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(x);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->min();
 */