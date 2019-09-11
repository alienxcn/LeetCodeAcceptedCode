class Solution {
public:
    int strStr(string haystack, string needle) {
        if(needle.size() == 0){
            return 0;
        }
        int len1 = haystack.length();
        int len2 = needle.length();
        bool flag = true;
        for(int i=0; i<=len1-len2; i++){
            int t = i;
            for(int j=0; j<len2; j++){
                if(haystack[t++] == needle[j]){
                    flag = true;
                } else {
                    flag = false;
                    break;
                }
                if(j == len2-1 && flag){
                    return i;
                }
            }
        }
        return -1;
    }
};