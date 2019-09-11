class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        int ha[26] = {2,3,3,2,1,2,2,2,1,2,2,2,3,3,1,1,1,1,2,1,1,3,1,3,1,3};
        vector<string> res;
        for(int i=0; i<words.size(); i++){
            string t = words[i];
            int te = ha[tolower(t[0]) - 'a'];
            int index = 1;
            for(; index<t.length(); index++){
                if(ha[tolower(t[index]) - 'a'] == te){
                    continue;
                } else {
                    break;
                }
            }
            if(index == t.length()){
                res.push_back(t);
            }
        }
        return res;
    }
};