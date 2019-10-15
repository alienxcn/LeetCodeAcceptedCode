// 数学。
class Solution {
public:
    bool isHappy(int n) {
        string tmp;
        int T = n;
        for(int i=0; i<6; i++){
            tmp = to_string(T);
            int len = tmp.length();
            int res = 0;
            for(int j=0; j<len; j++){
                res += (tmp[j]-'0') * (tmp[j]-'0');
            }
            if(res == 1){
                return true;
            } else {
                T = res;
            }
        }
        return false;
    }
};