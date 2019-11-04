class Solution {
public:
    string longestPalindrome(string s) {
        string ans;
        for(int i=0; i<s.size(); i++){
            ans += s[i];
            ans += '#';
        }
        if(s.size() != 0){
            ans.erase(ans.size()-1);
            ans = "^#" + ans + "#$";
        } else {
            ans = "^$";
        }
        int n = ans.size();
        vector<int> P(n, 0);
        int C = 0, R = 0;
        for(int i=1; i<n-1; i++){
            int i_mirror = 2 * C - i;
            if(R > i)
                P[i] = min(R-i, P[i_mirror]);
            else
                P[i] = 0;

            while(ans[i+1+P[i]] == ans[i-1-P[i]])
                P[i]++;
            if(i + P[i] > R){
                C = i;
                R = i+P[i];
            }
        }

        int _t = 0;
        int _i = 0;
        for(int i=1; i<n-1; i++){
            if(P[i] > _t){
                _t = P[i];
                _i = i;
            }
        }
        int _s = (_i - _t)/2;
        return s.substr(_s, _t);
    }
};