class Solution {
public:
    bool verifyPostorder(vector<int>& postorder) {
        stack<int> st;
        int root = INT_MAX;
        reverse(postorder.begin(), postorder.end());
        for(int i=0; i<postorder.size(); i++){
            if(postorder[i] > root)
                return false;
            while(!st.empty() && st.top()>postorder[i]){
                root = st.top();
                st.pop();
            }
            st.push(postorder[i]);
        }
        return true;
    }
};