class Solution {
public:
    string fun(string& a){
        stack<char> t;
        for(int i=0; i<a.size(); i++){
            if(a[i] == '#' && !t.empty())
                t.pop();
            else if(a[i] != '#')
                t.push(a[i]);
        }
        string ans;
        while(!t.empty()){
            ans = ans + t.top();
            t.pop();
        }
        return ans;
    }
    bool backspaceCompare(string S, string T) {
        cout << fun(S) << endl << fun(T) << endl;
        return !fun(S).compare(fun(T));
    }
};