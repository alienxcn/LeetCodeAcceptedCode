class Solution {
public:
    int myAtoi(string str) {
        long INTMAX = 2147483647;
        long INTMIN = -2147483648;
        
        if(str.size() == 0)
            return 0;
        
        int posi = 0;
        while(posi < str.size() && str[posi] == ' '){
            posi++;
        }
        bool ttt = false;
        while(posi < str.size() && str[posi] == '0'){
            ttt = true;
            posi++;
        }
        if(ttt && !isdigit(str[posi])){
            // str = "0-1"
            return 0;
        }
        if(isdigit(str[posi]) || str[posi] == '+' || str[posi] == '-'){
            bool sig;
            string tmp;
            if(str[posi] == '+')
                sig = true;
            if(str[posi] == '-')
                sig = false;
            if(isdigit(str[posi]))
                posi = posi;
            else
                posi = posi + 1;
            
            while(posi < str.size() && str[posi] == '0'){
                posi++;
            }      

            while(posi < str.size() && isdigit(str[posi])){
                tmp += str[posi++];
            }
            // cout << tmp << endl;
            
            if(tmp.size() > 10)
                return sig == true ? 2147483647 : -2147483648;
            long ss = 0;
            for(int i=0; i<tmp.size(); i++){
                ss = ss * 10 + (tmp[i] - '0');
            }
            ss = (sig == true ? ss : ss*-1);
            if(ss > INTMAX)
                return 2147483647;
            if(ss < INTMIN)
                return -2147483648;
            return ss;
        } else {
            return 0;
        }
    }
};