class Solution {
public:
    int longestPalindrome(string s) {
        int sig = 0;
        int res = 0;
        int lower[26] = {0};
        int upper[26] = {0};
        int len = s.length();
        for(int i=0; i<len; i++){
            if(65<=s[i] && s[i]<=90){
                upper[s[i]-'A']++;
            } else {
                lower[s[i]-'a']++;
            }
        }
        for(int i=0; i<26; i++){
            if(lower[i]%2 == 0){
                res += lower[i];
            } else {
                res += (lower[i] - 1);
                sig = 1;
            }
            if(upper[i]%2 == 0){
                res += upper[i];
            } else {
                res += (upper[i] - 1);
                sig = 1;
            }
        }
        return res + sig;
    }
};