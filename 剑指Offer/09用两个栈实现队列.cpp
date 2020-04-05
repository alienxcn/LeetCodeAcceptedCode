class CQueue {
public:
    stack<int> A;
    stack<int> B;
    CQueue() {
        
    }
    
    void appendTail(int value) {
        A.push(value);
    }
    
    int deleteHead() {
        if(B.empty()){
            if(A.empty()){
                return -1;
            } else {
                while(!A.empty()){
                    B.push(A.top());
                    A.pop();
                }
                int temp = B.top();
                B.pop();
                return temp;
            }
        } else {
            int temp = B.top();
            B.pop();
            return temp;
        }
    }
};

/**
 * Your CQueue object will be instantiated and called as such:
 * CQueue* obj = new CQueue();
 * obj->appendTail(value);
 * int param_2 = obj->deleteHead();
 */