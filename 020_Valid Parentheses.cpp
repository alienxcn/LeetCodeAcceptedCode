class Solution {
public:
    bool isValid(string s) {
        if(!s.length())
            return true;
        stack<char> ans;
        int len = s.length();
        for(int i=0; i<len; i++){
            if(!ans.empty()){
                char t = ans.top();
                if((t == '(' && s[i] == ')') || (t == '[' && s[i] == ']') || (t == '{' && s[i] == '}')){
                    ans.pop();
                } else {
                    ans.push(s[i]);
                }
            } else {
                ans.push(s[i]);
            }
        }
        if(ans.empty())
            return true;
        else
            return false;
    }
};