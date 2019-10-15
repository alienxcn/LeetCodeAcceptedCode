// 双栈结构。
// 最小栈保存序列中最小值，确保getMin操作是O(1)时间复杂度。
// 典型的时空转换。
class MinStack {
public:
    /** initialize your data structure here. */
    MinStack() {
        
    }
    
    void push(int x) {
        s.push(x);
        if(mins.empty() || x<= mins.top()){
            mins.push(x);
        }
    }
    
    void pop() {
        if(s.top() == mins.top()){
            mins.pop();
        }
        s.pop();
    }
    
    int top() {
        return s.top();
    }
    
    int getMin() {
        return mins.top();
    }
private:
    stack<int> s;
    stack<int> mins;
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(x);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */