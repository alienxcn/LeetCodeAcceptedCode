class Solution {
public:
    vector<int> numSmallerByFrequency(vector<string>& queries, vector<string>& words) {
        vector<int> a;
        vector<int> b;
        vector<int> res;
        for(int i=0; i<queries.size(); i++){
            sort(queries[i].begin(), queries[i].end());
            int res = 0;
            for(int j=0; j<queries[i].size(); j++)
                if(queries[i][j] == queries[i][0])
                    res++;
                else
                    break;
            a.push_back(res);
        }
        for(int i=0; i<words.size(); i++){
            sort(words[i].begin(), words[i].end());
            int res = 0;
            for(int j=0; j<words[i].size(); j++)
                if(words[i][j] == words[i][0])
                    res++;
                else
                    break;
            b.push_back(res);
        }
        sort(b.begin(), b.end());
        for(int i=0; i<a.size(); i++){
            res.push_back(0);
            for(int j=0; j<b.size(); j++){
                if(a[i] < b[j]){
                    res[res.size()-1] = b.size() - j;
                    break;
                }
            }
        }
        return res;
    }
};