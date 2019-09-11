class Solution {
public:
    int countSegments(string s) {
        int sum = 0;
        int len = s.length();
        bool sig = false;
        for(int i=0; i<len; i++){
            if(s[i] != ' '){
                sig = true;
            } else {
                if(sig){
                    sum++;
                    sig = false;
                }
            }
        }
        if(sig){
            sum++;
        }
        return sum;
    }
};