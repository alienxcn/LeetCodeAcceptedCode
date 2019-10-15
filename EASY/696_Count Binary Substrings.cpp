class Solution {
public:
    int countBinarySubstrings(string s) {
        int L = 0;
        int R = 0;
        int res = 0;
        for(int i=0; i<s.size();){
            while(i<s.size() && s[i] == '0'){
                L++;
                i++;
            }
            cout << L << " " << R << endl;
            res += min(L, R);
            R = 0;
            while(i<s.size() && s[i] == '1'){
                R++;
                i++;
            }
            cout << L << " " << R << endl;
            res += min(L, R);
            L = 0;
        }
        return res;
    }
};