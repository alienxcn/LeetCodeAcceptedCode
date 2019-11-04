class Solution {
public:
    int balancedStringSplit(string s) {
        int res = 0;
        stack<char> su;
        for(int i=0; i<s.size(); i++){
            if(su.empty() || s[i] == su.top()){
                su.push(s[i]);
            } else {
                su.pop();
                if(su.empty())
                    res++;
            }
        }
        return res;
    }
};