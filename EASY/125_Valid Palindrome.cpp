// 不能使用额外的空间，否则最后一个样例过不了。
class Solution {
public:
    bool isPalindrome(string s) {
        int len = s.length();
        if(len == 0){
            return true;
        }
        int i = 0;
        int j = s.length() - 1;
        while(i<j){
            while(i<j && !isalnum(s[i])){
                i++;
            }
            while(i<j && !isalnum(s[j])){
                j--;
            }
            if(tolower(s[i++]) != tolower(s[j--])){
                return false;
            }
        }
        return true;
    }
};