class Solution {
public:
    vector<vector<int>> largeGroupPositions(string S) {
        vector<vector<int>> res;
        if(S.size() == 0)
            return res;
        S = S + '$';
        int L = 0, R = 0;
        int count = 0;
        char last = S[0];
        for(int i=0; i<S.size(); i++){
            if(S[i] == last){
                count++;
                R = i;
            } else {
                if(count >= 3){
                    vector<int> temp;
                    temp.push_back(L);
                    temp.push_back(R);
                    res.push_back(temp);
                }
                L = i;
                count = 1;
                last = S[i];
            }
        }
        return res;
    }
};