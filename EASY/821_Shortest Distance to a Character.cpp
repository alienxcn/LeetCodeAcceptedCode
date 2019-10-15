class Solution {
public:
    vector<int> shortestToChar(string S, char C) {
        vector<int> res;
        vector<int> posi;
        for(int i=0; i<S.size(); i++){
            if(S[i] == C){
                res.push_back(-1);
                posi.push_back(i);
            } else {
                res.push_back(0);
            }
        }
        for(int i=0; i<posi.size(); i++){
            int p = posi[i];
            int count = 1;
            int L = p-1;
            int R = p+1;
            while(L>=0 && res[L]!=-1){
                if(res[L] == 0 || res[L] > count)
                    res[L] = count++;
                L--;
            }
            count = 1;
            while(R<res.size() && res[R]!=-1){
                if(res[R] == 0 || res[R] > count)
                    res[R] = count++;
                R++;
            }
        }
        for(int i=0; i<res.size(); i++){
            if(res[i] == -1){
                res[i]++;
            }
        }
        return res;
    }
};