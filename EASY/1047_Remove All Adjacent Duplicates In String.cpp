class Solution {
public:
    string removeDuplicates(string S) {
        stack<char> ss;
        reverse(S.begin(), S.end());
        for(int i=0; i<S.size(); i++){
            if(ss.empty() || ss.top() != S[i])
                ss.push(S[i]);
            else if(ss.top() == S[i])
                ss.pop();
        }
        string res = "";
        while(!ss.empty()){
            res = res + ss.top();
            ss.pop();
        }
        return res;
    }
};


class Solution {
public:
    string removeDuplicates(string S) {
        string res;
        for(int i=0; i<S.size(); i++){
            if(res.size() && res.back() == S[i])
                res.pop_back();
            else
                res += S[i];
        }
        return res;
    }
};