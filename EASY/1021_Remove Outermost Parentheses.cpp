class Solution {
public:
    string removeOuterParentheses(string S) {
        int sig = 0;
        queue<char> ans;
        for(int i=0; i<S.size(); i++){
            if(S[i] == '('){
                if(sig == 0){
                    // do nothing;
                } else {
                    ans.push(S[i]);
                }
                sig++;
            } else {
                if(sig == 1){
                    // do nothing;
                } else {
                    ans.push(S[i]);
                }
                sig--;
            }
        }
        string res = "";
        while(!ans.empty()){
            res += ans.front();
            ans.pop();
        }
        return res;
    }
};