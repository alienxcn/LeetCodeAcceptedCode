class Solution {
public:
    set<string> ss;
    string res;
    string longestWord(vector<string>& words) {
        ss = set<string>(words.begin(), words.end());
        string t = "";
        dfs(t);
        return res;
    }
    void dfs(string t){
        if(res.size()<t.size())
            res = t;
        for(char i='a'; i<='z'; i++){
            if(ss.count(t+i)){
                dfs(t+i);
            }
        }
    }
};