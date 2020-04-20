class Solution {
public:
    string reverseWords(string s) {
        stack<string> st;
        string res;
        if(s.size() == 0)
            return res;
        int ptr=0, len=0;
        for(int i=0; i<s.size(); i++){
            if(s[i] != ' '){
                ptr = i;
                while(i<s.size() && s[i] != ' '){
                    len++;
                    i++;
                }
                cout << s.substr(ptr, len) << endl;
                st.push(s.substr(ptr, len));
                len = 0;
            }
        }
        if(st.empty())
            return res;
        res = st.top();
        st.pop();
        while(!st.empty()){
            res = res + ' ' + st.top();
            st.pop();
        }
        return res;
    }
};