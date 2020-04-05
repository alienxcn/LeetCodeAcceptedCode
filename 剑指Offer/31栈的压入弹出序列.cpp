class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        stack<int> st;
        int L = 0;
        for(int i=0; i<popped.size(); i++){
            if(!st.empty()){
                if(st.top() == popped[i]){
                    st.pop();
                    continue;
                }
            }
            while(L<pushed.size() && pushed[L] != popped[i]){
                st.push(pushed[L++]);
            }
            if(L == pushed.size()){
                return false;
            }
            if(pushed[L] == popped[i]){
                L++;
                continue;
            }
        }
        return true;
    }
};