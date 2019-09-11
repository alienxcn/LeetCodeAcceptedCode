class Solution {
public:
    char str[1024];
    int reverse(int x){        
        int ans = 1, start = 0, tmp = 0, len;
        sprintf(str, "%d", x);
        len = strlen(str);
        for(int i=len-1,j; i>=start; i--){
            j = str[i] - '0';
            if(tmp > 214748364)
                return 0;
            tmp = tmp*10 + j;
        }
        return tmp*ans;
    }
    bool isPalindrome(int x) {
        if(x<0)
            return false;
        int tmp = reverse(x);
        return tmp == x;
    }
};