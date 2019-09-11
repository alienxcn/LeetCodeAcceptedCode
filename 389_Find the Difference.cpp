class Solution {
public:
    char findTheDifference(string s, string t) {
        int a[26] = {0};
        int b[26] = {0};
        int len = s.length();
        for(int i=0; i<len; i++){
            a[s[i]-'a']++;
            b[t[i]-'a']++;
        }
        b[t[len]-'a']++;
        for(int i=0; i<26; i++){
            if(a[i] != b[i]){
                return 'a' + i;
            }
        }
        return '0';
    }
};