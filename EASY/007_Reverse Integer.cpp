class Solution {
public:
    char str[1024];
    int reverse(int x) {
        int ans = 1, star = 0, tmp = 0, len;
        sprintf(str, "%d", x);
        len = strlen(str);
        if(str[0] == '-'){
            star = 1;
            ans = -1;
        }
        for(int i = len-1, j; i>=star; i--){
            j = str[i] - '0';
            if(tmp > 214748364)
                return 0;
            tmp = tmp * 10 + j;
        }
        return tmp * ans;
    }
};