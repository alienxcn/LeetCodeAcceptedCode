class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> res;
        int a[26] = {0};
        int b[26] = {0};
        int lenS = s.length();
        int lenP = p.length();
        if(lenS < lenP){
            return res;
        }
        for(int i=0; i<lenP; i++){
            a[p[i]-'a']++;
            b[s[i]-'a']++;
        }
        for(int i=0; i<=lenS-lenP; i++){
            int j = 0;
            for(; j<26; j++){
                if(a[j] != b[j]){
                    break;
                }
            }
            if(j == 26){
                res.push_back(i);
            }
            b[s[i]-'a']--;
            if(i<lenS-lenP)
                b[s[i+lenP]-'a']++;
        }
        return res;
    }
};