// 字符出现的周期变化。

class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        int len = s.size();
        for(int t=1; t<=len/2; t++){
            if(len%t) {
                continue;
            }
            int i=0;
            for (i=t; i<len && s[i%t] == s[i]; i++);
            if(i == len) {
                return true;
            }
        }
        return false;
    }
};