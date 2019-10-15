class Solution {
public:
    vector<string> reorderLogFiles(vector<string>& logs) {
        vector<string> maths;
        vector<string> alpha;
        for(int i=0; i<logs.size(); i++){
            int posi = logs[i].find(' ') + 1;
            if(isalpha(logs[i][posi])){
                alpha.push_back(logs[i]);
            } else {
                maths.push_back(logs[i]);
            }
        }
        sort(alpha.begin(), alpha.end(), [](const string &x, const string &y) -> int {
            string xx = x.substr(x.find(' ')+1, x.size());
            string yy = y.substr(y.find(' ')+1, y.size());
            if(xx.compare(yy) == 0){
                return x.substr(0, x.find(' ')) < y.substr(0, y.find(' '));
            } else {
                return xx < yy;
            }
        });
        vector<string> ans;
        for(int i=0; i<alpha.size(); i++){
            ans.push_back(alpha[i]);
        }
        for(int i=0; i<maths.size(); i++){
            ans.push_back(maths[i]);
        }
        return ans;
    }
};