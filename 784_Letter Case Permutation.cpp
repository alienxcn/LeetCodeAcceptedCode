class Solution {
public:
    void DFS(string S, vector<string>& ans, int pos){
        while(pos < S.size() && !isalpha(S[pos]))
            pos++;
        if(pos >= S.size()){
            ans.push_back(S);
            return;
        }
        string t1 = S;
        string t2 = S;
        t1[pos] = toupper(t1[pos]);
        t2[pos] = tolower(t2[pos]);
        
        DFS(t1, ans, pos+1);
        DFS(t2, ans, pos+1);
    }
    vector<string> letterCasePermutation(string S) {
        vector<string> a;
        DFS(S, a, 0);
        return a;
    }
};