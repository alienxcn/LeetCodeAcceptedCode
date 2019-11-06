class Solution {
public:
    set<string> res;
    void func(int n, int L, int R, string &s){
        // cout << L << " " << R << " " << s << endl;
        if(L == R && L+R == 2*n){
            res.insert(s);
            return;
        }
        if(L < R || L+R > 2*n)
            return;
        s = s + ")";
        func(n, L, R+1, s);
        s.erase(s.end()-1);
        
        s = s + "(";
        func(n, L+1, R, s);
        s.erase(s.end()-1);
    }
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        string ss = "(";
        func(n, 1, 0, ss);
        for(set<string>::iterator it=res.begin(); it!=res.end(); it++){
            ans.push_back(*it);
        }
        return ans;
    }
};