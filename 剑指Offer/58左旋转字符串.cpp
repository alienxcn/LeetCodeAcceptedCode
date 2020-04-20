class Solution {
public:
    string reverseLeftWords(string s, int n) {
        string L = s.substr(0, n);
        string R = s.substr(n, s.size()-n);
        reverse(L.begin(), L.end());
        reverse(R.begin(), R.end());
        string res = L+R;
        reverse(res.begin(), res.end());
        return res;
    }
};