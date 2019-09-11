// sig如果是int类型，部分样例会溢出。
class Solution {
public:
    int titleToNumber(string s) {
        int len = s.length();
        int res = 0;
        long long sig = 1;
        for(int i=len-1; i>=0; i--){
            res += (s[i]-'A'+1) * sig;
            sig *= 26;
        }
        return res;
    }
};