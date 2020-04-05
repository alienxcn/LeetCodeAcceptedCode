class Solution {
public:
    vector<string> res;
    void func(string &s, int length, vector<int>& vis, vector<char>& ts){
        if(length == s.size()){
            string temp;
            for(char i:ts)
                temp += i;
            res.push_back(temp);
            return;
        }
        for(int i=0; i<s.size(); i++){
            if(vis[i] == 0){
                ts.push_back(s[i]);
                vis[i] = 1;
                func(s, length+1, vis, ts);
                vis[i] = 0;
                ts.pop_back();
            }
        }
    }
    vector<string> permutation(string s) {
        int len = s.size();
        vector<int> vis(len, 0);
        vector<char> ts;
        func(s, 0, vis, ts);
        sort(res.begin(), res.end());
        res.erase(unique(res.begin(), res.end()), res.end());
        return res;
    }
};