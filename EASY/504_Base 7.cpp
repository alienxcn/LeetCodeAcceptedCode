class Solution {
public:
    string convertToBase7(int num) {
        bool sig = false;
        string res = "";
        if(num < 0){
            sig = true;
            num *= -1;
        } else if(num == 0){
            res = '0' + res;
            return res;
        }
        while(num){
            int a = num%7;
            char c = '0' + a;
            res = c + res;
            num/=7;
        }
        if(sig)
            res = '-' + res;
        return res;
    }
};