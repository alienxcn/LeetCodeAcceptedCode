class Solution {
public:
    vector<int> numberOfLines(vector<int>& widths, string S) {
        int a[2] = {0};
        vector<int> res(a, a+2);
        int all = 0;
        for(int i=0; i<S.size(); i++){
            int len = widths[S[i] - 'a'];
            if(all >= len){
                all -= len;
                continue;
            } else {
                all = 100 - len;
                res[0]++;
            }
        }
        res[1] = 100 - all;
        return res;
    }
};