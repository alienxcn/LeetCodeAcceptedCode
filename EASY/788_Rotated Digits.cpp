class Solution {
public:
    int rotatedDigits(int N) {
        int res = 0;
        for(int i=2; i<=N; i++){
            int sig = 0;
            string s = to_string(i);
            for(int j=0; j<s.size(); j++){
                if(s[j] == '3' || s[j] == '4' || s[j] == '7'){
                    sig = 1;
                    break;
                }
                if(s[j] == '2' || s[j] == '5' || s[j] == '6' || s[j] == '9'){
                    sig = 2;
                }
                if(s[j] == '1' || s[j] == '0' || s[j] == '8'){
                    if(sig == 3 || sig == 0)
                        sig = 3;
                }
                
            }
            if(sig == 2)
                res++;
        }
        return res;
    }
};